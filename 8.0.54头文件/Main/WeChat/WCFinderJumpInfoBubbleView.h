@interface WCFinderJumpInfoBubbleView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoBubbleViewDelegate> _delegate; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    RichTextView * _textView; // +0x20
    WCFinderJumpInfo * _jumpInfo; // +0x28
    FinderJumpInfo_Style * _style; // +0x30
    unsigned long long _currentUIStyle; // +0x38
    double _maxTextAreaWidth; // +0x40
    double _maxWidth; // +0x48
    MMTimer * _timer; // +0x50
    UIImageView * _arrowImageView; // +0x58
    UILabel * _adLabel; // +0x60
    UILabel * _subtitleLabel; // +0x68
}
- (id)init;
- (void)dealloc;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)_setupSubtitleLabel:(id)arg1;
- (id)jumpInfo;
- (int)showPosition;
- (void)changeToShow:(BOOL)arg1;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)updateUIInfo;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (id)getIconUrl;
- (void)addShape:(id)arg1;
- (void)layoutUI;
- (void)notifyToShow;
- (void)onActionButtonDidClick;
- (id)iconImageView;
- (id)textView;
- (id)arrowImageView;
- (id)adLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (unsigned long long)currentUIStyle;
- (void)setCurrentUIStyle:(unsigned long long)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

