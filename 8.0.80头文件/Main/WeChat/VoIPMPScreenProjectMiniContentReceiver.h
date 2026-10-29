@interface VoIPMPScreenProjectMiniContentReceiver : UIView <VoIPMPScreenStreamSink>
{
    int _expectedSenderMemberId; // +0x8
    AVSampleBufferDisplayLayer * _displayLayer; // +0x10
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (void)onScreenStreamPixelBuffer:(__CVBuffer *)arg1 memberId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (opaqueCMSampleBuffer *)_wrapPixelBuffer:(__CVBuffer *)arg1;
- (int)expectedSenderMemberId;
- (void)setExpectedSenderMemberId:(int)arg1;
- (id)displayLayer;
- (void)setDisplayLayer:(id)arg1;
- (void).cxx_destruct;
@end
