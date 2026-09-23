//
//  LogManager.m
//  MioPlugin
//
//  统一日志实现。
//  所有日志通过 WPLog / WPLogDebug 宏进入此文件，
//  统一写入 Documents/MioPlugin_Logs/MioPlugin.log。
//

#import "LogManager.h"
#import <stdatomic.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

#pragma mark - 热度计（唤醒/崩溃排查）

#define WPHEAT_MAX 32
#define WPHEAT_FLUSH_SEC 2   // 汇总窗口：2s（原 5s，收窄以提升崩溃时刻定位精度）
typedef struct { const char *key; _Atomic unsigned long count; } WPHeatSlot;
static WPHeatSlot g_heatSlots[WPHEAT_MAX];
static int g_heatSlotCount = 0;
static dispatch_once_t g_heatOnce;
static dispatch_source_t g_heatTimer = nil;

// ── 崩溃取证（2026-09-24，(91).log 实锤 21 秒真崩、崩前零日志）──
// WPHeatTick 顺便记录最后活跃的 hook；崩溃瞬间（signal/异常 handler）把
// 崩溃类型 + last_hook 写入独立文件 MioPlugin_Crash.log，一击定位死点。
static _Atomic (const char *) g_lastHookKey = NULL;   // key 为字面量，指针全程稳定
static int g_crashFd = -1;                            // 崩溃日志专用 fd，install 期打开持到进程死

static NSString *WPLogFilePath(void);   // 前置声明：定义在本文件下方

// signal handler：只允许 async-signal-safe 调用（write），手拼不调 snprintf
static void WPCrashSignalHandler(int sig) {
    if (g_crashFd >= 0) {
        char buf[192];
        char *p = buf;
        const char *s = "[MioCrash] sig=";
        while (*s) *p++ = *s++;
        if (sig >= 10) *p++ = (char)('0' + sig / 10);
        *p++ = (char)('0' + sig % 10);
        s = " last_hook=";
        while (*s) *p++ = *s++;
        const char *key = atomic_load_explicit(&g_lastHookKey, memory_order_relaxed);
        if (!key) key = "(none)";
        while (*key && p < buf + sizeof(buf) - 1) *p++ = *key++;
        *p++ = '\n';
        write(g_crashFd, buf, (size_t)(p - buf));
    }
    signal(sig, SIG_DFL);
    raise(sig);   // 交还系统：正常生成 .ips 崩溃报告
}

// ObjC 未捕获异常（非 signal 上下文，可用完整日志设施；链式保住微信自己的 handler）
static NSUncaughtExceptionHandler *g_prevUncaughtHandler = NULL;
static void WPCrashObjCExceptionHandler(NSException *exc) {
    const char *key = atomic_load_explicit(&g_lastHookKey, memory_order_relaxed);
    WPLog(@"Crash", @"[MioCrash] NSException=%@ reason=%@ last_hook=%s",
          exc.name, exc.reason, key ?: "(none)");
    WPLog(@"Crash", @"%@", exc.callStackSymbols);
    if (g_prevUncaughtHandler) g_prevUncaughtHandler(exc);
}

// 挂在 WPHeatTick 的 dispatch_once 里：时机=第一个 hook 首次命中，晚于微信启动期注册，可链到其 handler
static void WPInstallCrashForensics(void) {
    if (g_crashFd >= 0) return;
    NSString *crashPath = [WPLogFilePath() stringByReplacingOccurrencesOfString:
                           @"MioPlugin.log" withString:@"MioPlugin_Crash.log"];
    g_crashFd = open(crashPath.fileSystemRepresentation, O_WRONLY | O_CREAT | O_APPEND, 0644);

    // 备用信号栈：栈溢出(SIGSEGV)时 handler 也能在干净栈上跑完写入
    static char altStack[1 << 18];
    stack_t ss;
    memset(&ss, 0, sizeof(ss));
    ss.ss_sp = altStack;
    ss.ss_size = sizeof(altStack);
    ss.ss_flags = 0;
    sigaltstack(&ss, NULL);

    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = WPCrashSignalHandler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_ONSTACK;
    const int sigs[] = { SIGABRT, SIGSEGV, SIGBUS, SIGILL, SIGFPE, SIGTRAP };
    for (unsigned long i = 0; i < sizeof(sigs) / sizeof(sigs[0]); i++) {
        sigaction(sigs[i], &sa, NULL);
    }

    g_prevUncaughtHandler = NSGetUncaughtExceptionHandler();
    NSSetUncaughtExceptionHandler(WPCrashObjCExceptionHandler);

    WPLog(@"Crash", @"[MioCrash] 崩溃取证已安装 crash_fd=%d（NSException+6信号+备用栈，last_hook 追踪，热度窗 %ds）",
          g_crashFd, WPHEAT_FLUSH_SEC);
}

