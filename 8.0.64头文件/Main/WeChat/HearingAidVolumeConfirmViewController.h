@interface HearingAidVolumeConfirmViewController : MMUIViewController
{
    MMUILabel * _titleLabel; // +0x70
    UIImageView * _icon; // +0x78
    UIView * _confirmBtn; // +0x80
    UIImageView * _confirmBtnImage; // +0x88
    NSTimer * _timer; // +0x90
    NSTimer * _hideTimer; // +0x98
    MMUILabel * _tipView; // +0xa0
    double _startTime; // +0xa8
    id <UIGestureRecognizerDelegate> _previousPopGestureDelegate; // +0xb0
    HearingAidVolumeConfirmLogic * _logic; // +0xb8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)genIcon;
- (void)initTitle;
- (void)initConfirmBtn;
- (void)initTipsView;
- (void)viewDidLayoutSubviews;
- (void)updateLayout;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)beginPlay;
- (void)deallocTimer;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)confirmBtnImage;
- (void)setConfirmBtnImage:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)hideTimer;
- (void)setHideTimer:(id)arg1;
- (id)tipView;
- (void)setTipView:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)previousPopGestureDelegate;
- (void)setPreviousPopGestureDelegate:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end
