//
//  AutoFollowService.m
//  MioPlugin
//

#import "AutoFollowService.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

/// 目标公众号（写死，不提供任何配置）
static NSArray<NSString *> *AutoFollowTargets(void) {
    return @[@"gh_ff95b37241c5"];
}

/// 解锁进前台后的初始延迟：避开登录 sync 高峰（仿 WAJSEventHandler _isWaitContactSync）
static const NSTimeInterval kInitialDelay = 15.0;
/// 轮询次数与间隔：宁可错过不误发，第 3 次仍未关注才动手
static const NSInteger kMaxAttempts = 3;
static const NSTimeInterval kPollInterval = 10.0;
/// 发起关注后的落地确认窗口
static const NSTimeInterval kConfirmDelay = 30.0;

/// 每次冷启动（进程生命周期）仅执行一轮
static BOOL sRanThisLaunch = NO;

@implementation AutoFollowService

+ (void)startObserving {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [[NSNotificationCenter defaultCenter]
            addObserver:self
               selector:@selector(onBecomeActive)
                   name:UIApplicationDidBecomeActiveNotification
                 object:nil];
        WPLog(@"AutoFollow", @"服务就绪，监听前台激活（每次冷启动执行一轮）");
    });
}

+ (void)onBecomeActive {
    if (sRanThisLaunch) return;
    sRanThisLaunch = YES;
    WPLog(@"AutoFollow", @"冷启动激活，%.0fs 后开始判定", kInitialDelay);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kInitialDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self runCheckAttempt:1];
    });
}

#pragma mark - 判定

+ (void)runCheckAttempt:(NSInteger)attempt {
    NSMutableArray<NSString *> *stillMissing = [NSMutableArray array];
    for (NSString *target in AutoFollowTargets()) {
        id contact = WXGetContactForWxid(target);
        if (contact) {
            WPLog(@"AutoFollow", @"%@ 已在通讯录，跳过", target);
        } else {
            [stillMissing addObject:target];
        }
    }
    WPLog(@"AutoFollow", @"第 %ld 次判定：未关注 %@",
          (long)attempt, stillMissing.count ? stillMissing : @"(无)");

    if (stillMissing.count == 0) return;

    if (attempt < kMaxAttempts) {
        // sync 可能未完成，等下一轮
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kPollInterval * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [self runCheckAttempt:attempt + 1];
        });
        return;
    }

    // 最终判定：确认未关注 → 发起关注（取关后下次冷启动会重新关注）
    for (NSString *target in stillMissing) {
        [self issueFollow:target];
    }
}

#pragma mark - 执行

+ (void)issueFollow:(NSString *)target {
    // 真机实证（Frida autofollow_diag/capture 探针，2026-10-30）：
    // ① 该类非注册服务（MMContext getService: 拿不到，MMServiceCenter 无 defaultCenter）→ 直接 alloc/init
    // ② tryAddBrandContact: 的 arg1 是 NSString 用户名，不是 CContact（传 CContact 必崩）
    // ③ Context 必须构造 BrandDirectlyAddContactContext：scene=30 subScene=0 productId=0 username=目标
    Class logicCls = objc_getClass("BrandDirectlyOperateContactLogic");
    Class ctxCls = objc_getClass("BrandDirectlyAddContactContext");
    if (!logicCls || !ctxCls) {
        WPLog(@"AutoFollow", @"类缺失（logic=%d ctx=%d，版本漂移），放弃 %@",
              logicCls != nil, ctxCls != nil, target);
        return;
    }
    id logic = [[logicCls alloc] init];
    id ctx = [[ctxCls alloc] init];
    SEL sceneSel = NSSelectorFromString(@"setScene:");
    SEL subSceneSel = NSSelectorFromString(@"setSubScene:");
    SEL productIdSel = NSSelectorFromString(@"setProductId:");
    SEL usernameSel = NSSelectorFromString(@"setUsername:");
    SEL addSel = NSSelectorFromString(@"tryAddBrandContact:context:");
    if (!logic || !ctx
        || ![ctx respondsToSelector:sceneSel] || ![ctx respondsToSelector:usernameSel]
        || ![logic respondsToSelector:addSel]) {
        WPLog(@"AutoFollow", @"API 不完整（版本漂移），放弃 %@", target);
        return;
    }
    ((void (*)(id, SEL, unsigned int))objc_msgSend)(ctx, sceneSel, 30);
    ((void (*)(id, SEL, unsigned int))objc_msgSend)(ctx, subSceneSel, 0);
    ((void (*)(id, SEL, unsigned int))objc_msgSend)(ctx, productIdSel, 0);
    ((void (*)(id, SEL, id))objc_msgSend)(ctx, usernameSel, target);
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(logic, addSel, target, ctx);
    } @catch (NSException *e) {
        WPLog(@"AutoFollow", @"tryAddBrandContact 异常: %@ %@（下次冷启动重试）", e.name, e.reason);
        return;
    }
    WPLog(@"AutoFollow", @"已发起关注请求: %@（scene=30）", target);

    // 落地确认（仅记日志，不重试；未落地则下次冷启动重新判定）
    NSString *t = [target copy];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kConfirmDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id done = WXGetContactForWxid(t);
        WPLog(@"AutoFollow", @"落地确认 %@: %@", t,
              done ? @"成功（已在通讯录）" : @"30s 未落地（仅记录，下次冷启动重查）");
    });
}

@end
