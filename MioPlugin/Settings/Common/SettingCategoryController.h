#import <UIKit/UIKit.h>
#import <objc/runtime.h>

typedef NS_ENUM(NSInteger, InputValueType) {
    InputValueTypeNumber = 0,  // 数值
    InputValueTypeText         // 文本字符串
};

Class SettingCategoryBaseClass(void);

// 全站唯一渲染引擎 = 微信引擎（WPWeChatTable 反射封装 WCTableViewManager，WCR 同款）。
// 旧 UITableView/手绘引擎已删除；scrollView/contentView 仅作遗留壳保留（不再承载行渲染）。
// y/cy/width 等布局参数在微信引擎下仅为兼容签名保留，传 0 即可。
@interface SettingCategoryController : UIViewController
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, strong) NSMutableSet<NSString *> *masterSwitchKeys;

- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w;
- (CGFloat)finishGroup:(UIView *)group atY:(CGFloat)y height:(CGFloat)h;
- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w;
- (CGFloat)addSectionFooter:(NSString *)text y:(CGFloat)y width:(CGFloat)w;
- (CGFloat)addNavRowInGroup:(UIView *)group title:(NSString *)title subtitle:(NSString *)subtitle tag:(NSInteger)tag action:(SEL)action cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addSwitchRowInGroup:(UIView *)group title:(NSString *)title desc:(NSString *)desc key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addSubSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addInfoRowInGroup:(UIView *)group title:(NSString *)title rightValue:(NSString *)value copyText:(nullable NSString *)copyText cy:(CGFloat)cy width:(CGFloat)w;

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
- (CGFloat)addSubSectionLabelInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addColorRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w darkKey:(nullable NSString *)darkKey darkValue:(nullable NSString *)darkValue;
- (CGFloat)addSeparatorInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w;
- (CGFloat)addMasterSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on subBuilder:(void (^)(UIView *expand, CGFloat *ecy))subBuilder cy:(CGFloat)cy width:(CGFloat)w;
- (void)switchChanged:(UISwitch *)sender;
- (void)colorButtonTapped:(UIButton *)sender;
- (void)buttonClicked:(NSString *)key;
- (void)buildUI;
/// 微信引擎开关落地后的钩子（每页可重写：如提示重启生效）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on;
@end
