//
//  WPChatMenuHelper.m
//  MioPlugin
//
//  聊天长按菜单统一工具（WCR 式 spec 注册制），机制见头文件注释。
//
//  注意：沉底 hook 装在基类 BaseMessageCellView 上，子类若自行重写
//  generateOperationMenu 则不走本逻辑（8.0.64 未发现此类重写）。
//

#import "WPChatMenuHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "LogManager.h"

// 插件项标记：打上这个 associated object 的菜单项在沉底 pass 中被抠到末尾
static char kMioPluginMenuItemKey;

static IMP s_orig_generateOperationMenu = NULL;
static BOOL s_installed = NO;
static NSInteger s_orderLogBudget = 1; // 一次性顺序验证日志预算

static NSMutableArray *MioSpecs(void) {
    static NSMutableArray *specs = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ specs = [NSMutableArray array]; });
    return specs;
}

// 读菜单项标题（MMMenuItem 标题属性名未实锤，title / m_title 都试）
static NSString *MioTitleOfMenuItem(id item) {
    for (NSString *selName in @[@"title", @"m_title"]) {
        SEL sel = NSSelectorFromString(selName);
        if ([item respondsToSelector:sel]) {
            id t = ((id(*)(id, SEL))objc_msgSend)(item, sel);
            if ([t isKindOfClass:[NSString class]]) return t;
        }
    }
    return nil;
}

// 造 MMMenuItem 壳并打上插件标记（WCR 同款借壳）
static id MioCreateMenuItem(NSString *title, NSString *svgName, SEL action) {
    Class mmItemClass = objc_getClass("MMMenuItem");
    SEL initSel = NSSelectorFromString(@"initWithTitle:svgName:action:");
    if (!mmItemClass || ![mmItemClass instancesRespondToSelector:initSel]) return nil;
    id item = ((id(*)(id, SEL, id, id, SEL))objc_msgSend)(
        [mmItemClass alloc], initSel, title, svgName, action);
    if (item) {
        objc_setAssociatedObject(item, &kMioPluginMenuItemKey, @YES,
                                 OBJC_ASSOCIATION_RETAIN);
    }
    return item;
}

// 把 action SEL 动态挂到 cell 类上（SEL 已存在时刷新 IMP）
static void MioAttachAction(Class cellCls, MioChatMenuSpec *spec) {
    if (!spec.action || !spec.actionIMP) return;
    if (!class_addMethod(cellCls, spec.action, spec.actionIMP, "v@:")) {
        Method m = class_getInstanceMethod(cellCls, spec.action);
        if (m) method_setImplementation(m, spec.actionIMP);
    }
}

// generateOperationMenu hook：插件项沉底 + 追加 spec 项
static id hooked_generateOperationMenu(id self, SEL _cmd) {
    id origMenu = ((id(*)(id, SEL))s_orig_generateOperationMenu)(self, _cmd);

    // 防御：原返回值不是 NSArray（nil 或其他类型）就原样放行
    if (![origMenu isKindOfClass:[NSArray class]]) return origMenu;

    NSMutableArray *items = [NSMutableArray arrayWithArray:origMenu];

    // 沉底 pass：带插件标记的项原位抠出，追加到末尾（原生项顺序不动）
    NSMutableArray *marked = [NSMutableArray array];
    for (id item in items) {
        if (objc_getAssociatedObject(item, &kMioPluginMenuItemKey)) {
            [marked addObject:item];
        }
    }
    if (marked.count > 0) {
        [items removeObjectsInArray:marked];
        [items addObjectsFromArray:marked];
    }

    // 组装注册的 spec 项，追加到最末（压轴）
    BOOL appended = NO;
    Class cellCls = [self class];
    for (MioChatMenuSpec *spec in [MioSpecs() copy]) {
        if (spec.title.length == 0 || !spec.action) continue;
        if (spec.shouldShow && !spec.shouldShow(self)) continue;

        // 标题查重：uniqMenuItems: 可能按标题去重，重名不添防误伤原生项
        BOOL exists = NO;
        for (id it in items) {
            NSString *t = MioTitleOfMenuItem(it);
            if (t && [t isEqualToString:spec.title]) { exists = YES; break; }
        }
        if (exists) continue;

        MioAttachAction(cellCls, spec);
        id item = MioCreateMenuItem(spec.title, spec.svgName, spec.action);
        if (item) {
            [items addObject:item];
            appended = YES;
        }
    }

    if (appended) {
        // 回写 ivar：showOperationMenu 从 m_arrMenuItems 取菜单上屏，
        // 只改返回值不改 ivar 会白改
        @try {
            [(id)self setValue:items forKey:@"m_arrMenuItems"];
        } @catch (NSException *e) {
            WPLog(@"ChatMenu", @"[ChatMenu] 回写 m_arrMenuItems 失败: %@", e);
        }

        // 一次性顺序日志：验证插件项沉底（真机日志确认一次即可）
        if (s_orderLogBudget > 0) {
            s_orderLogBudget--;
            NSMutableArray *names = [NSMutableArray array];
            for (id it in items) {
                NSString *t = MioTitleOfMenuItem(it);
                [names addObject:t ?: NSStringFromClass([it class])];
            }
            WPLog(@"ChatMenu", @"[ORDER] %@ 菜单顺序: %@", NSStringFromClass(cellCls),
                  [names componentsJoinedByString:@" | "]);
        }
    }

    return items;
}

@implementation WPChatMenuHelper

+ (void)install {
    if (s_installed) return;
    s_installed = YES;

    Class cls = objc_getClass("BaseMessageCellView");
    if (!cls) {
        WPLog(@"ChatMenu", @"[WPChatMenuHelper] ⚠️ BaseMessageCellView NOT found");
        return;
    }
    SEL sel = NSSelectorFromString(@"generateOperationMenu");
    if (!class_getInstanceMethod(cls, sel)) {
        WPLog(@"ChatMenu", @"[WPChatMenuHelper] ⚠️ generateOperationMenu NOT found");
        return;
    }
    MSHookMessageEx(cls, sel, (IMP)hooked_generateOperationMenu,
                    &s_orig_generateOperationMenu);
    WPLog(@"ChatMenu",
          @"[WPChatMenuHelper] ✓ BaseMessageCellView::generateOperationMenu（%lu 个 spec）",
          (unsigned long)MioSpecs().count);
}

+ (void)registerSpec:(MioChatMenuSpec *)spec {
    if (!spec || spec.title.length == 0 || !spec.action) {
        WPLog(@"ChatMenu", @"[WPChatMenuHelper] ⚠️ spec 缺 title/action，忽略");
        return;
    }
    [MioSpecs() addObject:spec];
}

@end
