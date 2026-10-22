#import <UIKit/UIKit.h>
#import <objc/runtime.h>

typedef NS_ENUM(NSInteger, InputValueType) {
    InputValueTypeNumber = 0,  // 数值
    InputValueTypeText         // 文本字符串
};

// 全站唯一渲染引擎 = 微信引擎（WPWeChatTable 反射封装 WCTableViewManager，WCR 同款）。
// 旧 UITableView/手绘引擎已删除；scrollView/contentView 仅作遗留壳保留（不再承载行渲染）。
// y/cy/width 等布局参数在微信引擎下仅为兼容签名保留，传 0 即可。
// 注意：基类必须是 UIViewController——静态继承微信主程序类（MMUIViewController）在全能签
// 注入下 dyld 绑定不到主程序 ObjC 类符号，微信启动即崩（tail30 实证）。兼容契约改由
// UIViewController(MioMMCompat) category 提供，见 .m。
@class WPWeChatTable;

@interface SettingCategoryController : UIViewController
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, strong) NSMutableSet<NSString *> *masterSwitchKeys;
/// 微信引擎表（只读暴露；表头/表尾自定义视图挂它，如点歌页搜索框 tableHeaderView）
@property (nonatomic, strong, readonly) WPWeChatTable *wcTable;

- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w;
/// 重建微信引擎表（wpReloadUI 内部已调用；仅引擎就绪检测/特殊时序才直接使用）
- (void)wpRebuildWeChatTable;
/// 唯一公开刷新入口：重建微信引擎表（首次建表/清表复用由内部自判）+ 重填行。
/// 任何配置变更、开关切换、picker/输入保存后的刷新统一调这个，禁止再手动成对调 wpRebuildWeChatTable+wpBuildRows
- (void)wpReloadUI;
/// 行构建钩子：子类只重写、不调用（基类守卫：非 reload 上下文直接调用会打日志并自愈转发 wpReloadUI）
- (void)wpBuildRows;
- (CGFloat)finishGroup:(UIView *)group atY:(CGFloat)y height:(CGFloat)h;
- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w;
- (CGFloat)addSectionFooter:(NSString *)text y:(CGFloat)y width:(CGFloat)w;
- (CGFloat)addNavRowInGroup:(UIView *)group title:(NSString *)title subtitle:(NSString *)subtitle tag:(NSInteger)tag action:(SEL)action cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addSwitchRowInGroup:(UIView *)group title:(NSString *)title desc:(NSString *)desc key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addSubSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addInfoRowInGroup:(UIView *)group title:(NSString *)title rightValue:(NSString *)value copyText:(nullable NSString *)copyText cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addInfoRowInGroup:(UIView *)group title:(NSString *)title rightValue:(NSString *)value copyText:(nullable NSString *)copyText showArrow:(BOOL)showArrow cy:(CGFloat)cy width:(CGFloat)w;

- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                           cy:(CGFloat)cy
                        width:(CGFloat)w;

- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                   alertTitle:(nullable NSString *)alertTitle
                 alertMessage:(nullable NSString *)alertMessage
                           cy:(CGFloat)cy
                        width:(CGFloat)w;
- (CGFloat)addHintRowInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addButtonRowInGroup:(UIView *)group title:(NSString *)title hint:(NSString *)hint key:(NSString *)key cy:(CGFloat)cy width:(CGFloat)w;

/// 颜色行：allowClear=YES 时选择器带「清除」入口，点击把 key/darkKey 写回空串恢复未设置（全项目唯一颜色行入口）
- (CGFloat)addColorRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w darkKey:(nullable NSString *)darkKey darkValue:(nullable NSString *)darkValue allowClear:(BOOL)allowClear;
/// WCR addSegmentCellTo 同款：行内右侧 UISegmentedControl，ValueChanged 直写配置
- (CGFloat)addSegmentRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key names:(NSArray<NSString *> *)names index:(NSInteger)index cy:(CGFloat)cy width:(CGFloat)w;
/// segment ValueChanged 统一入口（直写配置；子类可重写做页级联动，如模式切换重建页面）
- (void)wpSegmentChanged:(UISegmentedControl *)seg;
- (CGFloat)addSeparatorInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addMasterSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on subBuilder:(void (^)(UIView *expand, CGFloat *ecy))subBuilder cy:(CGFloat)cy width:(CGFloat)w;
- (void)colorButtonTapped:(UIButton *)sender;
- (void)buttonClicked:(NSString *)key;
/// 微信引擎开关落地后的钩子（每页可重写：如提示重启生效）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on;
/// switch 回调落地（写配置+saveAll；子类可重写做写前拦截，如互斥开关，拒绝时不调 super）
- (void)wpHandleSwitchKey:(NSString *)key row:(id)row on:(BOOL)on haveOn:(BOOL)haveOn;
/// 输入行点击流程（弹窗→保存→重建；子类可重写拦截做校验）
- (void)wpRunInputFlow:(NSDictionary *)row;
@end
