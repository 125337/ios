@interface VoIPPendingDotsView : UIView
{
    unsigned long long _frameIndex; // +0x8
    NSArray * _dotViews; // +0x10
}
+ (id)dotsViewWithReferenceLength:(double)arg1;
+ (id)dotsViewWithDotDiameter:(double)arg1 dotGap:(double)arg2;
- (void)applyFrameIndex:(unsigned long long)arg1;
- (unsigned long long)frameIndex;
- (void)setFrameIndex:(unsigned long long)arg1;
- (id)dotViews;
- (void)setDotViews:(id)arg1;
- (void).cxx_destruct;
@end
