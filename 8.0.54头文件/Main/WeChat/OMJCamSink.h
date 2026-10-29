@interface OMJCamSink : NSObject
{
    SharedPtr<XMFFrameCreatorApple> _frameCreator; // +0x8
    SharedPtr<XMJCamSession> _backingSession; // +0x10
}
- (id)initWithBackingSession:(const void *)arg1;
- (void)clearBackingSession;
- (BOOL)isReady;
- (SharedPtr<XMFVideoFrame>)createImageFrameWithVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(BOOL)arg3;
- (void)sendVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(BOOL)arg3;
- (void)sendVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2;
- (void)sendAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (SharedPtr<XMJCamSession>)backingSession;
- (void)setBackingSession:(SharedPtr<XMJCamSession>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

