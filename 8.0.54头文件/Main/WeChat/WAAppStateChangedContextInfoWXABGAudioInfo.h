@interface WAAppStateChangedContextInfoWXABGAudioInfo : MMObject
{
    BOOL _bgAudioMode; // +0x8
    BOOL _bgVoipMode; // +0x9
    BOOL _isVoipChatting; // +0xa
    BOOL _isVoipChattingInterupted; // +0xb
    BOOL _isWXVoipChatting; // +0xc
    BOOL _isWxaVoipWaiting; // +0xd
}
- (id)description;
- (BOOL)bgAudioMode;
- (void)setBgAudioMode:(BOOL)arg1;
- (BOOL)bgVoipMode;
- (void)setBgVoipMode:(BOOL)arg1;
- (BOOL)isVoipChatting;
- (void)setIsVoipChatting:(BOOL)arg1;
- (BOOL)isVoipChattingInterupted;
- (void)setIsVoipChattingInterupted:(BOOL)arg1;
- (BOOL)isWXVoipChatting;
- (void)setIsWXVoipChatting:(BOOL)arg1;
- (BOOL)isWxaVoipWaiting;
- (void)setIsWxaVoipWaiting:(BOOL)arg1;
@end

