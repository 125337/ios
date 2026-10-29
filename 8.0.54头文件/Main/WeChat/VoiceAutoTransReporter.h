@interface VoiceAutoTransReporter : NSObject
{
    unsigned int _userScollCount; // +0x8
    int _transEndType; // +0xc
    NSMutableSet * _voiceIds; // +0x10
}
- (id)init;
- (void)userDidScroll;
- (void)addVoiceIdWithMsg:(id)arg1;
- (void)report;
- (unsigned int)userScollCount;
- (void)setUserScollCount:(unsigned int)arg1;
- (id)voiceIds;
- (void)setVoiceIds:(id)arg1;
- (int)transEndType;
- (void)setTransEndType:(int)arg1;
- (void).cxx_destruct;
@end

