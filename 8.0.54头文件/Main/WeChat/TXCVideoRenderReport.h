@interface TXCVideoRenderReport : TXCVideoReportBase
{
    BOOL _isRenderedInView; // +0x8
    id <TXCVideoRenderReportDelegate> _delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)reset;
- (void)resetRenderStateInView;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRenderedInView;
- (void)setIsRenderedInView:(BOOL)arg1;
- (void).cxx_destruct;
@end

