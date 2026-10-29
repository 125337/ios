@interface WCFinderDynamicCardAdView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderDynamicCardAdViewDelegate> _delegate; // +0x10
    FinderJumpInfo_Style * _jumpInfoStyle; // +0x18
    unsigned long long _currentPhase; // +0x20
    unsigned long long _feedExposeTimestamp; // +0x28
    unsigned long long _adExposeTimestamp; // +0x30
    unsigned long long _adExpandTimestamp; // +0x38
    unsigned long long _prefetchPlayTime; // +0x40
    WCFinderJumpInfo * _jumpInfo; // +0x48
    UIImageView * _iconImageView; // +0x50
    UILabel * _titleLabel; // +0x58
    WCFinderTextCarouselView * _descCarouselView; // +0x60
    UILabel * _infoLabel; // +0x68
    UIImageView * _infoIconView; // +0x70
    MMUIButton * _actionButton; // +0x78
    double _minWidth; // +0x80
    double _maxWidth; // +0x88
    MMTimer * _timer; // +0x90
    CGSize _selfSizeBeforeAnimation; // +0x98
    CGRect _actionBtnFrameBeforeAnimation; // +0xa8
    CGRect _actionBtnFrameAfterAnimation; // +0xc8
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
- (id)cardStyle;
- (id)cardStyleAtPhase:(unsigned long long)arg1;
- (id)cardBackgroundColor;
- (id)iconUrl;
- (id)titleColor;
- (id)titleText;
- (id)descTextColor;
- (id)descTextArray;
- (id)descTextArrayWithPhase:(unsigned long long)arg1;
- (id)infoIconUrl;
- (id)infoText;
- (id)infoTextColor;
- (id)buttonText;
- (id)buttonTextWithPhase:(unsigned long long)arg1;
- (id)buttonTitleColor;
- (id)buttonBackgroundColor;
- (int)buttonType;
- (int)imageSizeType;
- (void)resetReportData;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToPhase:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)jumpInfoActionBeforeAnimationToPhase:(unsigned long long)arg1;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)arg1;
- (void)updateUIInfoWithAnimated:(BOOL)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)jumpInfo;
- (int)showPosition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jumpInfoStyle;
- (void)setJumpInfoStyle:(id)arg1;
- (unsigned long long)currentPhase;
- (unsigned long long)feedExposeTimestamp;
- (void)setFeedExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)adExposeTimestamp;
- (void)setAdExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)adExpandTimestamp;
- (void)setAdExpandTimestamp:(unsigned long long)arg1;
- (unsigned long long)prefetchPlayTime;
- (void)setPrefetchPlayTime:(unsigned long long)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
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
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

