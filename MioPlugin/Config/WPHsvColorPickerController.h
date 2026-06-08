#import <UIKit/UIKit.h>
#import "WPColorUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface WPHsvColorPickerController : UIViewController

// ═══════════════════════════════════════════
//  初始化
// ═══════════════════════════════════════════

/// 完整构造（浅色 + 深色双模式）
/// @param lightHex  浅色 Hex，nil 则默认 #FFFFFF
/// @param darkHex   深色 Hex，nil 则默认 #202020
/// @param callback  确认回调 (lightHex, darkHex)
- (instancetype)initWithLightHex:(nullable NSString *)lightHex
                        darkHex:(nullable NSString *)darkHex
                       callback:(nullable void(^)(NSString *lightHex, NSString *darkHex))callback;

/// 简易构造（单色模式，无浅深切换）
- (instancetype)initWithHex:(NSString *)hex
                  callback:(void(^)(NSString *hex))callback;

// ═══════════════════════════════════════════
//  颜色状态
// ═══════════════════════════════════════════

@property (nonatomic, assign) WPHsvColor currentHsv;
@property (nonatomic, copy)   NSString   *currentLightHex;
@property (nonatomic, copy)   NSString   *currentDarkHex;
@property (nonatomic, assign) BOOL       isLightMode;
@property (nonatomic, assign) BOOL       singleColorMode; // YES = 无浅深切换

// ═══════════════════════════════════════════
//  UI 组件（暴露给 Category / 调试用）
// ═══════════════════════════════════════════

@property (nonatomic, strong) UIScrollView        *scrollView;
@property (nonatomic, strong) UIView              *contentView;
@property (nonatomic, strong) UISegmentedControl  *modeSegmentedControl;

@property (nonatomic, strong) UIView *colorDisplayView;             // 颜色预览块

@property (nonatomic, strong) UILabel    *hexLabel;
@property (nonatomic, strong) UITextField *hexTextField;

@property (nonatomic, strong) UIView    *rgbControlView;
@property (nonatomic, strong) UISlider  *redSlider, *greenSlider, *blueSlider;
@property (nonatomic, strong) UITextField *redTextField, *greenTextField, *blueTextField;
@property (nonatomic, strong) UILabel   *redLabel, *greenLabel, *blueLabel;

@property (nonatomic, strong) UILabel    *alphaLabel;
@property (nonatomic, strong) UISlider   *alphaSlider;
@property (nonatomic, strong) UITextField *alphaTextField;

@property (nonatomic, strong) UIScrollView *presetColorScrollView;
@property (nonatomic, strong) UIScrollView *morandiColorScrollView;
@property (nonatomic, strong) UIScrollView *historyColorScrollView;
@property (nonatomic, strong) NSMutableArray<NSString *> *historyColors;

@end

NS_ASSUME_NONNULL_END