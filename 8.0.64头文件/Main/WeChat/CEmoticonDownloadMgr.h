@interface CEmoticonDownloadMgr : MMObject <EmoticonDownloadProxyDelegate, CNetworkStatusExt>
{
    NSMutableDictionary * m_downloadCgiDic; // +0x8
    OrderedDictionary * m_notDownloadQueue; // +0x10
    NSMutableDictionary * m_downloadInfoDic; // +0x18
    unsigned int m_downloadCgiMaxCount; // +0x20
    NSRecursiveLock * _m_oLock; // +0x28
}
- (id)init;
- (BOOL)IsMsgInDownloadQueue:(id)arg1 n64SvrID:(long long)arg2;
- (void)updateDownloadCgiMaxCount;
- (id)downloadInfoForChat:(id)arg1 n64SvrID:(long long)arg2;
- (void)deleteMsgForChat:(id)arg1 n64SvrID:(long long)arg2;
- (id)addToDownloadInfoDicWithMsgWrap:(id)arg1;
- (BOOL)checkDownload;
- (void)downloadFail:(id)arg1;
- (void)downloadOK:(id)arg1;
- (void)startDownload:(id)arg1 highPriority:(BOOL)arg2;
- (void)resumeDownload;
- (void)stopDownloadByChatName:(id)arg1;
- (void)stopDownloadByChatName:(id)arg1 n64SvrID:(long long)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (id)m_oLock;
- (void)setM_oLock:(id)arg1;
- (void).cxx_destruct;
@end
