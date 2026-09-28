#import "MomentsHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"

#pragma mark - 工具（微信类全部 id + respondsToSelector 守卫，CI 无微信头文件）

// 服务获取两级策略：MMContext currentContext getService: 主路径，MMServiceCenter defaultCenter 兜底
static id mioMomentsService(Class cls) {
    if (!cls) return nil;
    id ctx = nil;
    Class ctxCls = objc_getClass("MMContext");
    if (ctxCls) {
        SEL cs = NSSelectorFromString(@"currentContext");
        if ([(id)ctxCls respondsToSelector:cs]) {
            ctx = ((id(*)(id, SEL))objc_msgSend)((id)ctxCls, cs);
        }
    }
    if (ctx) {
        SEL gs = NSSelectorFromString(@"getService:");
        if ([ctx respondsToSelector:gs]) {
            id svc = ((id(*)(id, SEL, Class))objc_msgSend)(ctx, gs, cls);
            if (svc) return svc;
        }
    }
    Class smCls = objc_getClass("MMServiceCenter");
    if (smCls) {
        SEL dc = NSSelectorFromString(@"defaultCenter");
        if ([(id)smCls respondsToSelector:dc]) {
            id center = ((id(*)(id, SEL))objc_msgSend)((id)smCls, dc);
            if (center) {
                SEL gs = NSSelectorFromString(@"getService:");
                if ([center respondsToSelector:gs]) {
                    return ((id(*)(id, SEL, Class))objc_msgSend)(center, gs, cls);
                }
            }
        }
    }
    return nil;
}

// 安全调用无参 NSString getter：必须确认方法存在且返回类型是对象 '@'，
// 否则对基本类型返回值做强转会产生野指针（151 包闪退根因之一）
static NSString *MioSafeString(id obj, NSString *prop) {
    if (!obj) return nil;
    SEL s = NSSelectorFromString(prop);
    if (![obj respondsToSelector:s]) return nil;
    Method m = class_getInstanceMethod([obj class], s);
    if (m) {
        const char *enc = method_getTypeEncoding(m);
        if (!enc || enc[0] != '@') return nil;
    }
    @try {
        id v = ((id(*)(id, SEL))objc_msgSend)(obj, s);
        return [v isKindOfClass:[NSString class]] ? v : nil;
    } @catch (NSException *e) {
        return nil;
    }
}

// 安全读 NSArray 属性（KVC，异常吞掉）
static NSArray *MioSafeArray(id obj, NSString *prop) {
    if (!obj) return nil;
    @try {
        id v = [obj valueForKey:prop];
        return [v isKindOfClass:[NSArray class]] ? v : nil;
    } @catch (NSException *e) {
        return nil;
    }
}

// 安全调用带对象参数 setter
static void MioSafeSetObject(id obj, NSString *setter, id value) {
    if (!obj || !value) return;
    SEL s = NSSelectorFromString(setter);
    if (![obj respondsToSelector:s]) return;
    ((void(*)(id, SEL, id))objc_msgSend)(obj, s, value);
}

// 安全调用带 NSUInteger 参数 setter
static void MioSafeSetUint(id obj, NSString *setter, unsigned long v) {
    if (!obj) return;
    SEL s = NSSelectorFromString(setter);
    if (![obj respondsToSelector:s]) return;
    ((void(*)(id, SEL, unsigned long))objc_msgSend)(obj, s, v);
}

// responder 链上找指定类名的 VC
static id MioFindVCUpChain(UIResponder *start, NSString *clsName) {
    UIResponder *r = start;
    while (r) {
        if ([NSStringFromClass([r class]) isEqualToString:clsName]) return r;
        r = [r nextResponder];
    }
    return nil;
}

#pragma mark - 伪集赞

static IMP orig_WCDataItem_likeUsers = NULL;
static volatile BOOL gFakeApplying = NO;
static volatile BOOL gFakeDisabled = NO;   // 安全阀：出错自动摘除
static NSMapTable *gFakeApplied;           // weak key = WCDataItem, value = 上次签名
static NSArray *gFriendPool = nil;         // 元素 @[wxid, nickname]

