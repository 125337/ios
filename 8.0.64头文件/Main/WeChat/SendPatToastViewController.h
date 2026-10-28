@interface SendPatToastViewController : MMWindowViewController <SendPatToastWindowDelegate, SendPatExt>
{
    BOOL _hideAfterShown; // +0x7c
    PatWrap * _patWrap; // +0x80
    unsigned long long _alignment; // +0x88
    double _duration; // +0x90
    id /* block */ _completionBlock; // +0x98
    SendPatToastWindow * _window; // +0xa0
    UIView * _bubbleView; // +0xa8
    CAShapeLayer * _bubbleLayer; // +0xb0
    RichTextView * _richTextView; // +0xb8
    MMTimer * _timer; // +0xc0
    long long _currentOrientation; // +0xc8
    NSString * _content; // +0xd0
    CGRect _headImageFrame; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initSubviews;
- (void)refreshContent;
- (void)refreshView;
- (void)refreshLayer;
- (void)updateAnchorPoint;
- (id)generateBubbleLayer;
- (id)generateBubblePathInRect:(CGRect)arg1 arrowX:(double)arg2;
- (void)addArrowToBezierPath:(id)arg1;
- (void)setPatWrap:(id)arg1;
- (void)show;
- (void)hide;
- (void)hideWithAnimated:(int)arg1;
- (void)onFireTimer;
- (void)doShowAnimation;
- (void)doUpdateAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)onDeviceOrienationChange:(id)arg1;
- (void)onTouchWindow;
- (void)onUpdatePatSuffixWrap:(id)arg1 forUser:(id)arg2;
- (id)patWrap;
- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)arg1;
- (CGRect)headImageFrame;
- (void)setHeadImageFrame:(CGRect)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)window;
- (void)setWindow:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)hideAfterShown;
- (void)setHideAfterShown:(BOOL)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
