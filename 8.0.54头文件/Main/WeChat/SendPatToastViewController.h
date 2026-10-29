@interface SendPatToastViewController : MMWindowViewController <SendPatToastWindowDelegate, SendPatExt>
{
    BOOL _hideAfterShown; // +0x74
    PatWrap * _patWrap; // +0x78
    unsigned long long _alignment; // +0x80
    double _duration; // +0x88
    id /* block */ _completionBlock; // +0x90
    SendPatToastWindow * _window; // +0x98
    UIView * _bubbleView; // +0xa0
    CAShapeLayer * _bubbleLayer; // +0xa8
    RichTextView * _richTextView; // +0xb0
    MMTimer * _timer; // +0xb8
    long long _currentOrientation; // +0xc0
    NSString * _content; // +0xc8
    CGRect _headImageFrame; // +0xd0
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

