#import <UIKit/UIKit.h>
#import "WPColorUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface WPHsvColorPickerController : UIViewController

// ═══════════════════════════════════════════
//  初始化（永远双色模式：顶栏下方浅色/深色分段常显）
// ═══════════════════════════════════════════

/// 唯一构造入口
/// @param lightHex  浅色 Hex，nil 则默认 #FFFFFF（仅初始显示）
/// @param darkHex   深色 Hex，nil 则默认 #202020（仅初始显示）
/// @param allowClear YES = 导航栏提供「清除」入口
/// @param onChanged  确认回调：仅"用户调整了颜色 + 点确认"时触发（userModified 判定），
///                   未修改 → 不回调直接关闭。确认即写入两侧当前值
/// @param onClear    清除回调：用户点清除时触发，isLightSide 标明清的是哪一侧
- (instancetype)initWithLightHex:(nullable NSString *)lightHex
                        darkHex:(nullable NSString *)darkHex
                     allowClear:(BOOL)allowClear
                       onChanged:(nullable void(^)(NSString *lightHex, NSString *darkHex))onChanged
                         onClear:(nullable void(^)(BOOL isLightSide))onClear;

// ═══════════════════════════════════════════
//  颜色状态
// ═══════════════════════════════════════════

@property (nonatomic, assign) WPHsvColor currentHsv;
@property (nonatomic, copy)   NSString   *currentLightHex;
@property (nonatomic, copy)   NSString   *currentDarkHex;
@property (nonatomic, assign) BOOL       isLightMode;
@property (nonatomic, assign) BOOL       allowClear;      // YES = 导航栏带「清除」入口

// ═══════════════════════════════════════════
//  UI 组件（暴露给 Category / 调试用）
// ═══════════════════════════════════════════

@property (nonatomic, strong) UIScrollView        *scrollView;
@property (nonatomic, strong) UIView              *contentView;
@property (nonatomic, strong) UISegmentedControl  *modeSegmentedControl;

@property (nonatomic, strong) UIView *colorDisplayView;             // 颜色预览块

@property (nonatomic, strong) NSMutableArray<NSString *> *historyColors;

@end

NS_ASSUME_NONNULL_END