// 2 秒汇总：非零槽位打点速率日志并清零（幂等不刷屏：没热度的 hook 不打）
static void WPHeatFlush(void) {
    unsigned long total = 0;
    for (int i = 0; i < g_heatSlotCount; i++) {
        unsigned long c = atomic_exchange(&g_heatSlots[i].count, 0ul);
        if (c == 0) continue;
        total += c;
        WPLog(@"Heat", @"[Heat] %s: %lu 次/%ds (%.0f/s)",
              g_heatSlots[i].key, c, WPHEAT_FLUSH_SEC, c / (double)WPHEAT_FLUSH_SEC);
    }
    if (total > 0) {
        WPLog(@"Heat", @"[Heat] —— 合计 %lu 次/%ds (%.0f/s) ——",
              total, WPHEAT_FLUSH_SEC, total / (double)WPHEAT_FLUSH_SEC);
    }
}

void WPHeatTick(const char *key) {
    atomic_store_explicit(&g_lastHookKey, key, memory_order_relaxed);
    dispatch_once(&g_heatOnce, ^{
        WPInstallCrashForensics();
        g_heatTimer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0,
                                             dispatch_get_global_queue(QOS_CLASS_UTILITY, 0));
        dispatch_source_set_timer(g_heatTimer, DISPATCH_TIME_NOW,
                                  (uint64_t)WPHEAT_FLUSH_SEC * NSEC_PER_SEC, 1ull * NSEC_PER_SEC);
        dispatch_source_set_event_handler(g_heatTimer, ^{ WPHeatFlush(); });
        dispatch_resume(g_heatTimer);
    });
    for (int i = 0; i < g_heatSlotCount; i++) {
        if (g_heatSlots[i].key == key || strcmp(g_heatSlots[i].key, key) == 0) {
            atomic_fetch_add(&g_heatSlots[i].count, 1);
            return;
        }
    }
    // 注册新槽（key 先落位再计数，竞态无害：最坏多占一槽）
    if (g_heatSlotCount < WPHEAT_MAX) {
        int idx = g_heatSlotCount++;
        g_heatSlots[idx].key = key;
        atomic_store(&g_heatSlots[idx].count, 0);
        atomic_fetch_add(&g_heatSlots[idx].count, 1);
    }
}

/// 统一日志文件路径
/// 返回: .../Documents/MioPlugin_Logs/MioPlugin.log
/// 自动创建目录，dispatch_once 保证线程安全
static NSString *WPLogFilePath(void) {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(
            NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject
            stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"MioPlugin.log"];
    });
    return _logPath;
}

/// 向统一日志文件追加一行
/// 格式: [2026-06-10 14:30:22][Tag] 内容\n
static void WPLogAppendLine(NSString *tag, NSString *content) {
    @try {
        // 时间戳
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];

        // 构造行
        NSString *line = [NSString stringWithFormat:@"[%@][%@] %@\n",
                          timestamp, tag, content];

        // 追加写入
        NSString *filePath = WPLogFilePath();
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES
                     encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {
        // 日志写入失败不抛异常
    }
}

@implementation _WPLogManager

+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line {
    // WPLog 和 WPLogDebug 宏都最终调用此方法
    // 这是项目中唯一的日志写入方法
    WPLogAppendLine(tag, line);
}

@end