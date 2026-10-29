@interface VoIPDBService : MMUserService <MMServiceProtocol>
{
    VoIPDB * _voipBaseDB; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)arg1;
- (unsigned int)getRemoteUserIlinkExpireTime:(id)arg1;
- (void)setRemoteUserIlinkStatus:(id)arg1 sdkMode:(unsigned int)arg2 liveTime:(unsigned int)arg3;
- (BOOL)InsertVoIPMessageHistory:(id)arg1 isFromServer:(BOOL)arg2;
- (id)getMessageHistoryAtMost:(long long)arg1;
- (BOOL)deleteVoIPMessageHistory:(id)arg1;
- (void)DelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgList:(id)arg2 deleteAll:(BOOL)arg3;
- (id)voipBaseDB;
- (void)setVoipBaseDB:(id)arg1;
- (void).cxx_destruct;
@end

