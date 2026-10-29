@interface ilinkToVoIPMgrStatus : NSObject
{
    BOOL _isMicMute; // +0x8
    BOOL _isSpeakerOn; // +0x9
}
- (BOOL)isMicMute;
- (void)setIsMicMute:(BOOL)arg1;
- (BOOL)isSpeakerOn;
- (void)setIsSpeakerOn:(BOOL)arg1;
@end

