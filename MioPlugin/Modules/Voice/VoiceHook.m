#import "VoiceHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "WPVoicePackPickerVC.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"

static const NSInteger kVoicePackEntryTag = 952701; // 附件面板入口按钮 tag

// ═══════════════════════════════════════════════════════
// 工具：从视图层级 / VC 栈里找指定类名的 ViewController
// ═══════════════════════════════════════════════════════

static UIViewController *FindVCOfClass(UIViewController *root, NSString *className) {
    if (!root) return nil;
    if ([NSStringFromClass(root.class) isEqualToString:className]) return root;
    for (UIViewController *child in root.childViewControllers) {
        UIViewController *hit = FindVCOfClass(child, className);
        if (hit) return hit;
    }
    if ([root isKindOfClass:[UINavigationController class]]) {
        for (UIViewController *vc in [(UINavigationController *)root viewControllers]) {
            if ([NSStringFromClass(vc.class) isEqualToString:className]) return vc;
            UIViewController *hit = FindVCOfClass(vc, className);
            if (hit) return hit;
        }
    }
    if (root.presentedViewController) {
        return FindVCOfClass(root.presentedViewController, className);
    }
    return nil;
}

static UIViewController *TopPresentedVC(UIViewController *root) {
    UIViewController *top = root;
    while (top.presentedViewController) top = top.presentedViewController;
    return top;
}

/// 当前聊天会话名：从 BaseMsgContentViewController 的 m_nsCurrentChatUserName ivar 读取
static NSString *CurrentChatUserName(void) {
    UIViewController *root = [[UIApplication sharedApplication].windows.firstObject rootViewController];
    UIViewController *chatVC = FindVCOfClass(root, @"BaseMsgContentViewController");
    if (!chatVC) return nil;
    Ivar ivar = class_getInstanceVariable(chatVC.class, "m_nsCurrentChatUserName");
    if (!ivar) return nil;
    id val = object_getIvar(chatVC, ivar);
    return ([val isKindOfClass:[NSString class]] && val.length > 0) ? val : nil;
}

// ═══════════════════════════════════════════════════════
// Hook ①: SelectAttachmentView.layoutSubviews — 附件面板末尾加「语音包」入口
// ═══════════════════════════════════════════════════════

static IMP orig_SelectAttachmentView_layoutSubviews = NULL;

static void hook_SelectAttachmentView_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_SelectAttachmentView_layoutSubviews)(self, _cmd);
    @try {
        VoiceConfig *cfg = [VoiceConfig shared];
        if (!cfg.voicePackEnabled || !cfg.voicePackAttachmentEnabled) return;

        Ivar ivar = class_getInstanceVariable([self class], "_scrollView");
        if (!ivar) return;
        UIScrollView *sv = object_getIvar(self, ivar);
        if (!sv) return;

        // 已存在则跳过
        if ([sv viewWithTag:kVoicePackEntryTag]) return;

        // 找最后一个按钮作为布局基准
        UIButton *last = nil;
        CGFloat maxX = 0;
        for (UIView *v in sv.subviews) {
            if ([v isKindOfClass:[UIButton class]] && v.tag != kVoicePackEntryTag) {
                if (CGRectGetMaxX(v.frame) > maxX) { maxX = CGRectGetMaxX(v.frame); last = (UIButton *)v; }
            }
        }
        if (!last) return;

        CGFloat w = last.frame.size.width;
        CGFloat h = last.frame.size.height;
        CGFloat x = CGRectGetMaxX(last.frame) + 8;
        CGFloat y = last.frame.origin.y;
        if (x + w > sv.bounds.size.width) { // 换行
            x = last.frame.origin.x;
            y = CGRectGetMaxY(last.frame) + 12;
        }

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
        btn.tag = kVoicePackEntryTag;
        btn.frame = CGRectMake(x, y, w, h);
        btn.backgroundColor = [UIColor colorWithWhite:0.94 alpha:1.0];
        btn.layer.cornerRadius = 8;
        btn.layer.masksToBounds = YES;
        btn.layer.borderWidth = 1.0 / [UIScreen mainScreen].scale;
        btn.layer.borderColor = [UIColor colorWithWhite:0.82 alpha:1.0].CGColor;
        btn.titleLabel.font = [UIFont systemFontOfSize:12];
        btn.titleLabel.lineBreakMode = NSLineBreakByCharWrapping;
        [btn setTitle:@"语音包" forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor colorWithWhite:0.35 alpha:1.0] forState:UIControlStateNormal];
        [btn addTarget:[VoiceHook class] action:@selector(attachEntryTapped:) forControlEvents:UIControlEventTouchUpInside];
        [sv addSubview:btn];
        WPLog(@"Voice", @"[Attach] 附件面板语音包入口已添加");
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Attach] 入口添加异常: %@", e.reason);
    }
}

