@interface VoiceTransContextInfo : NSObject
{
    VoiceTransLogic * _voiceTransLogic; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
- (id)voiceTransLogic;
- (void)setVoiceTransLogic:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end
