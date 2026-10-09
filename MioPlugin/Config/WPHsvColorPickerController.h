#import <UIKit/UIKit.h>
#import "WPColorUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface WPHsvColorPickerController : UIViewController

// ═══════════════════════════════════════════
//  初始化
// ═══════════════════════════════════════════

/// 完整构造（浅色 + 深色双模式）
/// @param lightHex  浅色 Hex，nil 则默认 #FFFFFF（仅初始显示）
/// @param darkHex   深色 Hex，nil 则默认 #202020（仅初始显示）
/// @param allowClear YES = 导航栏提供「清除」入口，走 clearCallback（独立于确认回调）
/// @param clearCallback 清除回调，语义 = 用户显式要求恢复"未设置"
/// @param callback  确认回调 (lightHex, darkHex)；与打开时完全一致（未修改）→ 传 (nil, nil)，
///                  调用方收到 nil 不写字段，避免空值被兜底色隐性污染
- (instancetype)initWithLightHex:(nullable NSString *)lightHex
                        darkHex:(nullable NSString *)darkHex
                     allowClear:(BOOL)allowClear
                  clearCallback:(nullable void(^)(void))clearCallback
                       callback:(nullable void(^)(nullable NSString *lightHex, nullable NSString *darkHex))callback;

/// 旧构造（无清除入口，等价 allowClear=NO）

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