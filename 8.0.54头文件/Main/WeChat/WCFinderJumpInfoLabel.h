@interface WCFinderJumpInfoLabel : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoLabelDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    double _maxTextAreaWidth; // +0x28
    double _maxWidth; // +0x30
    MMTimer * _timer; // +0x38
    RichTextView * _textView; // +0x40
    UIImageView * _arrowImageView; // +0x48
    CGRect _targetFrame; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)changeToShow:(BOOL)arg1;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)prepareForAppearAnimationFromView:(id)arg1;
- (void)changeToAppear:(BOOL)arg1 duration:(double)arg2;
- (void)completionForAppearAnimation;
- (void)updateUIInfo;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (void)layoutUI;
- (void)notifyToShow;
- (void)onActionButtonDidClick;
- (id)textView;
- (id)arrowImageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