// 好友池：CContactMgr 批量列表探测，兜底虚拟昵称池
static NSArray *MioFriendPool() {
    if (gFriendPool) return gFriendPool;
    NSMutableArray *arr = [NSMutableArray array];
    id mgr = mioMomentsService(objc_getClass("CContactMgr"));
    if (mgr) {
        NSArray *candidates = @[@"getFriendsContactList", @"getContactList",
                                @"getAllFriendContactList", @"getContactListExceptSelf"];
        for (NSString *name in candidates) {
            SEL s = NSSelectorFromString(name);
            if (![mgr respondsToSelector:s]) continue;
            Method m = class_getInstanceMethod([mgr class], s);
            if (m) {
                const char *enc = method_getTypeEncoding(m);
                if (!enc || enc[0] != '@') continue;
            }
            @try {
                NSArray *contacts = ((id(*)(id, SEL))objc_msgSend)(mgr, s);
                if (![contacts isKindOfClass:[NSArray class]]) continue;
                for (id c in contacts) {
                    NSString *wxid = nil, *nick = nil;
                    @try {
                        id a = [c valueForKey:@"m_nsUsrName"];
                        id b = [c valueForKey:@"m_nsNickName"];
                        if ([a isKindOfClass:[NSString class]]) wxid = a;
                        if ([b isKindOfClass:[NSString class]]) nick = b;
                    } @catch (NSException *e) {}
                    if (wxid.length && nick.length && ![wxid hasPrefix:@"gh_"]) {
                        [arr addObject:@[wxid, nick]];
                    }
                }
            } @catch (NSException *e) {}
            if (arr.count >= 10) break;
        }
    }
    if (arr.count < 10) {
        NSArray *nicks = @[@"阿明", @"小雨", @"大白", @"木兰", @"秋刀鱼", @"TT", @"南山南",
                           @"橘子汽水", @"Luna", @"小葵", @"Ray", @"馒头", @"大大卷", @"糯米",
                           @"Kiko", @"麦兜", @"新一", @"丸子", @"锅巴", @"豆乳", @"Sheet",
                           @"阿杰", @"芝士", @"泡芙", @"年糕", @"Coco", @"柚子", @"阿凯",
                           @"布丁", @"栗子"];
        for (int i = 0; i < 60; i++) {
            [arr addObject:@[[NSString stringWithFormat:@"mio_fake_%03d", i], nicks[i % nicks.count]]];
        }
    }
    WPLog(@"Moments", @"[FakeLike] friend pool: %lu", (unsigned long)arr.count);
    gFriendPool = arr;
    return arr;
}

// 构造一条点赞/评论项（WCR 同款 WCUserComment：username/nickname/type=1/isRichText/createTime）
static id MioMakeUserComment(NSString *content) {
    Class ucCls = objc_getClass("WCUserComment");
    if (!ucCls) return nil;
    id uc = [[ucCls alloc] init];
    if (!uc) return nil;
    NSArray *pool = MioFriendPool();
    if (pool.count == 0) return nil;
    NSArray *pick = pool[arc4random_uniform((u_int32_t)pool.count)];
    MioSafeSetObject(uc, @"setUsername:", pick[0]);
    MioSafeSetObject(uc, @"setNickname:", pick[1]);
    SEL typeSel = NSSelectorFromString(@"setType:");
    if ([uc respondsToSelector:typeSel]) {
        ((void(*)(id, SEL, long))objc_msgSend)(uc, typeSel, (long)1);
    }
    SEL richSel = NSSelectorFromString(@"setIsRichText:");
    if ([uc respondsToSelector:richSel]) {
        ((void(*)(id, SEL, BOOL))objc_msgSend)(uc, richSel, YES);
    }
    if (content.length) {
        MioSafeSetObject(uc, @"setContent:", content);
    }
    SEL timeSel = NSSelectorFromString(@"setCreateTime:");
    if ([uc respondsToSelector:timeSel]) {
        ((void(*)(id, SEL, unsigned long))objc_msgSend)(uc, timeSel, (unsigned long)time(NULL));
    }
    return uc;
}

// 伪评论文本：自定义列表随机取，空列表兜底通用文案
static NSString *MioRandomCommentText(MomentsConfig *cfg) {
    NSArray *texts = cfg.fakeCommentTexts;
    if (texts.count > 0) {
        return texts[arc4random_uniform((u_int32_t)texts.count)];
    }
    NSArray *fallback = @[@"赞", @"不错哦", @"真好", @"哈哈哈", @"太赞了", @"Nice!",
                          @"好看", @"666", @"羡慕了", @"支持一下"];
    return fallback[arc4random_uniform((u_int32_t)fallback.count)];
}

