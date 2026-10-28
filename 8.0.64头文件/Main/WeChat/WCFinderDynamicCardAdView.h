@interface WCFinderDynamicCardAdView : WCFinderJumpInfoView
{
    FinderJumpInfo_Style * _jumpInfoStyle; // +0x8
    unsigned long long _currentPhase; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    WCFinderTextCarouselView * _descCarouselView; // +0x28
    UIImageView * _descSuffixIconView; // +0x30
    UILabel * _infoLabel; // +0x38
    UIImageView * _infoIconView; // +0x40
    UILabel * _infoSuffixLabel; // +0x48
    MMUIButton * _actionButton; // +0x50
    double _minWidth; // +0x58
    double _maxWidth; // +0x60
    MMTimer * _expandTimer; // +0x68
    unsigned long long _viewExpandTimestamp; // +0x70
    CGSize _selfSizeBeforeAnimation; // +0x78
    CGRect _actionBtnFrameBeforeAnimation; // +0x88
    CGRect _actionBtnFrameAfterAnimation; // +0xa8
}
- (id)init;
- (void)dealloc;
- (void)setCurrentPhase:(unsigned long long)arg1;
- (void)setPhase:(unsigned long long)arg1 animated:(BOOL)arg2;
- (double)minWidth;
- (double)maxWidth;
- (id)iconImageView;
- (id)titleLabel;
- (id)descCarouselView;
- (id)descSuffixIconView;
- (id)infoLabel;
- (id)infoSuffixLabel;
- (id)actionButton;
- (id)infoIconView;
- (void)onActionButtonDidClick;
- (void)layoutUI;
- (void)notifyToShow;
- (void)notifyToExpand;
- (id)cardStyle;
- (id)cardStyleAtPhase:(unsigned long long)arg1;
- (id)cardBackgroundColor;
- (id)iconUrl;
- (id)titleColor;
- (id)titleText;
- (id)descTextColor;
- (id)descTextArray;
- (id)descTextArrayWithPhase:(unsigned long long)arg1;
- (id)descSuffixIconUrl;
- (id)infoIconUrl;
- (id)infoText;
- (id)infoSuffixText;
- (id)infoFont;
- (id)infoTextColor;
- (id)buttonText;
- (id)buttonTextWithPhase:(unsigned long long)arg1;
- (id)buttonTitleColor;
- (id)buttonBackgroundColor;
- (int)buttonType;
- (int)imageSizeType;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToPhase:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)jumpInfoActionBeforeAnimationToPhase:(unsigned long long)arg1;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)arg1;
- (void)updateUIInfoWithAnimated:(BOOL)arg1;
- (void)updateDescSuffixIconView;
- (void)startExposeAction;
- (void)endExposeAction;
- (unsigned long long)viewExpandTime;
- (id)jumpInfoStyle;
- (void)setJumpInfoStyle:(id)arg1;
- (unsigned long long)currentPhase;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescCarouselView:(id)arg1;
- (void)setDescSuffixIconView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoIconView:(id)arg1;
- (void)setInfoSuffixLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (CGRect)actionBtnFrameBeforeAnimation;
- (void)setActionBtnFrameBeforeAnimation:(CGRect)arg1;
- (CGSize)selfSizeBeforeAnimation;
- (void)setSelfSizeBeforeAnimation:(CGSize)arg1;
- (CGRect)actionBtnFrameAfterAnimation;
- (void)setActionBtnFrameAfterAnimation:(CGRect)arg1;
- (void)setMinWidth:(double)arg1;
- (void)setMaxWidth:(double)arg1;
- (id)expandTimer;
- (void)setExpandTimer:(id)arg1;
- (unsigned long long)viewExpandTimestamp;
- (void)setViewExpandTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
