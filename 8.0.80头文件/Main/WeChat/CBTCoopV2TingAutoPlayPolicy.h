@interface CBTCoopV2TingAutoPlayPolicy : MMUserService <IChatBotVoIPExt, ICBTGlobalExt, MMServiceProtocol>
{
    NSMutableSet * _autoPlayKeySet; // +0x8
    NSMutableSet * _playedKeySet; // +0x10
    NSString * _lastFinishedTTSTraceMsgid; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)shouldAutoPlayForTraceMsgid:(id)arg1 kind:(unsigned long long)arg2 recommendAutoPlay:(BOOL)arg3 cardWrap:(id)arg4 svrid:(long long)arg5;
- (void)persistAutoPlayedForTraceMsgid:(id)arg1 kind:(unsigned long long)arg2 svrid:(long long)arg3;
- (void)revokeAutoPlayGrantForTraceMsgid:(id)arg1 kind:(unsigned long long)arg2;
- (BOOL)isAutoPlayedForTraceMsgid:(id)arg1 kind:(unsigned long long)arg2;
- (id)_readAutoPlayStateDataFromCardWrap:(id)arg1 svrid:(long long)arg2;
- (void)_persistAutoPlayKey:(id)arg1 svrid:(long long)arg2 stateData:(id)arg3;
- (void)onAudioStateChanged:(BOOL)arg1 isMicrophoneOpen:(BOOL)arg2 isPageInForeground:(BOOL)arg3;
- (void)onTTSRoundFinished:(id)arg1;
- (BOOL)hasTTSFinishedForTraceMsgid:(id)arg1;
- (void)clearAutoPlayState;
- (void)onCallEnd;
- (id)autoPlayKeyForTraceMsgid:(id)arg1 kind:(unsigned long long)arg2;
- (id)autoPlayKeySet;
- (void)setAutoPlayKeySet:(id)arg1;
- (id)playedKeySet;
- (void)setPlayedKeySet:(id)arg1;
- (id)lastFinishedTTSTraceMsgid;
- (void)setLastFinishedTTSTraceMsgid:(id)arg1;
- (void).cxx_destruct;
@end
