//
//  WPChatMenuHelper.h
//  MioPlugin
//
//  聊天长按菜单统一工具（WCR 式 spec 注册制）。
//
//  微信 8.0.64 菜单组装链（头文件实锤）：
//    长按 → onShowOperationMenu → showOperationMenu
//    → generateOperationMenu（组装核心：基类 getter 依次造转发/收藏/撤回等，
//      中间插一次子类 operationMenuItems → uniqMenuItems: → filteredMenuItems:
//      → 存 m_arrMenuItems）→ MMMenuController setMenuItems: 上屏
//
//  本工具 hook generateOperationMenu：
//    · 原生项原位不动；带插件标记的项抠出沉底（追加到数组末尾）
//    · 再把注册的 spec 项追加到最末——插件菜单项永远压轴
//    · action SEL 动态挂到 cell 类上（Joker/WCR 同款），点击时 self = cellView
//
//  用法：
//    MioChatMenuSpec *spec = [MioChatMenuSpec new];
//    spec.title = @"导入字体";
//    spec.svgName = @"expression";
//    spec.action = NSSelectorFromString(@"mioFontImportAction");
//    spec.actionIMP = (IMP)mioFontImportAction;
//    spec.shouldShow = ^BOOL(id cellView) { ... };
//    [WPChatMenuHelper registerSpec:spec];
//    [WPChatMenuHelper install];   // 幂等，多个模块调用只装一次
//

#import <Foundation/Foundation.h>

/// 一条插件菜单项的描述
@interface MioChatMenuSpec : NSObject

/// 菜单标题（同时用于与已有项查重，重名不添加，防 uniqMenuItems: 按标题去重误伤）
@property (nonatomic, copy) NSString *title;

/// 图标名（MMMenuItem 的 svgName 参数）
@property (nonatomic, copy) NSString *svgName;

/// 点击 action 的 SEL（动态挂到 cell 类上，实现里 self = 消息 cellView）
@property (nonatomic, assign) SEL action;

/// action 的 IMP，签名 v@:
@property (nonatomic, assign) IMP actionIMP;

/// 是否显示（cellView = BaseMessageCellView 实例）；nil = 总是显示
@property (nonatomic, copy) BOOL (^shouldShow)(id cellView);

@end

@interface WPChatMenuHelper : NSObject

/// 安装 BaseMessageCellView::generateOperationMenu 沉底 hook（幂等）
+ (void)install;

/// 注册菜单项 spec（install 前后均可，菜单每次弹出时实时读取）
+ (void)registerSpec:(MioChatMenuSpec *)spec;

@end
