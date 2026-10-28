@interface WCFinderJumpInfoHardAdView : WCFinderJumpInfoView <MMWebImageViewDelegate>
{
    FinderJumpInfo_Style * _jumpInfoStyle; // +0x8
    unsigned long long _currentPhase; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    WCFinderTextCarouselView * _descCarouselView; // +0x28
    UILabel * _infoLabel; // +0x30
    MMWebImageView * _infoIconView; // +0x38
    MMUIButton * _actionButton; // +0x40
    double _minWidth; // +0x48
    double _maxWidth; // +0x50
    MMTimer * _expandTimer; // +0x58
    unsigned long long _viewExpandTimestamp; // +0x60
    CGSize _selfSizeBeforeAnimation; // +0x68
    CGRect _actionBtnFrameBeforeAnimation; // +0x78
    CGRect _actionBtnFrameAfterAnimation; // +0x98
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
- (id)infoLabel;
- (id)actionButton;
- (id)infoIconView;
- (void)onActionButtonDidClick;
- (void)layoutUI;
- (void)notifyToShow;
- (void)notifyToExpand;
- (id)cardBackgroundColor;
- (id)iconUrl;
- (id)titleColor;
- (id)titleText;
- (id)descTextColor;
- (id)descTextArray;
- (id)descTextArrayWithStyle:(unsigned long long)arg1;
- (id)infoIconUrl;
- (id)infoText;
- (id)infoTextColor;
- (id)buttonText;
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
- (void)startExposeAction;
- (void)endExposeAction;
- (unsigned long long)viewExpandTime;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)jumpInfoStyle;
- (void)setJumpInfoStyle:(id)arg1;
- (unsigned long long)currentPhase;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescCarouselView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoIconView:(id)arg1;
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