// 核心：改写 WCDataItem 的点赞/评论（保留原列表，仅补足差值；WCR FUN_00545778 同款）
static void MioApplyFakeEngagement(id item, MomentsConfig *cfg) {
    long likeN = (long)MIN(MAX(cfg.fakeLikeCount, 0), 10000);
    long cmN = (long)MIN(MAX(cfg.fakeCommentCount, 0), 300);
    if (likeN <= 0 && cmN <= 0) return;

    NSMutableArray *likes = [MioSafeArray(item, @"likeUsers") mutableCopy] ?: [NSMutableArray array];
    NSMutableArray *comments = [MioSafeArray(item, @"commentUsers") mutableCopy] ?: [NSMutableArray array];

    long addLikes = likeN - (long)likes.count;
    if (addLikes > 0) {
        for (long i = 0; i < addLikes; i++) {
            id uc = MioMakeUserComment(nil);
            if (uc) [likes addObject:uc];
        }
        MioSafeSetObject(item, @"setLikeUsers:", likes);
    }

    long addComments = cmN - (long)comments.count;
    if (addComments > 0) {
        for (long i = 0; i < addComments; i++) {
            id uc = MioMakeUserComment(MioRandomCommentText(cfg));
            if (uc) [comments addObject:uc];
        }
        MioSafeSetObject(item, @"setCommentUsers:", comments);
    }

    MioSafeSetUint(item, @"setLikeCount:", (unsigned long)likeN);
    MioSafeSetUint(item, @"setCommentCount:", (unsigned long)cmN);
}

// feed 签名：tid 优先，兜底 username；key 本身是 feed 对象，签名只含配置参数
static NSString *MioFakeSignature(id item, MomentsConfig *cfg) {
    NSString *tid = MioSafeString(item, @"tid") ?: MioSafeString(item, @"m_nsTid");
    if (!tid.length) tid = MioSafeString(item, @"username") ?: @"?";
    return [NSString stringWithFormat:@"%@|%lu|%lu|%lu", tid,
            (unsigned long)cfg.fakeLikeCount, (unsigned long)cfg.fakeCommentCount,
            (unsigned long)cfg.fakeCommentTexts.count];
}

static NSArray *hooked_WCDataItem_likeUsers(id self, SEL _cmd) {
    NSArray *orig = ((id(*)(id, SEL))orig_WCDataItem_likeUsers)(self, _cmd);
    if (gFakeApplying || gFakeDisabled) return orig;
    @try {
        MomentsConfig *cfg = [MomentsConfig shared];
        if (!cfg.fakeLikeEnabled) return orig;
        NSString *sig = MioFakeSignature(self, cfg);
        @synchronized (gFakeApplied) {
            NSString *last = [gFakeApplied objectForKey:self];
            if ([last isEqualToString:sig]) return orig;
            [gFakeApplied setObject:sig forKey:self];
        }
        gFakeApplying = YES;
        MioApplyFakeEngagement(self, cfg);
        gFakeApplying = NO;
        return ((id(*)(id, SEL))orig_WCDataItem_likeUsers)(self, _cmd);
    } @catch (NSException *e) {
        gFakeApplying = NO;
        // 安全阀：出错立即摘除 hook，保证朋友圈可用
        if (orig_WCDataItem_likeUsers) {
            Class cls = objc_getClass("WCDataItem");
            Method m = cls ? class_getInstanceMethod(cls, NSSelectorFromString(@"likeUsers")) : NULL;
            if (m) method_setImplementation(m, orig_WCDataItem_likeUsers);
        }
        gFakeDisabled = YES;
        WPLog(@"Moments", @"[FakeLike] ERROR, hook removed: %@", e);
        return orig;
    }
}

// 安装伪集赞 hook：实现在父类时改用子类 override（避免波及兄弟类，151 包闪退根因之二）
static void MioInstallFakeLikeHook(Class dataItemCls) {
    SEL sel = NSSelectorFromString(@"likeUsers");
    Method m = class_getInstanceMethod(dataItemCls, sel);
    if (!m) {
        WPLog(@"Moments", @"[FakeLike] SKIP: likeUsers NOT found");
        return;
    }
    IMP origImp = method_getImplementation(m);
    const char *enc = method_getTypeEncoding(m);
    Class ownerCls = method_getClass(m);
    BOOL ownerIsTarget = [NSStringFromClass(ownerCls) isEqualToString:NSStringFromClass(dataItemCls)];
    if (ownerIsTarget) {
        orig_WCDataItem_likeUsers = method_setImplementation(m, (IMP)hooked_WCDataItem_likeUsers);
    } else {
        // 父类实现：只在 WCDataItem 自身加 override，兄弟类不受影响
        if (!class_addMethod(dataItemCls, sel, (IMP)hooked_WCDataItem_likeUsers, enc)) {
            WPLog(@"Moments", @"[FakeLike] SKIP: addMethod override failed");
            return;
        }
        orig_WCDataItem_likeUsers = origImp;
    }
    WPLog(@"Moments", @"[FakeLike] WCDataItem likeUsers hooked (owner=%s, override=%d)",
          class_getName(ownerCls), !ownerIsTarget);
}

