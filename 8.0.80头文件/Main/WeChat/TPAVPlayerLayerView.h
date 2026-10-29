@interface TPAVPlayerLayerView : UIView
{
    BOOL _firstFrameRendered; // +0x8
    id <TPAVPlayerLayerViewDelegate> _delegate; // +0x10
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)videoFillMode;
- (void)setVideoFillMode:(id)arg1;
- (void)setLayerPlayer:(id)arg1;
- (void)resetView;
- (void)setNeedsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFirstFrameRendered:(BOOL)arg1;
- (BOOL)firstFrameRendered;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
