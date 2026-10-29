@interface WAFinderLiveView : WANativeView <MMFinderLiveFrontEndPreviewViewChannel>
{
    MMFinderLiveFrontEndPreviewView * _liveView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)onInsertWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onRemoveWithParam:(id)arg1;
- (void)layoutSubviews;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (void).cxx_destruct;
@end