#pragma mark - 便捷朋友圈（pyq 快速打开）

static IMP orig_pyq_1 = NULL, orig_pyq_2 = NULL, orig_pyq_3 = NULL;
static volatile BOOL gPyqBusy = NO;

// 统一的输入变化垫片：按 _cmd 分发原实现，检测 pyq 后清空输入并打开朋友圈
static void hooked_pyq_textChange(id self, SEL _cmd, id textView) {
    IMP orig = NULL;
    SEL cur = _cmd;
    if (cur == NSSelectorFromString(@"textViewDidChange:")) orig = orig_pyq_1;
    else if (cur == NSSelectorFromString(@"textDidChange:")) orig = orig_pyq_2;
    else orig = orig_pyq_3;
    if (orig) ((void(*)(id, SEL, id))orig)(self, _cmd, textView);
    if (gFakeDisabled) return;
    @try {
        if (![MomentsConfig shared].convenientMomentsEnabled || gPyqBusy) return;
        if (![textView isKindOfClass:[UITextView class]]) return;
        NSString *text = [(UITextView *)textView text] ?: @"";
        if (![text.lowercaseString isEqualToString:@"pyq"]) return;
        // responder 链上找聊天页 VC
        id chatVC = MioFindVCUpChain((UIResponder *)textView, @"BaseMsgContentViewController");
        if (!chatVC) chatVC = MioFindVCUpChain((UIResponder *)textView, @"MMUIViewController");
        gPyqBusy = YES;
        UITextView *tv = (UITextView *)textView;
        dispatch_async(dispatch_get_main_queue(), ^{
            [tv setText:@""];   // 清空输入，避免返回聊天页残留 pyq
            id mvc = nil;
            Class mvcCls = objc_getClass("NewMainFrameViewController");
            if (mvcCls) mvc = [[mvcCls alloc] init];
            UINavigationController *nav = [(id)chatVC navigationController];
            if (mvc && nav) {
                [nav pushViewController:mvc animated:YES];
                WPLog(@"Moments", @"[Pyq] opened moments from chat");
            } else {
                WPLog(@"Moments", @"[Pyq] push failed (chatVC=%@)", chatVC ? NSStringFromClass([chatVC class]) : @"nil");
            }
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ gPyqBusy = NO; });
        });
    } @catch (NSException *e) {
        gPyqBusy = NO;
        WPLog(@"Moments", @"[Pyq] error: %@", e);
    }
}

// 多候选探测输入变化回调：textViewDidChange: / textDidChange: / onTextViewDidChange:
// 目标类：BaseMsgContentViewController（151 包实测无 textViewDidChange:）→ 逐类逐方法探测；
// 每个 selector 全微信只挂一处（首个命中类），避免多类重挂导致原实现分发错乱
static void MioInstallPyqHooks(void) {
    NSArray *classNames = @[@"BaseMsgContentViewController", @"MMInputToolView", @"MMGrowTextView"];
    NSArray *selNames = @[@"textViewDidChange:", @"textDidChange:", @"onTextViewDidChange:"];
    NSMutableArray *hookedSels = [NSMutableArray array];
    __block int hookedCount = 0;
    for (NSString *cn in classNames) {
        Class cls = objc_getClass(cn.UTF8String);
        if (!cls) {
            WPLog(@"Moments", @"[Pyq] SKIP: %@ class NOT found", cn);
            continue;
        }
        for (NSString *sn in selNames) {
            if ([hookedSels containsObject:sn]) continue;
            SEL sel = NSSelectorFromString(sn);
            Method m = class_getInstanceMethod(cls, sel);
            if (!m) continue;
            IMP origImp = method_getImplementation(m);
            if (origImp == (IMP)hooked_pyq_textChange) continue;
            if ([sn isEqualToString:@"textViewDidChange:"]) {
                orig_pyq_1 = origImp;
            } else if ([sn isEqualToString:@"textDidChange:"]) {
                orig_pyq_2 = origImp;
            } else {
                orig_pyq_3 = origImp;
            }
            method_setImplementation(m, (IMP)hooked_pyq_textChange);
            [hookedSels addObject:sn];
            hookedCount++;
            WPLog(@"Moments", @"[Pyq] %@.%@ hooked", cn, sn);
        }
        if (hookedCount >= 1) break;
    }
    if (hookedCount == 0) WPLog(@"Moments", @"[Pyq] SKIP: no input-change callback found");
}

