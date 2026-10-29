@interface SightIconView : UIView
{
    int m_iconType; // +0x8
    MMTimer * m_timer; // +0x10
    double m_progress; // +0x18
    double m_targetProgress; // +0x20
    double m_progressStep; // +0x28
    double m_forceStep; // +0x30
    double m_animIntermediate; // +0x38
    double m_animIntermediate2; // +0x40
    id <SightIconViewDelegate> m_delegate; // +0x48
    BOOL _useBigIconForPlay; // +0x50
    BOOL _addRoundBorder; // +0x51
    BOOL _enableBlurEffect; // +0x52
    int m_targetIconType; // +0x54
    double m_radius; // +0x58
    UIColor * _bgColor; // +0x60
    UIColor * _barColor; // +0x68
    UIColor * _staticIconFnColor; // +0x70
    UIColor * _dynamicIconFnColor; // +0x78
    UIColor * _dynamicIconBgColor; // +0x80
    UIColor * _dynamicBgColor; // +0x88
    UIColor * _exclaIconColor; // +0x90
    UIView * _blurView; // +0x98
    UIView * _bgView; // +0xa0
    UIColor * _pressColor; // +0xa8
    UIImageView * _iconImageView; // +0xb0
    UIColor * _blurColor; // +0xb8
    NSMutableDictionary * _iconTypeRadius; // +0xc0
    NSMutableDictionary * _iconTypeColor; // +0xc8
    NSMutableDictionary * _iconTypeShadow; // +0xd0
}
+ (id)PlayBtnCover:(CGRect)arg1;
+ (id)PlayBtnOperation:(CGRect)arg1;
+ (id)PlayBtnOperation:(CGRect)arg1 color:(id)arg2;
+ (id)defaultIcon:(CGRect)arg1 type:(int)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 blurColor:(id)arg2;
- (void)commInit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)blurView;
- (id)bgView;
- (id)iconImageView;
- (id)staticIconFnColor;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)dynamicIconFnColor;
- (id)dynamicIconBgColor;
- (id)exclaIconColor;
- (id)pressColor;
- (void)setRadius:(double)arg1;
- (void)setIconType:(int)arg1;
- (void)fullRunWithTime:(double)arg1;
- (void)forceSetProgressFrom:(double)arg1 toProgress:(double)arg2;
- (void)forceSetProgressInCommonModes;
- (void)forceSetProgressInCommonModesFrom:(double)arg1 toProgress:(double)arg2;
- (double)getCurrentProgressValue;
- (void)setBarColor:(id)arg1;
- (void)setIconType:(int)arg1 andRadius:(double)arg2;
- (void)setIconType:(int)arg1 color:(id)arg2;
- (void)setIconType:(int)arg1 shadow:(BOOL)arg2;
- (void)setIconWithImage:(id)arg1 Radius:(double)arg2 Color:(id)arg3;
- (void)setIconWithImage:(id)arg1 Radius:(double)arg2 Color:(id)arg3 transform:(CGAffineTransform)arg4;
- (void)setBgViewColor:(id)arg1;
- (void)setStaticIconBackgroundWithRadius:(double)arg1;
- (double)radiusForIconType:(int)arg1;
- (id)colorForIconType:(int)arg1;
- (BOOL)shadowForIconType:(int)arg1;
- (void)displayCurView;
- (void)setProgress:(double)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)drawNonAnimIcon;
- (void)drawRoundBackgroundWithContext:(CGContext *)arg1 Radius:(double)arg2;
- (void)drawProgressWithContext:(CGContext *)arg1 Radius:(double)arg2 Progress:(double)arg3;
- (void)drawWheelWithRadius:(double)arg1;
- (void)drawExclaWithRadius:(double)arg1;
- (void)drawExclaFilledWithRadius:(double)arg1;
- (void)drawTriangleWithRadius:(double)arg1;
- (void)drawDownloadWithRadius:(double)arg1;
- (void)drawPauseWithRadius:(double)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateAnimation;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (double)progress;
- (double)progressStep;
- (void)setProgressStep:(double)arg1;
- (int)iconType;
- (double)radius;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)barColor;
- (void)setStaticIconFnColor:(id)arg1;
- (void)setDynamicIconFnColor:(id)arg1;
- (void)setDynamicIconBgColor:(id)arg1;
- (id)dynamicBgColor;
- (void)setDynamicBgColor:(id)arg1;
- (void)setExclaIconColor:(id)arg1;
- (BOOL)useBigIconForPlay;
- (void)setUseBigIconForPlay:(BOOL)arg1;
- (BOOL)addRoundBorder;
- (void)setAddRoundBorder:(BOOL)arg1;
- (void)setBlurView:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setPressColor:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (id)blurColor;
- (void)setBlurColor:(id)arg1;
- (BOOL)enableBlurEffect;
- (void)setEnableBlurEffect:(BOOL)arg1;
- (id)iconTypeRadius;
- (void)setIconTypeRadius:(id)arg1;
- (id)iconTypeColor;
- (void)setIconTypeColor:(id)arg1;
- (id)iconTypeShadow;
- (void)setIconTypeShadow:(id)arg1;
- (void).cxx_destruct;
@end

