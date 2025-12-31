/* By:
███╗   ███╗██╗   ██╗██████╗ ███████╗ █████╗ ██╗      █████╗ ████████╗██╗   ██╗██╗     
████╗ ████║██║   ██║██╔══██╗██╔════╝██╔══██╗██║     ██╔══██╗╚══██╔══╝██║   ██║██║     
██╔████╔██║██║   ██║██████╔╝███████╗███████║██║     ███████║   ██║   ██║   ██║██║     
██║╚██╔╝██║██║   ██║██╔══██╗╚════██║██╔══██║██║     ██╔══██║   ██║   ██║   ██║██║     
██║ ╚═╝ ██║╚██████╔╝██║  ██║███████║██║  ██║███████╗██║  ██║   ██║   ╚██████╔╝███████╗
╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚══════╝
NOTE: Feel free to modify this file as much as you need.
Some bad time saving practices: Here i have used many identifiers which are hard to remember.
*/
#include <bits/stdc++.h>
using namespace std;

// ==================== FAST I/O ====================
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// ==================== TYPE DEFINITIONS ====================
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef set<ll> sll;
typedef multiset<ll> msll;
typedef map<ll, ll> mll;
typedef map<string, ll> msl;
typedef map<char, ll> mcl;

// ==================== CONSTANTS ====================
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const ll INF = 1e18;
const int MAXN = 2e5 + 5;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);

// ==================== UTILITY MACROS ====================
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define _ << ' ' <<
#define el << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

// ==================== LOOP MACROS ====================
#define fori(x, y) for (ll i = (x); i <= (y); i++)
#define forj(x, y) for (ll j = (x); j <= (y); j++)
#define fork(x, y) for (ll k = (x); k <= (y); k++)

// ==================== CUSTOM FUNCTION MACROS ====================
#define takev(v)       \
    for (auto &it : v) \
        cin >> it;
#define isPerfectSquare(x) ([](long long n) { \
    long long r = sqrtl(n); \
    return r * r == n; })(x)

// ==================== MATH UTILITIES ====================
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pow2(x) (1LL << (x))
#define ispower2(x) ((x) && !((x) & ((x) - 1)))

// ==================== BIT MANIPULATION ====================
#define setbit(x, i) (x |= (1LL << i))
#define clearbit(x, i) (x &= ~(1LL << i))
#define togglebit(x, i) (x ^= (1LL << i))
#define checkbit(x, i) ((x >> i) & 1)
#define popcount(x) __builtin_popcountll(x)
#define clz(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctzll(x)

