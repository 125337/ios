//
//  AutoFollowService.m
//  MioPlugin
//

#import "AutoFollowService.h"
#import "AutoFollowConfig.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

/// 解锁进前台后的初始延迟：避开登录 sync 高峰（仿 WAJSEventHandler _isWaitContactSync）
static const NSTimeInterval kInitialDelay = 15.0;
/// 轮询次数与间隔：宁可错过不误发，第 3 次仍未关注才动手
static const NSInteger kMaxAttempts = 3;
static const NSTimeInterval kPollInterval = 10.0;
/// 发起关注后的落地确认窗口
static const NSTimeInterval kConfirmDelay = 30.0;

static BOOL sScheduled = NO; // 防止前后台反复切换叠加定时器

@implementation AutoFollowService

+ (void)startObserving {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [[NSNotificationCenter defaultCenter]
            addObserver:self
               selector:@selector(onBecomeActive)
                   name:UIApplicationDidBecomeActiveNotification
                 object:nil];
        WPLog(@"AutoFollow", @"服务就绪，监听前台激活");
    });
}

+ (void)runNow {
    sScheduled = NO;
    WPLog(@"AutoFollow", @"手动触发判定");
    dispatch_async(dispatch_get_main_queue(), ^{
        [self runCheckAttempt:1];
    });
}

+ (void)onBecomeActive {
    if (sScheduled) return;
    sScheduled = YES;
    WPLogDebug(@"AutoFollow", @"前台激活，%.0fs 后开始判定", kInitialDelay);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kInitialDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self runCheckAttempt:1];
    });
}

#pragma mark - 判定

+ (void)runCheckAttempt:(NSInteger)attempt {
    sScheduled = NO;
    AutoFollowConfig *cfg = [AutoFollowConfig shared];
    if (!cfg.autoFollowEnabled) return;

    // 待处理 = 目标 - 已完成标记
    NSMutableArray<NSString *> *pending = [NSMutableArray array];
    for (NSString *target in cfg.autoFollowTargets) {
        if (![cfg.autoFollowDoneList containsObject:target]) {
            [pending addObject:target];
        }
    }
    if (pending.count == 0) return;

    NSMutableArray<NSString *> *stillMissing = [NSMutableArray array];
    for (NSString *target in pending) {
        id contact = WXGetContactForWxid(target);
        if (contact) {
            // 已在通讯录 = 已关注，补硬标记（防止 forever 轮询）
            [self markDone:target reason:@"已关注"];
        } else {
            [stillMissing addObject:target];
        }
    }
    WPLog(@"AutoFollow", @"第 %ld 次判定：未关注 %@",
          (long)attempt, stillMissing.count ? stillMissing : @"(无)");

    if (stillMissing.count == 0) return;

    if (attempt < kMaxAttempts) {
        // sync 可能未完成，等下一轮
        sScheduled = YES;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kPollInterval * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [self runCheckAttempt:attempt + 1];
        });
        return;
    }

    // 最终判定：确认未关注 → 发起关注
    for (NSString *target in stillMissing) {
        [self issueFollow:target];
    }
}

#pragma mark - 执行

+ (void)issueFollow:(NSString *)target {
    // 1) 构造 CContact：未关注时本地无对象，最小字段 + 运行时探测保护
    Class cContactCls = objc_getClass("CContact");
    if (!cContactCls) {
        WPLog(@"AutoFollow", @"CContact 类不存在（版本漂移），放弃 %@", target);
        return;
    }
    id contact = [[cContactCls alloc] init];
    SEL setUsr = NSSelectorFromString(@"setM_nsUsrName:");
    if ([contact respondsToSelector:setUsr]) {
        ((void (*)(id, SEL, id))objc_msgSend)(contact, setUsr, target);
    } else {
        [contact setValue:target forKey:@"m_nsUsrName"];
    }

    // 2) 调微信自有关注通路（视频号/生活插件同款）
    id logic = WXGetService(objc_getClass("BrandDirectlyOperateContactLogic"));
    SEL addSel = NSSelectorFromString(@"tryAddBrandContact:context:");
    if (!logic || ![logic respondsToSelector:addSel]) {
        WPLog(@"AutoFollow", @"BrandDirectlyOperateContactLogic 不可用，放弃 %@（不标记，下次冷启动重试）", target);
        return;
    }
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(logic, addSel, contact, nil);
    } @catch (NSException *e) {
        WPLog(@"AutoFollow", @"tryAddBrandContact 异常: %@ %@（不标记）", e.name, e.reason);
        return;
    }
    WPLog(@"AutoFollow", @"已发起关注请求: %@", target);

    // 3) 发出即硬标记（一次性红线：即使服务端失败也绝不重复发，防止取关-补关循环）
    [self markDone:target reason:@"已发起"];

    // 4) 落地确认（仅记日志，不重试）
    NSString *t = [target copy];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kConfirmDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id done = WXGetContactForWxid(t);
        WPLog(@"AutoFollow", @"落地确认 %@: %@", t, done ? @"成功（已在通讯录）" : @"30s 未落地（仅记录，不重试）");
    });
}

+ (void)markDone:(NSString *)target reason:(NSString *)reason {
    AutoFollowConfig *cfg = [AutoFollowConfig shared];
    if ([cfg.autoFollowDoneList containsObject:target]) return;
    NSMutableArray<NSString *> *done = [NSMutableArray arrayWithArray:cfg.autoFollowDoneList ?: @[]];
    [done addObject:target];
    cfg.autoFollowDoneList = done;
    [ConfigManager saveAll];
    WPLog(@"AutoFollow", @"硬标记完成 [%@]: %@（取关后绝不补关注）", reason, target);
}

@end
