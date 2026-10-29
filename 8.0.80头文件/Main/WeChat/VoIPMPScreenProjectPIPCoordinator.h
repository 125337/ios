@interface VoIPMPScreenProjectPIPCoordinator : NSObject
{
    long long _state; // +0x8
    VoIPMPScreenProjectPIPContentSource * _contentSource; // +0x10
    VoIPMPFlutterTextureManager * _textureManager; // +0x18
}
- (BOOL)isScreenContentInPIP;
- (BOOL)transitionToPIPWithReceiver:(BOOL)arg1 textureManager:(id)arg2 senderMemberId:(int)arg3;
- (void)bootstrapFirstFrameWithImage:(id)arg1;
- (void)feedSenderPixelBuffer:(__CVBuffer *)arg1;
- (void)feedSenderBGRAData:(const void *)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)handlePIPDidStop;
- (void)handlePIPRestoreUserInterface;
- (void)forceCleanup;
- (void)_teardownContentSource;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)contentSource;
- (void)setContentSource:(id)arg1;
- (id)textureManager;
- (void)setTextureManager:(id)arg1;
- (void).cxx_destruct;
@end