#pragma mark - 高清朋友圈（发布强制原图）

static IMP orig_hd_1 = NULL, orig_hd_2 = NULL;
static volatile BOOL gHDHookDone = NO;

static void hooked_hd_setHD(id self, SEL _cmd, BOOL v) {
    BOOL val = v;
    if (!gFakeDisabled && [MomentsConfig shared].hdMomentsEnabled) val = YES;
    if (orig_hd_1) ((void(*)(id, SEL, BOOL))orig_hd_1)(self, _cmd, val);
}

static void hooked_hd_setOrigin(id self, SEL _cmd, BOOL v) {
    BOOL val = v;
    if (!gFakeDisabled && [MomentsConfig shared].hdMomentsEnabled) val = YES;
    if (orig_hd_2) ((void(*)(id, SEL, BOOL))orig_hd_2)(self, _cmd, val);
}

// 全类扫描找 setM_bUploadHDImage: / setM_isNeedOriginImage: 的宿主类并 hook
// （WCMediaItem 上不存在，151 包实测 hd=0 origin=0；宿主类随版本浮动，扫描自动适配）
static void MioScanAndHookHD(void) {
    if (gHDHookDone) return;
    gHDHookDone = YES;
    unsigned int count = 0;
    Class *classes = objc_copyClassList(&count);
    if (!classes) return;
    SEL s1 = NSSelectorFromString(@"setM_bUploadHDImage:");
    SEL s2 = NSSelectorFromString(@"setM_isNeedOriginImage:");
    NSMutableArray *hitNames = [NSMutableArray array];
    for (unsigned int i = 0; i < count; i++) {
        Class c = classes[i];
        const char *nm = class_getName(c);
        // 跳过 Mio 自己的类与系统基础类
        if (nm[0] == 'M' && (strncmp(nm, "Mio", 3) == 0 || strncmp(nm, "MM", 2) == 0)) continue;
        if (nm[0] == 'W' && strncmp(nm, "WP", 2) == 0) continue;
        Method m1 = class_getInstanceMethod(c, s1);
        Method m2 = class_getInstanceMethod(c, s2);
        if (m1 && method_getClass(m1) == c && !orig_hd_1) {
            orig_hd_1 = method_setImplementation(m1, (IMP)hooked_hd_setHD);
            [hitNames addObject:[NSString stringWithFormat:@"%s(hd)", nm]];
        }
        if (m2 && method_getClass(m2) == c && !orig_hd_2) {
            orig_hd_2 = method_setImplementation(m2, (IMP)hooked_hd_setOrigin);
            [hitNames addObject:[NSString stringWithFormat:@"%s(origin)", nm]];
        }
        if (orig_hd_1 && orig_hd_2) break;
    }
    free(classes);
    WPLog(@"Moments", @"[HD] scan done (%u classes): %@", count,
          hitNames.count ? [hitNames componentsJoinedByString:@", "] : @"no host found");
}

#pragma mark - 安装

@implementation MomentsHook

+ (void)install {
    WPLog(@"Moments", @"[MomentsHook] install start");

    // 缓存先于 hook 创建（消除空窗口）
    gFakeApplied = [NSMapTable weakToStrongObjectsMapTable];

    // 1. 伪集赞：WCDataItem likeUsers（归属校验 + 安全阀）
    Class dataItemCls = objc_getClass("WCDataItem");
    if (dataItemCls) {
        MioInstallFakeLikeHook(dataItemCls);
    } else {
        WPLog(@"Moments", @"[FakeLike] SKIP: WCDataItem class NOT found");
    }

    // 2. 便捷朋友圈：多候选探测输入变化回调
    MioInstallPyqHooks();

    // 3. 高清朋友圈：后台延迟全类扫描（避免启动主线程耗时，防看门狗）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)),
                   dispatch_get_global_queue(QOS_CLASS_BACKGROUND, 0), ^{
        MioScanAndHookHD();
    });

    WPLog(@"Moments", @"[MomentsHook] install complete");
}

@end
