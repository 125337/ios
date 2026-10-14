//
//  MsgMergeEngine.m
//  MioPlugin
//
//  昵称区补偿量（布局时直读，Hook 上报，rowHeight 消费）：
//  读的就是目标量本身（群收行 bg.y − 无昵称基准），无两桶推断链，无跨会话漂移。
//  分组判定/位置计算已迁至 BBMergeModel（独立 entries 模型）。
//

#import "MsgMergeEngine.h"
#import "../../Core/LogManager.h"
#import <math.h>

static NSString * const kNickBlockKey = @"MioPlugin_MsgMerge_mmNickBlockHeight";

@implementation MsgMergeEngine

+ (CGFloat)nicknameBlockHeight {
    id v = [[NSUserDefaults standardUserDefaults] objectForKey:kNickBlockKey];
    double d = [v isKindOfClass:[NSNumber class]] ? [v doubleValue] : 11.0;   // 首次无数据：微信昵称默认开
    return (CGFloat)(d > 0.5 ? d : 0.0);
}

+ (void)reportNicknameBlock:(double)h {
    if (h < 0) h = 0;
    if (h > 30) h = 30;
    double rounded = round(h);
    NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
    id v = [ud objectForKey:kNickBlockKey];
    double cur = [v isKindOfClass:[NSNumber class]] ? [v doubleValue] : 11.0;
    if ([v isKindOfClass:[NSNumber class]] && fabs(cur - rounded) < 0.5) return;   // 未变化
    [ud setDouble:rounded forKey:kNickBlockKey];
    WPLog(@"MsgMerge", @"[Nick] 昵称区实测: %.1f → %.0f", cur, rounded);
}

@end
