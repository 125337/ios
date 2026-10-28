@interface TipsView : UIView <CAAnimationDelegate, IMessageNodeStatusExt>
{
    id <TipsViewDelegate> _delegate; // +0x8
    id _oUsrData; // +0x10
    BOOL _showCornerRadiusStyle; // +0x18
    BOOL _showArrow; // +0x19
    BOOL _isClickable; // +0x1a
    BOOL _hideAllRightButton; // +0x1b
    BOOL _isHighlight; // +0x1c
    BOOL _showingExpandView; // +0x1d
    BOOL _isWaitingForConfirm; // +0x1e
    BOOL _isVoicePlaying; // +0x1f
    BOOL _isAnimating; // +0x20
    BOOL _hasShown; // +0x21
    unsigned int _voiceMsgClientId; // +0x24
    id _usrData; // +0x28
    UIColor * _contentBackgroundColor; // +0x30
    NSString * _tipsTitle; // +0x38
    NSString * _tipText; // +0x40
    UIImage * _iconImage; // +0x48
    NSArray * _animationImages; // +0x50
    double _animationDuration; // +0x58
    long long _numberOfLines; // +0x60
    UIView * _expandCardView; // +0x68
    NSString * _customMenuItemTitle; // +0x70
    long long _style; // +0x78
    UIView * _bgContainerView; // +0x80
    UIView * _hlColorBgView; // +0x88
    UIButton * _backgroundButton; // +0x90
    UIButton * _tipRightButton; // +0x98
    UIButton * _tipRightTailButton; // +0xa0
    UILabel * _rightDescLabel; // +0xa8
    UILabel * _tipsLabel; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _nameLabel; // +0xc0
    UIView * _iconImageView; // +0xc8
    UIImageView * _arrowImageView; // +0xd0
    UIButton * _actionButton; // +0xd8
    NSString * _tipsRightButtonTitle; // +0xe0
    NSString * _tipsRightButtonConfirmTitle; // +0xe8
    NSString * _rightDescText; // +0xf0
    UIImageView * _playingImageView; // +0xf8
    UILongPressGestureRecognizer * _longPressGesture; // +0x100
    TipsViewAccessibilityElement * _tipsViewAccessibilityElement; // +0x108
}
+ (void)showAutoSaveTips:(id)arg1;
+ (id)showWebviewDangerousTips:(id)arg1 withTop:(double)arg2;
+ (id)showWCDeviceTipsWithDelegate:(id)arg1 ParentView:(id)arg2 TextContent:(id)arg3 isError:(BOOL)arg4;
+ (void)showEditImageTips:(id)arg1;
+ (void)showHelloMsgTipsWithDelegate:(id)arg1 parentViewController:(id)arg2 contacts:(id)arg3 forceLightMode:(BOOL)arg4;
+ (id)showAbandonQRCodeTipsWithDelegate:(id)arg1 parentViewController:(id)arg2 wording:(id)arg3;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 delegate:(id)arg2;
- (id)initWithUsername:(id)arg1 delegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 username:(id)arg2 delegate:(id)arg3;
- (void)initUIWithStyle:(long long)arg1 username:(id)arg2;
- (void)showExpandView;
- (void)hideExpandView;
- (void)hideExpandViewWithAnimated:(BOOL)arg1;
- (void)showOrHideExpandViewAnimated:(BOOL)arg1;
- (void)showOrHideExpandView;
- (void)setupLayout;
- (void)setVoiceMsgClientId:(unsigned int)arg1;
- (void)setExpandCardView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)updateRightButton;
- (void)updateRightButtonAnimated:(BOOL)arg1;
- (void)firstTapRightButton;
- (void)setNumberOfLines:(long long)arg1;
- (void)setIsClickable:(BOOL)arg1;
- (void)setIsHighlight:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setTipText:(id)arg1;
- (void)setTipsTitle:(id)arg1;
- (void)setHideAllRightButton:(BOOL)arg1;
- (void)setTipsAccessibilityLabel:(id)arg1;
- (void)updateTipsLayout:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setIconImage:(id)arg1;
- (void)setAnimationImages:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (void)setRightTrailButtonTitle:(id)arg1;
- (void)setRightTrailButtonConfirmTitle:(id)arg1;
- (void)setRightDescText:(id)arg1;
- (void)resetWaitingForConfirm;
- (void)setShowCornerRadiusStyle:(BOOL)arg1;
- (void)setShowArrow:(BOOL)arg1;
- (void)setCustomMenuItemTitle:(id)arg1;
- (void)layoutSubviews;
- (id)getIconImageView;
- (id)description;
- (void)didMoveToSuperview;
- (void)showTipsView:(double)arg1;
- (void)showTipsViewForever;
- (BOOL)isShowingTip;
- (void)showTipsView:(double)arg1 withAnimationTimes:(id)arg2 AnimationValues:(id)arg3;
- (void)closeTipsView;
- (void)hideTipsView;
- (void)performBgAction;
- (void)performAction;
- (void)performActionWithoutHideTipsView;
- (void)performIconAction;
- (void)performExposeAction;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onMessageStartPlaying;
- (void)onMessageStopPlaying;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)customActionsForAccessibilityElement;
- (id)accessibilityElements;
- (void)onPerformRightTailButtonAccessibilityAction;
- (void)onPerformRightButtonAccessibilityAction;
- (BOOL)accessibilityActivate;
- (void)onLongPress:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onTipsViewDoCustomMenuItem;
- (id)delegate;
- (id)usrData;
- (void)setUsrData:(id)arg1;
- (id)contentBackgroundColor;
- (id)tipsTitle;
- (id)tipText;
- (id)iconImage;
- (id)animationImages;
- (double)animationDuration;
- (BOOL)showCornerRadiusStyle;
- (BOOL)showArrow;
- (long long)numberOfLines;
- (BOOL)isClickable;
- (BOOL)hideAllRightButton;
- (BOOL)isHighlight;
- (id)expandCardView;
- (unsigned int)voiceMsgClientId;
- (id)customMenuItemTitle;
- (BOOL)showingExpandView;
- (void)setShowingExpandView:(BOOL)arg1;
- (long long)style;
- (id)bgContainerView;
- (void)setBgContainerView:(id)arg1;
- (id)hlColorBgView;
- (void)setHlColorBgView:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)tipRightButton;
- (void)setTipRightButton:(id)arg1;
- (id)tipRightTailButton;
- (void)setTipRightTailButton:(id)arg1;
- (id)rightDescLabel;
- (void)setRightDescLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)tipsRightButtonTitle;
- (void)setTipsRightButtonTitle:(id)arg1;
- (id)tipsRightButtonConfirmTitle;
- (void)setTipsRightButtonConfirmTitle:(id)arg1;
- (id)rightDescText;
- (BOOL)isWaitingForConfirm;
- (void)setIsWaitingForConfirm:(BOOL)arg1;
- (id)playingImageView;
- (void)setPlayingImageView:(id)arg1;
- (BOOL)isVoicePlaying;
- (void)setIsVoicePlaying:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)hasShown;
- (void)setHasShown:(BOOL)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)tipsViewAccessibilityElement;
- (void)setTipsViewAccessibilityElement:(id)arg1;
- (void).cxx_destruct;
@end
