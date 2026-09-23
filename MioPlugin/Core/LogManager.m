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

#pragma mark - 热度计（唤醒排查）

#define WPHEAT_MAX 32
typedef struct { const char *key; _Atomic unsigned long count; } WPHeatSlot;
static WPHeatSlot g_heatSlots[WPHEAT_MAX];
static int g_heatSlotCount = 0;
static dispatch_once_t g_heatOnce;
static dispatch_source_t g_heatTimer = nil;

// 5 秒汇总：非零槽位打点速率日志并清零（幂等不刷屏：没热度的 hook 不打）
static void WPHeatFlush(void) {
    unsigned long total = 0;
    for (int i = 0; i < g_heatSlotCount; i++) {
        unsigned long c = atomic_exchange(&g_heatSlots[i].count, 0ul);
        if (c == 0) continue;
        total += c;
        WPLog(@"Heat", @"[Heat] %s: %lu 次/5s (%.0f/s)", g_heatSlots[i].key, c, c / 5.0);
    }
    if (total > 0) {
        WPLog(@"Heat", @"[Heat] —— 合计 %lu 次/5s (%.0f/s) ——", total, total / 5.0);
    }
}

void WPHeatTick(const char *key) {
    dispatch_once(&g_heatOnce, ^{
        g_heatTimer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0,
                                             dispatch_get_global_queue(QOS_CLASS_UTILITY, 0));
        dispatch_source_set_timer(g_heatTimer, DISPATCH_TIME_NOW,
                                  5ull * NSEC_PER_SEC, 1ull * NSEC_PER_SEC);
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