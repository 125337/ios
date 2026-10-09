#import "WPColorRow.h"
#import "../../Config/WPColorPicker.h"
#import "../../Config/WPColorUtil.h"
#import "../../Core/ConfigManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 单色行只有浅色块；双色行浅/深两块并排，互不重叠
static CGFloat const kDualWidth = 58.0;
static CGFloat const kSingleWidth = 34.0;
static CGFloat const kDualSwatchSize = 24.0;
static CGFloat const kSingleSwatchSize = 30.0;

@implementation WPColorRow {
    NSString *_lightKey;
    NSString *_darkKey;      // nil = 单色行
    BOOL _allowClear;
    __weak UIViewController *_hostVC;
    UIButton *_lightBtn;
    UIButton *_darkBtn;
}

- (instancetype)initWithLightKey:(NSString *)lightKey
                          darkKey:(NSString *)darkKey
                       allowClear:(BOOL)allowClear
                           hostVC:(UIViewController *)hostVC {
    BOOL dual = (darkKey != nil);
    CGFloat w = dual ? kDualWidth : kSingleWidth;
    self = [super initWithFrame:CGRectMake(0, 0, w, kRowH)];
    if (self) {
        _lightKey = lightKey;
        _darkKey = darkKey;
        _allowClear = allowClear;
        _hostVC = hostVC;
        self.backgroundColor = [UIColor clearColor];

        if (!dual) {
            _lightBtn = [self makeSwatchSize:kSingleSwatchSize x:2];
        } else {
            CGFloat darkX = w - 4 - kDualSwatchSize;
            _darkBtn = [self makeSwatchSize:kDualSwatchSize x:darkX];
            _lightBtn = [self makeSwatchSize:kDualSwatchSize x:darkX - 6 - kDualSwatchSize];
        }
        [self refresh];
    }
    return self;
}

- (UIButton *)makeSwatchSize:(CGFloat)size x:(CGFloat)x {
    UIButton *btn = [WPColorPicker makeColorButtonWithColor:nil size:size];
    btn.frame = CGRectMake(x, (kRowH - size) / 2.0, size, size);
    [btn addTarget:self action:@selector(swatchTapped:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:btn];
    return btn;
}

#pragma mark - 空值映射 + 渲染（全项目唯一一处）

/// 空/nil/非法 hex → 未设置观感：浅侧白、深侧黑；有值且合法 → 真实色
+ (UIColor *)swatchColorForHex:(NSString *)hex darkSide:(BOOL)darkSide {
    UIColor *color = hex.length > 0 ? [WPColorUtil colorFromHexString:hex] : nil;
    return color ?: (darkSide ? [UIColor blackColor] : [UIColor whiteColor]);
}

- (void)refresh {
    _lightBtn.backgroundColor = [WPColorRow swatchColorForHex:[ConfigManager valueForKey:_lightKey] darkSide:NO];
    if (_darkKey) {
        _darkBtn.backgroundColor = [WPColorRow swatchColorForHex:[ConfigManager valueForKey:_darkKey] darkSide:YES];
    }
}

#pragma mark - 点击取色

- (void)swatchTapped:(UIButton *)sender {
    if (!_hostVC) return;
    [WPColorRow presentPickerForLightKey:_lightKey darkKey:_darkKey allowClear:_allowClear hostVC:_hostVC refreshTarget:self];
}

+ (void)presentPickerForLightKey:(NSString *)lightKey
                          darkKey:(NSString *)darkKey
                       allowClear:(BOOL)allowClear
                           hostVC:(UIViewController *)hostVC
                    refreshTarget:(WPColorRow *)refreshTarget {
    NSString *lightHex = [ConfigManager valueForKey:lightKey];
    NSString *darkHex = darkKey ? [ConfigManager valueForKey:darkKey] : nil;

    [WPColorPicker presentColorPickerOnViewController:hostVC
                                             lightHex:lightHex
                                              darkHex:darkHex
                                           allowClear:allowClear
                                              onClear:^(BOOL clearLight) {
        // 清除 = 显式恢复未设置：只清激活侧（空串语义 = 渲染层走空值映射）
        if (!clearLight && !darkKey) return;   // 单色行无深色键，深色侧无可清
        [ConfigManager setValue:@"" forKey:(clearLight ? lightKey : darkKey)];
        [ConfigManager saveAll];
        [refreshTarget refresh];
    }
                                            onChanged:^(NSString *lHex, NSString *dHex) {
        [ConfigManager setValue:lHex forKey:lightKey];
        if (darkKey) [ConfigManager setValue:dHex forKey:darkKey];
        [ConfigManager saveAll];
        [refreshTarget refresh];
    }];
}

@end
