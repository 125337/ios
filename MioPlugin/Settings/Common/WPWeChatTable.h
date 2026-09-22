#import <UIKit/UIKit.h>

// 微信 cell 框架反射封装层 —— 让微信原生渲染 Mio 设置页（行箭头/开关/分组视觉全部由微信提供，WCR 同款）
// API 定论来源：WCRefine2.1-2.dylib 字符串 + 反编译实证：
//   WCTableViewManager:        init / addSection: / getAllSections / reloadAllSections
//   WCTableViewSectionManager: init / setHeaderTitle: / setFooterTitle: / addCell:
//   WCTableViewCellManager:    +switchCellForSel:target:title:on:
//                              +normalCellForSel:target:title:rightValue:accessoryType:
//                              +normalCellForSel:target:title:rightView:   （自定义视图行，WCR 颜色/滑杆行同款）
//   回调约定（反编译实证）：
//     switch 回调入参响应 isOn（handleSettingEntrySwitch_ 直接 [arg isOn]）
//     tap 回调入参 = cellManager 对象（handlePathCellTap_ 直接 [arg valueForKey:@"userInfo"]）
//     cellManager 支持 KVC userInfo 携带任意载荷（addSectionTo_ 用 setValue:forKey:@"userInfo"）
@interface WPWeChatTable : NSObject
@property (nonatomic, strong) id wcManager;      // WCTableViewManager 实例
@property (nonatomic, strong) UITableView *tableView;

+ (BOOL)available;                                 // 关键类判空（决定走微信引擎还是旧渲染）
+ (void)dumpFrameworkMethodsOnce;                  // 一次性方法表 dump（确认 init 签名等，供后续精化）
+ (instancetype)tableForVC:(UIViewController *)vc; // 建表 + 建 manager + dataSource/delegate 接线（不 addSubview，调用方自行添加）
- (id)addGroup;                                    // 建 section（addSection:）并挂到 manager，返回 WPWGroup 手柄
- (void)reload;                                    // reloadTableView + reloadData 双保险
- (void)reloadAsync;                               // 延迟 reload：排到当前 runloop 后（数据填充完成）连刷两次
@end

// 组手柄：包装 WCTableViewSectionManager（故意不继承 UIView，误用 addSubview 时立即暴露而非静默错布局）
@interface WPWGroup : NSObject
@property (nonatomic, strong) id sectionMgr;
- (void)wpSetHeader:(NSString *)header footer:(NSString *)footer;
- (void)addCell:(id)cellMgr;
@end

// 行构造（全反射 + respondsToSelector 探测；类/方法缺失返回 nil 由调用方回退）
id WPWCSwitchCell(SEL sel, id target, NSString *title, BOOL on);
id WPWCNavCell(SEL sel, id target, NSString *title, NSString *rightValue);   // accessoryType=1 右箭头
id WPWCViewCell(SEL sel, id target, NSString *title, UIView *view);          // 自定义视图行（sel 可传 NULL）
