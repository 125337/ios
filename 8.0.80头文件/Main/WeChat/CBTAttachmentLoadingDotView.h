@interface CBTAttachmentLoadingDotView : CBTAttachmentBaseView
{
    CADisplayLink * _displayLink; // +0x8
    double _lastAppendTime; // +0x10
    double _lastFrameTimestamp; // +0x18
    unsigned long long _currentDotCount; // +0x20
    CBTStreamTextView * _streamTextView; // +0x28
    NSDictionary * _textAttributes; // +0x30
}
- (id)initWithAttachment:(id)arg1 textAttributes:(id)arg2;
- (void)setupStreamTextView;
- (void)layoutView;
- (void)startAnimating;
- (void)stopAnimating;
- (void)onTick:(id)arg1;
- (void)appendOneDot;
- (void)dealloc;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastAppendTime;
- (void)setLastAppendTime:(double)arg1;
- (double)lastFrameTimestamp;
- (void)setLastFrameTimestamp:(double)arg1;
- (unsigned long long)currentDotCount;
- (void)setCurrentDotCount:(unsigned long long)arg1;
- (id)streamTextView;
- (void)setStreamTextView:(id)arg1;
- (id)textAttributes;
- (void)setTextAttributes:(id)arg1;
- (void).cxx_destruct;
@end
