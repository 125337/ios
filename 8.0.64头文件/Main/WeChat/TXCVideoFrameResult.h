@interface TXCVideoFrameResult : NSObject
{
    NSError * _error; // +0x8
    TXCVideoFrame * _videoFrame; // +0x10
}
- (id)initWithVideoFrame:(id)arg1 error:(id)arg2;
- (id)error;
- (id)videoFrame;
- (void).cxx_destruct;
@end
