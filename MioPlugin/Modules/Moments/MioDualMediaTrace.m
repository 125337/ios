#import "MioDualMediaTrace.h"
#import <UIKit/UIKit.h>   // 主线程检测仅用于格式化时间戳，无 UI

// 环形缓冲：容量 240（HUD 一屏 ~40 行 × 6 屏回看），超限覆盖最旧。
// 全部操作 @synchronized(gLock)——埋点遍布导出队列/scheme 后台队列/主线程。
#define TRACE_CAP 240

@interface MioDualTraceEvent : NSObject
@property (nonatomic, copy) NSString *time;    // HH:mm:ss.SSS
@property (nonatomic, copy) NSString *stage;
@property (nonatomic, copy) NSString *key;     // 截短到 12 位（bare digest 前 12 足够定位）
@property (nonatomic, copy) NSString *detail;
@end
@implementation MioDualTraceEvent
@end

static NSDateFormatter *sFmt = nil;   // 进程级复用（HH:mm:ss.SSS）

@implementation MioDualMediaTrace {
    NSMutableArray<MioDualTraceEvent *> *_ring;
    NSUInteger _idx;                                  // 写指针（满后回卷覆盖）
    NSUInteger _total;                                // 累计写入数
    NSUInteger _cRegister, _cExport, _cServe, _cHit, _cPlace, _cDL;
}

+ (instancetype)shared {
    static MioDualMediaTrace *t = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ t = [[MioDualMediaTrace alloc] init]; });
    return t;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _ring = [NSMutableArray arrayWithCapacity:TRACE_CAP];
    }
    return self;
}

+ (void)log:(NSString *)stage key:(NSString *)key detail:(NSString *)detail {
    [[MioDualMediaTrace shared] appendStage:stage key:key detail:detail];
}

- (void)appendStage:(NSString *)stage key:(NSString *)key detail:(NSString *)detail {
    MioDualTraceEvent *e = [MioDualTraceEvent new];
    if (!sFmt) {
        sFmt = [[NSDateFormatter alloc] init];
        sFmt.dateFormat = @"HH:mm:ss.SSS";
    }
    e.time = [sFmt stringFromDate:[NSDate date]];
    e.stage = stage ?: @"?";
    // key 截短：完整文件名/digest 前 12 位（定位足够，省一行宽）
    e.key = key.length > 12 ? [key substringToIndex:12] : (key ?: @"-");
    e.detail = detail ?: @"";
    @synchronized(self) {
        _total++;
        if ([stage isEqualToString:@"register"]) _cRegister++;
        else if ([stage isEqualToString:@"export"]) _cExport++;
        else if ([stage isEqualToString:@"dl"]) _cDL++;
        else if ([stage isEqualToString:@"serve"]) {
            _cServe++;
            if ([detail hasPrefix:@"hit"]) _cHit++;
            else if ([detail hasPrefix:@"PLACE"]) _cPlace++;
        }
        if (_ring.count < TRACE_CAP) {
            [_ring addObject:e];
        } else {
            [_ring replaceObjectAtIndex:_idx withObject:e];
            _idx = (_idx + 1) % TRACE_CAP;
        }
    }
}

static NSDateFormatter *sFmt = nil;   // 进程级复用（HH:mm:ss.SSS）

// 环形顺序输出：_idx 是最旧（缓冲满时），未满从 0 开始
- (NSString *)textWithLimit:(NSUInteger)limit {
    @synchronized(self) {
        NSUInteger count = _ring.count;
        if (count == 0) return @"（暂无媒体链路事件）";
        NSUInteger start = (count < TRACE_CAP) ? 0 : _idx;
        NSUInteger from = count > limit ? count - limit : 0;
        NSMutableString *out = [NSMutableString string];
        for (NSUInteger i = from; i < count; i++) {
            NSUInteger pos = (start + i) % TRACE_CAP;
            MioDualTraceEvent *e = _ring[pos];
            [out appendFormat:@"%@ %-8s %@ %@\n", e.time, e.stage.UTF8String, e.key, e.detail];
        }
        return out;
    }
}

+ (NSString *)recentText:(NSUInteger)limit {
    return [[MioDualMediaTrace shared] textWithLimit:limit];
}

+ (NSString *)summaryText {
    MioDualMediaTrace *t = [MioDualMediaTrace shared];
    @synchronized(t) {
        return [NSString stringWithFormat:
            @"注册%lu 导出%lu serve%lu(命中%lu 占位%lu) 下载%lu",
            (unsigned long)t->_cRegister, (unsigned long)t->_cExport,
            (unsigned long)t->_cServe, (unsigned long)t->_cHit,
            (unsigned long)t->_cPlace, (unsigned long)t->_cDL];
    }
}

+ (void)clear {
    MioDualMediaTrace *t = [MioDualMediaTrace shared];
    @synchronized(t) {
        [t->_ring removeAllObjects];
        t->_idx = 0; t->_total = 0;
        t->_cRegister = t->_cExport = t->_cServe = t->_cHit = t->_cPlace = t->_cDL = 0;
    }
}
@end
