@interface MMConfSDKTalkingInfo : NSObject
{
    int _voiceActivity; // +0x8
    MMConfSDKMember * _member; // +0x10
}
- (id)initWithMember:(id)arg1 voiceActivity:(int)arg2;
- (id)contact;
- (id)description;
- (id)member;
- (void)setMember:(id)arg1;
- (int)voiceActivity;
- (void)setVoiceActivity:(int)arg1;
- (void).cxx_destruct;
@end
