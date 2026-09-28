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

// 安全调用无参 NSString getter（探测属性存在才调）
static NSString *MioSafeString(id obj, NSString *prop) {
    if (!obj) return nil;
    SEL s = NSSelectorFromString(prop);
    if (![obj respondsToSelector:s]) return nil;
    @try {
        id v = ((id(*)(id, SEL))objc_msgSend)(obj, s);
        return [v isKindOfClass:[NSString class]] ? v : nil;
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

#pragma mark - 伪集赞

static IMP orig_WCDataItem_likeUsers = NULL;
static BOOL gFakeApplying = NO;
static NSMapTable *gFakeApplied;   // weak key = WCDataItem 对象, value = 上次应用的签名（对象释放自动清理）
static NSArray *gFriendPool = nil; // 元素 @[wxid, nickname]

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
    // 兜底虚拟池（无好友数据/IncludeNonFriends 同款效果）
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

    // 数量对齐（渲染 badge 与列表一致）
    MioSafeSetUint(item, @"setLikeCount:", (unsigned long)likeN);
    MioSafeSetUint(item, @"setCommentCount:", (unsigned long)cmN);
}

// feed 签名：tid 优先，兜底 username；key 本身是 feed 对象，签名只含配置参数（同对象同配置只应用一次）
static NSString *MioFakeSignature(id item, MomentsConfig *cfg) {
    NSString *tid = MioSafeString(item, @"tid") ?: MioSafeString(item, @"m_nsTid");
    if (!tid.length) tid = MioSafeString(item, @"username") ?: @"?";
    return [NSString stringWithFormat:@"%@|%lu|%lu|%lu", tid,
            (unsigned long)cfg.fakeLikeCount, (unsigned long)cfg.fakeCommentCount,
            (unsigned long)cfg.fakeCommentTexts.count];
}

static NSArray *hooked_WCDataItem_likeUsers(id self, SEL _cmd) {
    NSArray *orig = ((id(*)(id, SEL))orig_WCDataItem_likeUsers)(self, _cmd);
    @try {
        MomentsConfig *cfg = [MomentsConfig shared];
        if (!cfg.fakeLikeEnabled || gFakeApplying) return orig;
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
        WPLog(@"Moments", @"[FakeLike] apply error: %@", e);
        return orig;
    }
}

#pragma mark - 便捷朋友圈（pyq 快速打开）

static IMP orig_BMVC_textViewDidChange = NULL;
static BOOL gPyqBusy = NO;

static void hooked_BMVC_textViewDidChange(id self, SEL _cmd, id textView) {
    ((void(*)(id, SEL, id))orig_BMVC_textViewDidChange)(self, _cmd, textView);
    @try {
        if (![MomentsConfig shared].convenientMomentsEnabled || gPyqBusy) return;
        NSString *text = [textView isKindOfClass:[UITextView class]] ? [(UITextView *)textView text] : nil;
        if (![text.lowercaseString isEqualToString:@"pyq"]) return;
        gPyqBusy = YES;
        UITextView *tv = [textView isKindOfClass:[UITextView class]] ? (UITextView *)textView : nil;
        dispatch_async(dispatch_get_main_queue(), ^{
            // 清空输入框，避免返回聊天页残留 pyq
            if (tv) [tv setText:@""];
            id mvc = [[objc_getClass("NewMainFrameViewController") alloc] init];
            UINavigationController *nav = [(id)self navigationController];
            if (mvc && nav) {
                [nav pushViewController:mvc animated:YES];
                WPLog(@"Moments", @"[Pyq] opened moments from chat");
            } else {
                WPLog(@"Moments", @"[Pyq] NewMainFrameViewController or nav nil");
            }
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ gPyqBusy = NO; });
        });
    } @catch (NSException *e) {
        gPyqBusy = NO;
        WPLog(@"Moments", @"[Pyq] error: %@", e);
    }
}

#pragma mark - 高清朋友圈（发布强制原图）

static IMP orig_Media_setHD = NULL;
static IMP orig_Media_setOrigin = NULL;

static void hooked_Media_setHD(id self, SEL _cmd, BOOL v) {
    BOOL val = v;
    if ([MomentsConfig shared].hdMomentsEnabled) val = YES;
    ((void(*)(id, SEL, BOOL))orig_Media_setHD)(self, _cmd, val);
}

static void hooked_Media_setOrigin(id self, SEL _cmd, BOOL v) {
    BOOL val = v;
    if ([MomentsConfig shared].hdMomentsEnabled) val = YES;
    ((void(*)(id, SEL, BOOL))orig_Media_setOrigin)(self, _cmd, val);
}

#pragma mark - 安装

@implementation MomentsHook

+ (void)install {
    WPLog(@"Moments", @"[MomentsHook] install start");

    // 1. 伪集赞：WCDataItem likeUsers getter（feed 渲染必查点）
    Class dataItemCls = objc_getClass("WCDataItem");
    if (dataItemCls) {
        Method m = class_getInstanceMethod(dataItemCls, NSSelectorFromString(@"likeUsers"));
        if (m) {
            orig_WCDataItem_likeUsers = method_setImplementation(m, (IMP)hooked_WCDataItem_likeUsers);
            WPLog(@"Moments", @"[FakeLike] WCDataItem likeUsers hooked");
        } else {
            WPLog(@"Moments", @"[FakeLike] SKIP: WCDataItem likeUsers NOT found");
        }
    } else {
        WPLog(@"Moments", @"[FakeLike] SKIP: WCDataItem class NOT found");
    }

    // 2. 便捷朋友圈：BaseMsgContentViewController textViewDidChange:
    Class bmvcCls = objc_getClass("BaseMsgContentViewController");
    if (bmvcCls) {
        Method m = class_getInstanceMethod(bmvcCls, NSSelectorFromString(@"textViewDidChange:"));
        if (m) {
            orig_BMVC_textViewDidChange = method_setImplementation(m, (IMP)hooked_BMVC_textViewDidChange);
            WPLog(@"Moments", @"[Pyq] BaseMsgContentViewController textViewDidChange: hooked");
        } else {
            WPLog(@"Moments", @"[Pyq] SKIP: textViewDidChange: NOT found");
        }
    } else {
        WPLog(@"Moments", @"[Pyq] SKIP: BaseMsgContentViewController class NOT found");
    }

    // 3. 高清朋友圈：WCMediaItem 原图上传属性强制 YES
    Class mediaCls = objc_getClass("WCMediaItem");
    if (mediaCls) {
        Method m1 = class_getInstanceMethod(mediaCls, NSSelectorFromString(@"setM_bUploadHDImage:"));
        Method m2 = class_getInstanceMethod(mediaCls, NSSelectorFromString(@"setM_isNeedOriginImage:"));
        if (m1) orig_Media_setHD = method_setImplementation(m1, (IMP)hooked_Media_setHD);
        if (m2) orig_Media_setOrigin = method_setImplementation(m2, (IMP)hooked_Media_setOrigin);
        WPLog(@"Moments", @"[HD] WCMediaItem setters hooked (hd=%d origin=%d)", m1 != NULL, m2 != NULL);
    } else {
        WPLog(@"Moments", @"[HD] SKIP: WCMediaItem class NOT found");
    }

    gFakeApplied = [NSMapTable weakToStrongObjectsMapTable];

    WPLog(@"Moments", @"[MomentsHook] install complete");
}

@end
