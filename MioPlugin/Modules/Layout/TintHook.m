#import "TintHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

// ============================================================
// 聊天界面昵称颜色 Hook
// Hook CommonMessageCellView.initChatRoomNameLabel
// 修改 m_chatRoomNameLabel.textColor + font
// ============================================================
static IMP orig_InitChatRoomNameLabel = nil;

static UILabel *hook_InitChatRoomNameLabel(id self, SEL cmd) {
    // 第1步：调用原始方法，获取 UILabel
    UILabel *label = ((UILabel *(*)(id, SEL))orig_InitChatRoomNameLabel)(self, cmd);

    @try {
        // 第2步：通过 ivar 获取 m_chatRoomNameLabel
        Ivar ivar = class_getInstanceVariable(object_getClass(self), "m_chatRoomNameLabel");
        if (!ivar) return label;

        UILabel *nameLabel = object_getIvar(self, ivar);
        if (!nameLabel) return label;

        PluginConfig *config = [PluginConfig shared];

        // 第3步：检查聊天昵称颜色开关
        if (config.enableChatNameColor) {
            // 读取浅色/深色 hex 值
            NSString *lightHex = config.chatNameColorHex ?: @"#808080";
            NSString *darkHex = config.chatNameColorDarkHex ?: @"#BFBFBF";

            // 第4步：创建动态颜色（自动响应浅色/深色模式切换）
            UIColor *dynamicColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *trait) {
                if (trait.userInterfaceStyle == UIUserInterfaceStyleDark) {
                    return [config colorFromHex:darkHex]
                        ?: [UIColor colorWithRed:0.75 green:0.75 blue:0.75 alpha:1.0];
                }
                return [config colorFromHex:lightHex]
                    ?: [UIColor colorWithRed:0.5 green:0.5 blue:0.5 alpha:1.0];
            }];

            // 第5步：应用颜色
            [nameLabel setTextColor:dynamicColor];
        }

        // 第6步：聊天昵称字号设置
        if (config.enableChatNameSize) {
            CGFloat fontSize = config.chatNameFontSize;
            if (fontSize <= 0) fontSize = 16.0;
            nameLabel.font = [UIFont systemFontOfSize:fontSize];
        }

    } @catch (NSException *e) {
        WPLog(@"Tint", @"hook_InitChatRoomNameLabel 异常: %@", e.reason);
    }

    return label;
}

// ============================================================
// 朋友圈昵称颜色 Hook
// Hook WCTimeLineCellView.initNickLabel
// 修改 nickLabel.textColor + font
// ============================================================
static IMP orig_InitNickLabel = nil;

static UILabel *hook_InitNickLabel(id self, SEL cmd) {
    // 第1步：调用原始方法，获取 UILabel
    UILabel *label = ((UILabel *(*)(id, SEL))orig_InitNickLabel)(self, cmd);

    @try {
        // 第2步：通过 valueForKey 获取 nickLabel
        UILabel *nickLabel = nil;
        @try {
            nickLabel = [self valueForKey:@"nickLabel"];
        } @catch (NSException *e) {
            return label;
        }
        if (!nickLabel) return label;

        PluginConfig *config = [PluginConfig shared];

        // 第3步：检查朋友圈昵称颜色开关
        if (config.enableMomentsNameColor) {
            // 读取浅色/深色 hex 值
            NSString *lightHex = config.momentsNameColorHex ?: @"#808080";
            NSString *darkHex = config.momentsNameColorDarkHex ?: @"#BFBFBF";

            // 第4步：创建动态颜色（自动响应浅色/深色模式切换）
            UIColor *dynamicColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *trait) {
                if (trait.userInterfaceStyle == UIUserInterfaceStyleDark) {
                    return [config colorFromHex:darkHex]
                        ?: [UIColor colorWithRed:0.75 green:0.75 blue:0.75 alpha:1.0];
                }
                return [config colorFromHex:lightHex]
                    ?: [UIColor colorWithRed:0.5 green:0.5 blue:0.5 alpha:1.0];
            }];

            // 第5步：应用颜色
            [nickLabel setTextColor:dynamicColor];
        }

        // 第6步：朋友圈昵称字号设置
        if (config.enableMomentsNameSize) {
            CGFloat fontSize = config.momentsNameFontSize;
            if (fontSize <= 0) fontSize = 16.0;
            nickLabel.font = [UIFont systemFontOfSize:fontSize];
        }

    } @catch (NSException *e) {
        WPLog(@"Tint", @"hook_InitNickLabel 异常: %@", e.reason);
    }

    return label;
}

// ============================================================
// TintHook 主入口
// ============================================================
@implementation TintHook

+ (void)install {
    WPLog(@"Tint", @"TintHook install — 开始注册名字颜色 Hook");

    Class commonMessageCellView = objc_getClass("CommonMessageCellView");
    if (commonMessageCellView) {
        MSHookMessageEx(
            commonMessageCellView,
            @selector(initChatRoomNameLabel),
            (IMP)hook_InitChatRoomNameLabel,
            (IMP *)&orig_InitChatRoomNameLabel
        );
        WPLog(@"Tint", @"  ✓ Hook CommonMessageCellView.initChatRoomNameLabel");
    } else {
        WPLog(@"Tint", @"  ✗ CommonMessageCellView 不存在，跳过");
    }

    Class timeLineCellView = objc_getClass("WCTimeLineCellView");
    if (timeLineCellView) {
        MSHookMessageEx(
            timeLineCellView,
            @selector(initNickLabel),
            (IMP)hook_InitNickLabel,
            (IMP *)&orig_InitNickLabel
        );
        WPLog(@"Tint", @"  ✓ Hook WCTimeLineCellView.initNickLabel");
    } else {
        WPLog(@"Tint", @"  ✗ WCTimeLineCellView 不存在，跳过");
    }

    WPLog(@"Tint", @"TintHook install — 完成注册");
}

@end
