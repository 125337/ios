@interface YTProgressHUD : UIView
{
    BOOL useAnimation; // +0x8
    SEL methodForExecution; // +0x10
    id targetForExecution; // +0x18
    id objectForExecution; // +0x20
    UILabel * label; // +0x28
    UILabel * detailsLabel; // +0x30
    BOOL isFinished; // +0x38
    CGAffineTransform rotationTransform; // +0x40
    BOOL square; // +0x70
    BOOL dimBackground; // +0x71
    BOOL taskInProgress; // +0x72
    BOOL removeFromSuperViewOnHide; // +0x73
    float opacity; // +0x74
    float xOffset; // +0x78
    float yOffset; // +0x7c
    float margin; // +0x80
    float graceTime; // +0x84
    float minShowTime; // +0x88
    float progress; // +0x8c
    float _cornerRadius; // +0x90
    long long animationType; // +0x98
    id <YTProgressHUDDelegate> delegate; // +0xa0
    UIColor * color; // +0xa8
    UIFont * labelFont; // +0xb0
    UIColor * labelColor; // +0xb8
    UIFont * detailsLabelFont; // +0xc0
    UIColor * detailsLabelColor; // +0xc8
    UIView * indicator; // +0xd0
    NSTimer * graceTimer; // +0xd8
    NSTimer * minShowTimer; // +0xe0
    UIView * customView; // +0xe8
    NSDate * showStarted; // +0xf0
    long long mode; // +0xf8
    NSString * labelText; // +0x100
    NSString * detailsLabelText; // +0x108
    UIColor * activityIndicatorColor; // +0x110
    id /* block */ completionBlock; // +0x118
    CGSize minSize; // +0x120
    CGSize size; // +0x130
}
+ (id)showHUDAddedTo:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)hideHUDForView:(id)arg1 animated:(BOOL)arg2;
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(BOOL)arg2;
+ (id)HUDForView:(id)arg1;
+ (id)allHUDsForView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)dealloc;
- (void)show:(BOOL)arg1;
- (void)hide:(BOOL)arg1;
- (void)hide:(BOOL)arg1 afterDelay:(double)arg2;
- (void)hideDelayed:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)didMoveToSuperview;
- (void)showUsingAnimation:(BOOL)arg1;
- (void)hideUsingAnimation:(BOOL)arg1;
- (void)animationFinished:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)done;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(BOOL)arg4;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id /* block */)arg2;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id /* block */)arg2 onQueue:(id)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id /* block */)arg2 onQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)launchExecution;
- (void)cleanUp;
- (void)setupLabels;
- (void)updateIndicators;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)registerForKVO;
- (void)unregisterFromKVO;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateUIForKeypath:(id)arg1;
- (void)registerForNotifications;
- (void)unregisterFromNotifications;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)updateForCurrentOrientationAnimated:(BOOL)arg1;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)labelFont;
- (void)setLabelFont:(id)arg1;
- (id)labelColor;
- (void)setLabelColor:(id)arg1;
- (id)detailsLabelFont;
- (void)setDetailsLabelFont:(id)arg1;
- (id)detailsLabelColor;
- (void)setDetailsLabelColor:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (float)xOffset;
- (void)setXOffset:(float)arg1;
- (float)yOffset;
- (void)setYOffset:(float)arg1;
- (CGSize)minSize;
- (void)setMinSize:(CGSize)arg1;
- (BOOL)isSquare;
- (void)setSquare:(BOOL)arg1;
- (float)margin;
- (void)setMargin:(float)arg1;
- (BOOL)dimBackground;
- (void)setDimBackground:(BOOL)arg1;
- (float)graceTime;
- (void)setGraceTime:(float)arg1;
- (float)minShowTime;
- (void)setMinShowTime:(float)arg1;
- (id)graceTimer;
- (void)setGraceTimer:(id)arg1;
- (id)minShowTimer;
- (void)setMinShowTimer:(id)arg1;
- (BOOL)taskInProgress;
- (void)setTaskInProgress:(BOOL)arg1;
- (BOOL)removeFromSuperViewOnHide;
- (void)setRemoveFromSuperViewOnHide:(BOOL)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)showStarted;
- (void)setShowStarted:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)labelText;
- (void)setLabelText:(id)arg1;
- (id)detailsLabelText;
- (void)setDetailsLabelText:(id)arg1;
- (float)progress;
- (void)setProgress:(float)arg1;
- (CGSize)size;
- (id)activityIndicatorColor;
- (void)setActivityIndicatorColor:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg1;
- (void).cxx_destruct;
@end
