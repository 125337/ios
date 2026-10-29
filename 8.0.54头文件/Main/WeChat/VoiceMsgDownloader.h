@interface VoiceMsgDownloader : MMUserService <INewSyncExt, DownloadVoiceDelegate, MMServiceProtocol>
{
    CDownloadVoiceMgr * _cgiDownloader; // +0x8
    DownloadVoiceCDNMgr * _cdnDownloader; // +0x10
    NSMutableSet * _downloadCdnFailSvrId; // +0x18
}
- (void)onServiceInit;
- (void)dealloc;
- (void)downloadMsg:(id)arg1;
- (BOOL)getMessageFromDB:(id)arg1;
- (BOOL)updateMessageToDB:(id)arg1;
- (void)OnRecvData:(id)arg1 MesLocalID:(unsigned int)arg2 n64MesSvrID:(long long)arg3 CreateTime:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 Offset:(unsigned int)arg6 Len:(unsigned int)arg7 Data:(id)arg8 EndFlag:(unsigned int)arg9 ErrNo:(unsigned int)arg10;
- (void)onCDNDownloadFail:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(id)arg5;
- (void)onNewSyncAddMessage:(id)arg1;
- (id)cgiDownloader;
- (void)setCgiDownloader:(id)arg1;
- (id)cdnDownloader;
- (void)setCdnDownloader:(id)arg1;
- (id)downloadCdnFailSvrId;
- (void)setDownloadCdnFailSvrId:(id)arg1;
- (void).cxx_destruct;
@end