+ (void)attachEntryTapped:(UIButton *)sender {
    NSString *chat = CurrentChatUserName();
    if (chat.length == 0) {
        WPShowToast(@"未识别到当前会话");
        return;
    }
    UIViewController *root = [[UIApplication sharedApplication].windows.firstObject rootViewController];
    UIViewController *top = TopPresentedVC(root);
    UINavigationController *nav = nil;
    if ([top isKindOfClass:[UINavigationController class]]) {
        nav = (UINavigationController *)top;
    } else if (top.navigationController) {
        nav = top.navigationController;
    }
    WPVoicePackPickerVC *picker = [[WPVoicePackPickerVC alloc] initWithChatName:chat];
    if (nav) {
        [nav pushViewController:picker animated:YES];
    } else {
        UINavigationController *wrap = [[UINavigationController alloc] initWithRootViewController:picker];
        [top presentViewController:wrap animated:YES completion:nil];
    }
    WPLog(@"Voice", @"[Attach] 打开语音包选择页: %@", chat);
}

// ═══════════════════════════════════════════════════════
// Hook ②: CMessageMgr.AsyncOnAddMsg:MsgWrap: — 自动纳入收到的语音
// ═══════════════════════════════════════════════════════

static IMP orig_AsyncOnAddMsgMsgWrap = NULL;

static void hook_AsyncOnAddMsgMsgWrap(id self, SEL _cmd, id msg, id wrap) {
    ((void (*)(id, SEL, id, id))orig_AsyncOnAddMsgMsgWrap)(self, _cmd, msg, wrap);
    @try {
        VoiceConfig *cfg = [VoiceConfig shared];
        if (!cfg.voicePackEnabled || !cfg.voicePackAutoIncludeEnabled) return;
        if (!wrap || !msg) return;

        unsigned int msgType = 0;
        if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) {
            msgType = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
        }
        if (msgType != 34) return; // 仅语音消息

        // 跳过自己发送的
        NSString *fromUsr = [wrap valueForKey:@"m_nsFromUsr"];
        NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        if (selfUsr.length > 0 && [fromUsr isEqualToString:selfUsr]) return;

        NSData *imgBuf = [wrap valueForKey:@"m_nsImgBuf"];
        if (![imgBuf isKindOfClass:[NSData class]] || imgBuf.length == 0) return;

        NSString *chatName = ([msg isKindOfClass:[NSString class]] && msg.length > 0) ? msg : fromUsr;
        if (chatName.length == 0) return;

        // 聊天纳入/<会话>/<时间戳>.silk
        NSString *dir = [[VoicePackStore chatIncludeDirectory] stringByAppendingPathComponent:chatName];
        [[NSFileManager defaultManager] createDirectoryAtPath:dir withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *fileName = [NSString stringWithFormat:@"%lld.silk", (long long)([[NSDate date] timeIntervalSince1970] * 1000)];
        NSString *abs = [dir stringByAppendingPathComponent:fileName];
        if (![imgBuf writeToFile:abs atomically:YES]) {
            WPLog(@"Voice", @"[Include] 写入失败: %@", abs);
            return;
        }

        // 时长：解析消息 XML 的 voicelength（毫秒）
        NSString *content = [wrap valueForKey:@"m_nsContent"];
        NSString *rel = [VoicePackStore relPathForAbsPath:abs];
        long long ms = 0;
        if (content.length > 0) {
            NSRange head = [content rangeOfString:@"voicelength=\""];
            if (head.location != NSNotFound) {
                NSUInteger start = NSMaxRange(head);
                NSUInteger end = [content rangeOfString:@"\"" options:0 range:NSMakeRange(start, content.length - start)].location;
                if (end != NSNotFound && end > start) {
                    ms = [[content substringWithRange:NSMakeRange(start, end - start)] longLongValue];
                }
            }
        }
        if (ms > 0 && rel) [VoicePackStore setDurationMs:ms forRelPath:rel];
        WPLog(@"Voice", @"[Include] 已纳入语音: %@ (%.1fKB, %lldms)", rel ?: fileName, imgBuf.length / 1024.0, ms);
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Include] 纳入异常: %@", e.reason);
    }
}

// ═══════════════════════════════════════════════════════
// +install
// ═══════════════════════════════════════════════════════

@implementation VoiceHook

+ (void)install {
    Class cls;

    // ① 附件面板入口
    cls = objc_getClass("SelectAttachmentView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("layoutSubviews"),
                        (IMP)hook_SelectAttachmentView_layoutSubviews,
                        (IMP *)&orig_SelectAttachmentView_layoutSubviews);
        WPLog(@"Voice", @"[+] SelectAttachmentView layoutSubviews hooked");
    } else {
        WPLog(@"Voice", @"[-] SelectAttachmentView not found");
    }

    // ② 自动纳入语音
    cls = objc_getClass("CMessageMgr");
    if (cls) {
        MSHookMessageEx(cls, @selector(AsyncOnAddMsg:MsgWrap:),
                        (IMP)hook_AsyncOnAddMsgMsgWrap,
                        (IMP *)&orig_AsyncOnAddMsgMsgWrap);
        WPLog(@"Voice", @"[+] CMessageMgr AsyncOnAddMsg:MsgWrap: hooked");
    } else {
        WPLog(@"Voice", @"[-] CMessageMgr not found");
    }
}

@end