// ==================== MODULAR ARITHMETIC ====================
ll mod_add(ll a, ll b, ll m = MOD) { return ((a % m) + (b % m)) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return ((a % m) - (b % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
ll power(ll a, ll b, ll m = MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}
ll mod_inv(ll a, ll m = MOD) { return power(a, m - 2, m); }
ll mod_div(ll a, ll b, ll m = MOD) { return mod_mul(a, mod_inv(b, m), m); }

// ==================== DIRECTION ARRAYS ====================
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
// First 4: 4-directional, All 8: 8-directional

// ==================== ENHANCED DEBUG SYSTEM ====================
#ifndef ONLINE_JUDGE
// Color codes for better visibility
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define RESET "\033[0m"
#define BOLD "\033[1m"

// ==================== BASIC DEBUG MACROS ====================
/* 
 * debug(x) - Print single variable with name and value
 * Usage: debug(n);
 * Output: [DEBUG] n = 5
 */
#define debug(x) cerr << YELLOW << "[DEBUG] " << CYAN << #x << " = " << MAGENTA << x << RESET << '\n'

/* 
 * debug2(x, y) - Print two variables with names and values
 * Usage: debug2(n, m);
 * Output: [DEBUG] n = 5, m = 10
 */
#define debug2(x, y) cerr << YELLOW << "[DEBUG] " << CYAN << #x << " = " << MAGENTA << x << WHITE << ", " << CYAN << #y << " = " << MAGENTA << y << RESET << '\n'

/* 
 * debug3(x, y, z) - Print three variables with names and values
 * Usage: debug3(a, b, c);
 * Output: [DEBUG] a = 1, b = 2, c = 3
 */
#define debug3(x, y, z) cerr << YELLOW << "[DEBUG] " << CYAN << #x << " = " << MAGENTA << x << WHITE << ", " << CYAN << #y << " = " << MAGENTA << y << WHITE << ", " << CYAN << #z << " = " << MAGENTA << z << RESET << '\n'

/* 
 * debug4(x, y, z, w) - Print four variables with names and values
 * Usage: debug4(a, b, c, d);
 * Output: [DEBUG] a = 1, b = 2, c = 3, d = 4
 */
#define debug4(x, y, z, w) cerr << YELLOW << "[DEBUG] " << CYAN << #x << " = " << MAGENTA << x << WHITE << ", " << CYAN << #y << " = " << MAGENTA << y << WHITE << ", " << CYAN << #z << " = " << MAGENTA << z << WHITE << ", " << CYAN << #w << " = " << MAGENTA << w << RESET << '\n'

/* 
 * debug5(x, y, z, w, v) - Print five variables with names and values
 * Usage: debug5(a, b, c, d, e);
 * Output: [DEBUG] a = 1, b = 2, c = 3, d = 4, e = 5
 */
#define debug5(x, y, z, w, v) cerr << YELLOW << "[DEBUG] " << CYAN << #x << " = " << MAGENTA << x << WHITE << ", " << CYAN << #y << " = " << MAGENTA << y << WHITE << ", " << CYAN << #z << " = " << MAGENTA << z << WHITE << ", " << CYAN << #w << " = " << MAGENTA << w << WHITE << ", " << CYAN << #v << " = " << MAGENTA << v << RESET << '\n'

// ==================== CONTAINER DEBUG MACROS ====================
/* 
 * debugv(v) - Print vector/array elements in bracket format
 * Usage: vector<int> arr = {1, 2, 3}; debugv(arr);
 * Output: [VECTOR] arr = [1, 2, 3]
 */
#define debugv(v)                                                             \
    do                                                                        \
    {                                                                         \
        cerr << YELLOW << "[VECTOR] " << CYAN << #v << " = " << WHITE << "["; \
        for (int _i = 0; _i < (int)v.size(); _i++)                            \
        {                                                                     \
            if (_i)                                                           \
                cerr << ", ";                                                 \
            cerr << MAGENTA << v[_i] << WHITE;                                \
        }                                                                     \
        cerr << "]" << RESET << '\n';                                         \
    } while (0)

/* 
 * debugvp(v) - Print vector of pairs in bracket format
 * Usage: vector<pair<int,int>> vp = {{1,2}, {3,4}}; debugvp(vp);
 * Output: [VECTOR<PAIR>] vp = [(1,2), (3,4)]
 */
#define debugvp(v)                                                                        \
    do                                                                                    \
    {                                                                                     \
        cerr << YELLOW << "[VECTOR<PAIR>] " << CYAN << #v << " = " << WHITE << "[";       \
        for (int _i = 0; _i < (int)v.size(); _i++)                                        \
        {                                                                                 \
            if (_i)                                                                       \
                cerr << ", ";                                                             \
            cerr << MAGENTA << "(" << v[_i].first << "," << v[_i].second << ")" << WHITE; \
        }                                                                                 \
        cerr << "]" << RESET << '\n';                                                     \
    } while (0)

/* 
 * debugs(s) - Print set elements in curly braces format
 * Usage: set<int> s = {3, 1, 2}; debugs(s);
 * Output: [SET] s = {1, 2, 3}
 */
#define debugs(s)                                                          \
    do                                                                     \
    {                                                                      \
        cerr << YELLOW << "[SET] " << CYAN << #s << " = " << WHITE << "{"; \
        bool _first = true;                                                \
        for (auto &_x : s)                                                 \
        {                                                                  \
            if (!_first)                                                   \
                cerr << ", ";                                              \
            cerr << MAGENTA << _x << WHITE;                                \
            _first = false;                                                \
        }                                                                  \
        cerr << "}" << RESET << '\n';                                      \
    } while (0)

/* 
 * debugm(m) - Print map key-value pairs in curly braces format
 * Usage: map<int,int> m = {{1,10}, {2,20}}; debugm(m);
 * Output: [MAP] m = {1:10, 2:20}
 */
#define debugm(m)                                                          \
    do                                                                     \
    {                                                                      \
        cerr << YELLOW << "[MAP] " << CYAN << #m << " = " << WHITE << "{"; \
        bool _first = true;                                                \
        for (auto &_p : m)                                                 \
        {                                                                  \
            if (!_first)                                                   \
                cerr << ", ";                                              \
            cerr << MAGENTA << _p.first << ":" << _p.second << WHITE;      \
            _first = false;                                                \
        }                                                                  \
        cerr << "}" << RESET << '\n';                                      \
    } while (0)

/* 
 * debugq(q) - Print queue elements from front to back (non-destructive)
 * Usage: queue<int> q; q.push(1); q.push(2); debugq(q);
 * Output: [QUEUE] q = [1, 2]
 */
#define debugq(q)                                                            \
    do                                                                       \
    {                                                                        \
        auto _temp = q;                                                      \
        cerr << YELLOW << "[QUEUE] " << CYAN << #q << " = " << WHITE << "["; \
        bool _first = true;                                                  \
        while (!_temp.empty())                                               \
        {                                                                    \
            if (!_first)                                                     \
                cerr << ", ";                                                \
            cerr << MAGENTA << _temp.front() << WHITE;                       \
            _temp.pop();                                                     \
            _first = false;                                                  \
        }                                                                    \
        cerr << "]" << RESET << '\n';                                        \
    } while (0)

/* 
 * debugpq(pq) - Print priority queue elements from top (non-destructive)
 * Usage: priority_queue<int> pq; pq.push(3); pq.push(1); debugpq(pq);
 * Output: [PRIORITY_QUEUE] pq = [3, 1]
 */
#define debugpq(pq)                                                                    \
    do                                                                                 \
    {                                                                                  \
        auto _temp = pq;                                                               \
        cerr << YELLOW << "[PRIORITY_QUEUE] " << CYAN << #pq << " = " << WHITE << "["; \
        bool _first = true;                                                            \
        while (!_temp.empty())                                                         \
        {                                                                              \
            if (!_first)                                                               \
                cerr << ", ";                                                          \
            cerr << MAGENTA << _temp.top() << WHITE;                                   \
            _temp.pop();                                                               \
            _first = false;                                                            \
        }                                                                              \
        cerr << "]" << RESET << '\n';                                                  \
    } while (0)

// ==================== 2D ARRAY/VECTOR DEBUG MACROS ====================
/* 
 * debug2d(arr, n, m) - Print 2D array with row indices
 * Usage: int arr[2][3] = {{1,2,3}, {4,5,6}}; debug2d(arr, 2, 3);
 * Output: 
 * [2D ARRAY] arr:
 *   [0] 1 2 3
 *   [1] 4 5 6
 */
#define debug2d(arr, n, m)                                                 \
    do                                                                     \
    {                                                                      \
        cerr << YELLOW << "[2D ARRAY] " << CYAN << #arr << RESET << ":\n"; \
        for (int _i = 0; _i < n; _i++)                                     \
        {                                                                  \
            cerr << WHITE << "  [" << _i << "] ";                          \
            for (int _j = 0; _j < m; _j++)                                 \
            {                                                              \
                cerr << MAGENTA << arr[_i][_j] << WHITE;                   \
                if (_j < m - 1)                                            \
                    cerr << " ";                                           \
            }                                                              \
            cerr << RESET << '\n';                                         \
        }                                                                  \
    } while (0)

/* 
 * debugvv(vv) - Print 2D vector with row indices
 * Usage: vector<vector<int>> vv = {{1,2}, {3,4,5}}; debugvv(vv);
 * Output: 
 * [2D VECTOR] vv:
 *   [0] 1 2
 *   [1] 3 4 5
 */
#define debugvv(vv)                                                        \
    do                                                                     \
    {                                                                      \
        cerr << YELLOW << "[2D VECTOR] " << CYAN << #vv << RESET << ":\n"; \
        for (int _i = 0; _i < (int)vv.size(); _i++)                        \
        {                                                                  \
            cerr << WHITE << "  [" << _i << "] ";                          \
            for (int _j = 0; _j < (int)vv[_i].size(); _j++)                \
            {                                                              \
                cerr << MAGENTA << vv[_i][_j] << WHITE;                    \
                if (_j < (int)vv[_i].size() - 1)                           \
                    cerr << " ";                                           \
            }                                                              \
            cerr << RESET << '\n';                                         \
        }                                                                  \
    } while (0)

// ==================== RANGE DEBUG MACROS ====================
/* 
 * debugrange(arr, start, end) - Print array elements from start to end index
 * Usage: int arr[] = {1,2,3,4,5}; debugrange(arr, 1, 3);
 * Output: [RANGE] arr[1..3] = [2, 3, 4]
 */
#define debugrange(arr, start, end)                                                                            \
    do                                                                                                         \
    {                                                                                                          \
        cerr << YELLOW << "[RANGE] " << CYAN << #arr << "[" << start << ".." << end << "] = " << WHITE << "["; \
        for (int _i = start; _i <= end; _i++)                                                                  \
        {                                                                                                      \
            if (_i > start)                                                                                    \
                cerr << ", ";                                                                                  \
            cerr << MAGENTA << arr[_i] << WHITE;                                                               \
        }                                                                                                      \
        cerr << "]" << RESET << '\n';                                                                          \
    } while (0)

// ==================== FUNCTION TRACE DEBUG MACROS ====================
/* 
 * debugfuncstart(func_name) - Mark function entry
 * Usage: debugfuncstart("solve");
 * Output: [ENTER] solve
 */
#define debugfuncstart(func_name) cerr << GREEN << "[ENTER] " << BOLD << func_name << RESET << '\n'

/* 
 * debugfuncend(func_name) - Mark function exit
 * Usage: debugfuncend("solve");
 * Output: [EXIT]  solve
 */
#define debugfuncend(func_name) cerr << RED << "[EXIT]  " << BOLD << func_name << RESET << '\n'

// ==================== CONDITIONAL AND LOOP DEBUG MACROS ====================
/* 
 * debugif(condition, x) - Debug variable only if condition is true
 * Usage: debugif(n > 5, n);
 * Output: [DEBUG] n = 10 (only if n > 5)
 */
#define debugif(condition, x) \
    do                        \
    {                         \
        if (condition)        \
            debug(x);         \
    } while (0)

/* 
 * debugloop(i, msg) - Print loop iteration with custom message
 * Usage: debugloop(i, "Processing element");
 * Output: [LOOP i=2] Processing element
 */
#define debugloop(i, msg) cerr << BLUE << "[LOOP i=" << i << "] " << WHITE << msg << RESET << '\n'

// ==================== TIME MEASUREMENT DEBUG MACROS ====================
/* 
 * debugtime(code) - Measure execution time of code block
 * Usage: debugtime(sort(arr.begin(), arr.end()));
 * Output: [TIME] sort(arr.begin(), arr.end()) took 1250 microseconds
 */
#define debugtime(code)                                                                                                                       \
    do                                                                                                                                        \
    {                                                                                                                                         \
        auto _start = chrono::high_resolution_clock::now();                                                                                   \
        code;                                                                                                                                 \
        auto _end = chrono::high_resolution_clock::now();                                                                                     \
        auto _duration = chrono::duration_cast<chrono::microseconds>(_end - _start);                                                          \
        cerr << CYAN << "[TIME] " << WHITE << #code << " took " << MAGENTA << _duration.count() << WHITE << " microseconds" << RESET << '\n'; \
    } while (0)

// ==================== BINARY REPRESENTATION DEBUG MACROS ====================
/* 
 * debugbin(x) - Print binary representation of integer (32-bit)
 * Usage: debugbin(5);
 * Output: [BINARY] 5 = 00000000000000000000000000000101 (decimal: 5)
 */
#define debugbin(x)                                                                      \
    do                                                                                   \
    {                                                                                    \
        cerr << YELLOW << "[BINARY] " << CYAN << #x << " = " << MAGENTA;                 \
        for (int _i = 31; _i >= 0; _i--)                                                 \
            cerr << ((x >> _i) & 1);                                                     \
        cerr << WHITE << " (decimal: " << MAGENTA << x << WHITE << ")" << RESET << '\n'; \
    } while (0)

// ==================== ADVANCED ALGORITHM DEBUG MACROS ====================
/* 
 * debugsorted(v) - Print sorted version of vector without modifying original
 * Usage: vector<int> v = {3,1,4,2}; debugsorted(v);
 * Output: [SORTED] v = [1, 2, 3, 4]
 */
#define debugsorted(v)                                        \
    do                                                        \
    {                                                         \
        auto _temp = v;                                       \
        sort(_temp.begin(), _temp.end());                     \
        cerr << YELLOW << "[SORTED] " << CYAN << #v << " = "; \
        debugv(_temp);                                        \
    } while (0)

/* 
 * debugreversed(v) - Print reversed version of vector without modifying original
 * Usage: vector<int> v = {1,2,3,4}; debugreversed(v);
 * Output: [REVERSED] v = [4, 3, 2, 1]
 */
#define debugreversed(v)                                        \
    do                                                          \
    {                                                           \
        auto _temp = v;                                         \
        reverse(_temp.begin(), _temp.end());                    \
        cerr << YELLOW << "[REVERSED] " << CYAN << #v << " = "; \
        debugv(_temp);                                          \
    } while (0)

// ==================== VISUAL SEPARATOR DEBUG MACROS ====================
/* 
 * debugsep() - Print simple separator line
 * Usage: debugsep();
 * Output: ----------------------------------------
 */
#define debugsep() cerr << WHITE << "----------------------------------------" << RESET << '\n'

/* 
 * debugsep2() - Print double separator line
 * Usage: debugsep2();
 * Output: ========================================
 */
#define debugsep2() cerr << GREEN << "========================================" << RESET << '\n'

// ==================== CUSTOM MESSAGE DEBUG MACROS ====================
/* 
 * debugmsg(msg) - Print general message
 * Usage: debugmsg("Starting algorithm");
 * Output: [MSG] Starting algorithm
 */
#define debugmsg(msg) cerr << GREEN << "[MSG] " << WHITE << msg << RESET << '\n'

/* 
 * debugerr(msg) - Print error message
 * Usage: debugerr("Invalid input detected");
 * Output: [ERROR] Invalid input detected
 */
#define debugerr(msg) cerr << RED << "[ERROR] " << WHITE << msg << RESET << '\n'

/* 
 * debugwarn(msg) - Print warning message
 * Usage: debugwarn("Edge case detected");
 * Output: [WARN] Edge case detected
 */
#define debugwarn(msg) cerr << YELLOW << "[WARN] " << WHITE << msg << RESET << '\n'

/* 
 * debugok(msg) - Print success message
 * Usage: debugok("Algorithm completed successfully");
 * Output: [OK] Algorithm completed successfully
 */
#define debugok(msg) cerr << GREEN << "[OK] " << WHITE << msg << RESET << '\n'


#else
// Disabled in online judges
#define debug(x)
#define debug2(x, y)
#define debug3(x, y, z)
#define debug4(x, y, z, w)
#define debug5(x, y, z, w, v)
#define debugv(v)
#define debugvp(v)
#define debugs(s)
#define debugm(m)
#define debugq(q)
#define debugpq(pq)
#define debug2d(arr, n, m)
#define debugvv(vv)
#define debugrange(arr, start, end)
#define debugfuncstart(func_name)
#define debugfuncend(func_name)
#define debugif(condition, x)
#define debugloop(i, msg)
#define debugtime(code) code
#define debugbin(x)
#define debugsorted(v)
#define debugreversed(v)
#define debugsep()
#define debugsep2()
#define debugmsg(msg)
#define debugerr(msg)
#define debugwarn(msg)
#define debugok(msg)
#endif

// ==================== FILE I/O ====================
#define readfile                      \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

// ==================== TEST CASE HANDLING ====================
#define test                   \
    ll CASESTART = 1, CASEEND; \
    for (cin >> CASEEND; CASESTART <= CASEEND; CASESTART++)

// ==================== PRECISION OUTPUT ====================
#define coutDecimal(num, deci_point) cout << fixed << setprecision(deci_point) << num

// ==================== SOLUTION TEMPLATE ====================
void solve()
{
    debugfuncstart("solve");
    // code here

    debugfuncend("solve");
}

// ==================== MAIN FUNCTION ====================
int main()
{
    fastio;

    // For multiple test cases (comment out if single test case)
    test
    {
        debugmsg("Test case " + to_string(CASESTART));
        solve();
        debugsep();
    }

    // For single test case (uncomment if needed)
    // solve();

    // For contest with specific output format (uncomment if needed)
    // test {
    //     cout << "Case " << CASESTART << ": ";
    //     solve();
    // }

    return 0;
}
