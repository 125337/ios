@interface MMLiveVideoFrameReprocessPipeLine : NSObject
{
    MMLiveVideoFrameWidgetManageLogic * _widgetManageLogic; // +0x8
    CIContext * _compositingContext; // +0x10
}
- (id)init;
- (void)initDefaultData;
- (opaqueCMSampleBuffer *)createCompositedSampleBufferWithVideoFrameWidgetsBeforeRender:(opaqueCMSampleBuffer *)arg1 flipX:(BOOL)arg2;
- (opaqueCMSampleBuffer *)createCompositedSampleBufferWithVideoFrameWidgetsBeforeSend:(opaqueCMSampleBuffer *)arg1 flipX:(BOOL)arg2;
- (void)createCompositingContext;
- (opaqueCMSampleBuffer *)createCompositedSampleBufferWithSourceBuffer:(opaqueCMSampleBuffer *)arg1 widgetList:(id)arg2 flipX:(BOOL)arg3;
- (id)widgetManageLogic;
- (void)setWidgetManageLogic:(id)arg1;
- (id)compositingContext;
- (void)setCompositingContext:(id)arg1;
- (void).cxx_destruct;
@end
