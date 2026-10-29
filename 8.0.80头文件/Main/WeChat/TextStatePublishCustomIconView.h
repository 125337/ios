@interface TextStatePublishCustomIconView : UIView <MMUITextFieldDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    BOOL _enableSwitchIcon; // +0x8
    BOOL _enableAutoReplaceIcon; // +0x9
    BOOL _enableSwitchIconButtonShowBreathAnim; // +0xa
    BOOL _expanded; // +0xb
    id <TextStatePublishCustomIconViewDelegate> _delegate; // +0x10
    UIView * _backgroundView; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    MMUIButton * _switchIconButton; // +0x28
    UIImageView * _arrowImageView; // +0x30
    MMUITextField * _descriptionTextField; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIView * _textBackgroundView; // +0x48
    UIView * _footerView; // +0x50
    MMUIButton * _cancelButton; // +0x58
    MMUIButton * _doneButton; // +0x60
    UIView * _verticalSeparator; // +0x68
    MMUILabel * _tipsLabel; // +0x70
    UIViewPropertyAnimator * _animator; // +0x78
    UITapGestureRecognizer * _tapGesture; // +0x80
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x88
    double _expandHeight; // +0x90
    UIViewPropertyAnimator * _switchIconButtonAnimator; // +0x98
    TextStateIcon * _autoReplacedIcon; // +0xa0
    TextStateIcon * _selectedIcon; // +0xa8
}
+ (double)standardHeight;
+ (id)generateActionButton;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initGestures;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)initState;
- (id)feedbackGenerator;
- (void)setFrame:(CGRect)arg1;
- (void)setEnableSwitchIcon:(BOOL)arg1;
- (void)setEnableSwitchIconButtonShowBreathAnim:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)expandToHeight:(double)arg1 alongsideAnimation:(id /* block */)arg2;
- (BOOL)shrinkToStandardHeightWithCompletion:(id /* block */)arg1;
- (BOOL)isAnimatorRunning;
- (void)resetToStandard;
- (void)animateExpand;
- (void)startBreatchAnimForSwitchIconButton;
- (void)hideTips;
- (void)setAutoReplacedIcon:(id)arg1;
- (void)setSelectedIcon:(id)arg1 animated:(BOOL)arg2;
- (void)setSwitchButtonSelected:(BOOL)arg1;
- (void)setSwitchButtonSelected:(BOOL)arg1 animDuration:(double)arg2;
- (void)updateIcon;
- (id)icon;
- (id)customIconDescription;
- (void)handleTapGesture:(id)arg1;
- (void)onEndEditDescription;
- (void)onTapSwitchIconButton;
- (void)onTapCancelButton;
- (void)onTapDoneButton;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)mmTextFieldDidExceedMaxLen:(id)arg1;
- (void)checkInputRecommend;
- (void)requsetInputRecommendData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)enableSwitchIcon;
- (BOOL)enableAutoReplaceIcon;
- (void)setEnableAutoReplaceIcon:(BOOL)arg1;
- (BOOL)enableSwitchIconButtonShowBreathAnim;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)switchIconButton;
- (void)setSwitchIconButton:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)descriptionTextField;
- (void)setDescriptionTextField:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textBackgroundView;
- (void)setTextBackgroundView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)verticalSeparator;
- (void)setVerticalSeparator:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (BOOL)isExpanded;
- (void)setExpanded:(BOOL)arg1;
- (double)expandHeight;
- (void)setExpandHeight:(double)arg1;
- (id)switchIconButtonAnimator;
- (void)setSwitchIconButtonAnimator:(id)arg1;
- (id)autoReplacedIcon;
- (id)selectedIcon;
- (void)setSelectedIcon:(id)arg1;
- (void).cxx_destruct;
@end
