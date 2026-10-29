@interface WCFinderJumpInfoBubbleView : WCFinderJumpInfoView
{
    BOOL _fitContent; // +0x8
    BOOL _enableClick; // +0x9
    MMWebImageView * _iconImageView; // +0x10
    RichTextView * _textView; // +0x18
    double _leftMargin; // +0x20
    unsigned long long _currentUIStyle; // +0x28
    double _maxTextAreaWidth; // +0x30
    double _maxWidth; // +0x38
    UIColor * _disableIconColor; // +0x40
    UIColor * _disableTextColor; // +0x48
    UIImageView * _arrowImageView; // +0x50
    UILabel * _adLabel; // +0x58
    UILabel * _subtitleLabel; // +0x60
    UILabel * _wordingLabel; // +0x68
    MMTimer * _wordingTimer; // +0x70
}
- (id)init;
- (void)notifyToShow;
- (void)changeToShow:(BOOL)arg1;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)applyNormalBubbleCustomStyle:(id)arg1;
- (void)_setupSubtitleLabel:(id)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)setFitContent:(BOOL)arg1;
- (void)updateWithEnableClick:(BOOL)arg1 disableIconColor:(id)arg2 disableTextColor:(id)arg3;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)applyClickStateStyle;
- (void)updateUIInfo;
- (void)showWordingLabel;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (id)getIconUrl;
- (void)addShape:(id)arg1;
- (void)layoutUI;
- (void)layoutFitContentUI;
- (void)onActionButtonDidClick;
- (id)iconImageView;
- (id)textView;
- (id)arrowImageView;
- (id)adLabel;
- (id)wordingLabel;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (BOOL)fitContent;
- (unsigned long long)currentUIStyle;
- (void)setCurrentUIStyle:(unsigned long long)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (BOOL)enableClick;
- (void)setEnableClick:(BOOL)arg1;
- (id)disableIconColor;
- (void)setDisableIconColor:(id)arg1;
- (id)disableTextColor;
- (void)setDisableTextColor:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void)setWordingLabel:(id)arg1;
- (id)wordingTimer;
- (void)setWordingTimer:(id)arg1;
- (void).cxx_destruct;
@end
