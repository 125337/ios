@interface VoIPMPScreenProjectPIPContentSource : NSObject <VoIPMPScreenStreamSink>
{
    BOOL _isActive; // +0x8
    int _expectedSenderMemberId; // +0xc
    double _lastFeedTime; // +0x10
}
- (void)activate;
- (void)deactivate;
- (void)onScreenStreamPixelBuffer:(__CVBuffer *)arg1 memberId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)feedSenderPixelBuffer:(__CVBuffer *)arg1;
- (void)feedSenderBGRAData:(const void *)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)_feedPixelBufferToPIP:(__CVBuffer *)arg1;
- (__CVBuffer *)_rotatePixelBuffer90CCW:(__CVBuffer *)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (int)expectedSenderMemberId;
- (void)setExpectedSenderMemberId:(int)arg1;
- (double)lastFeedTime;
- (void)setLastFeedTime:(double)arg1;
@end
