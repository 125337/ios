@interface WCFileIndexService : MMUserService <MMServiceProtocol, IMsgExt, IHardLinkFileExt, ForwardMessageLogicExt>
{
    WCFileIndexInfoDB * _fileIndexDB; // +0x8
    void * _queueKey; // +0x10
    BOOL _enabled; // +0x18
    BOOL _supported; // +0x19
    BOOL _supportedForFileSource; // +0x1a
    NSObject<OS_dispatch_queue> * _shareDispatchQueue; // +0x20
}
+ (id)parseMsgFileInfo:(id)arg1 withFavData:(id)arg2;
+ (void)fileLinksStatInfo:(id)arg1 ofRecord:(id)arg2 callback:(id /* block */)arg3;
- (BOOL)enabled;
- (BOOL)supported;
- (BOOL)supportedForFileSource;
- (id)shareDispatchQueue;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getDb;
- (void)startFileIndexScan;
- (void)scanChatLogFile;
- (id)getFileIndexesWithMD5:(id)arg1;
- (void)clearExpiredFileIndexes;
- (void)p_performClearExpiredFileIndexes;
- (id)p_buildInvalidFileIndexList:(id)arg1;
- (BOOL)p_ifFileIndexValid:(id)arg1;
- (BOOL)p_ifClearExpiredFileIndexes;
- (id)convertFileIndexToSimpleChatLogInfo:(id)arg1;
- (id)p_processFileIndexInfoList:(id)arg1;
- (id)p_expandFullPathForUser:(id)arg1 cacheKey:(id)arg2;
- (BOOL)p_isMsgValid:(id)arg1 ofMsgId:(unsigned int)arg2;
- (void)launchStorageHardlinkHalfViewWithChatLogInfos:(id)arg1 fromController:(id)arg2 onShowLinks:(id /* block */)arg3 onDismiss:(id /* block */)arg4 onJumpToChat:(id /* block */)arg5;
- (void)p_checkIfFileIndexDuplicated:(id)arg1 ofMsgId:(unsigned int)arg2;
- (unsigned long long)convertChatLogDataTypeToFileIndexType:(unsigned char)arg1 msgType:(unsigned char)arg2;
- (void)convertFileIndexTypeToChatLogDataType:(unsigned long long)arg1 toDataType:(int *)arg2 toMsgType:(int *)arg3;
- (unsigned long long)getChatLogDataItemPrimaryInode:(void *)arg1;
- (void)saveChatLogDataItems:(const void *)arg1;
- (void)receiveScanFileCollector:(id)arg1;
- (id)p_filterChatFiles:(id)arg1;
- (BOOL)p_isPureNumberString:(id)arg1;
- (void)p_storeFilePaths:(id)arg1 fromSource:(id)arg2;
- (id)convertMsgToFileIndex:(id)arg1 ofMsg:(id)arg2 ofIndexType:(unsigned long long)arg3 ofFilePath:(id)arg4;
- (void)notifyMessageChanged:(id)arg1 ofMsg:(id)arg2;
- (void)notifyMessageChanged:(id)arg1 ofMsg:(id)arg2 shouldReport:(BOOL)arg3;
- (BOOL)p_saveMessage:(id)arg1 ofMsg:(id)arg2 ofIndexType:(unsigned long long)arg3 ofFilePath:(id)arg4 shouldReport:(BOOL)arg5;
- (void)notifyMessageDeleted:(id)arg1 ofMsg:(id)arg2;
- (void)notifySessionDeleted:(id)arg1;
- (void)showFileLinks:(id)arg1 ofUsr:(id)arg2 ofMsg:(id)arg3 fromController:(id)arg4;
- (void)showFileLinks:(id)arg1 ofUsr:(id)arg2 ofMsg:(id)arg3 fromController:(id)arg4 onShowLinks:(id /* block */)arg5 onDismiss:(id /* block */)arg6 onJumpToChat:(id /* block */)arg7;
- (void)showFileLinks:(id)arg1 ofUsr:(id)arg2 ofMsg:(id)arg3 ofRecord:(id)arg4 fromController:(id)arg5;
- (void)showFileLinks:(id)arg1 ofUsr:(id)arg2 ofMsg:(id)arg3 ofRecord:(id)arg4 fromController:(id)arg5 onShowLinks:(id /* block */)arg6 onDismiss:(id /* block */)arg7 onJumpToChat:(id /* block */)arg8;
- (void)p_showFileLinks:(id)arg1 ofUsr:(id)arg2 ofMsg:(id)arg3 ofRecord:(id)arg4 fromController:(id)arg5 onShowLinks:(id /* block */)arg6 onDismiss:(id /* block */)arg7 onJumpToChat:(id /* block */)arg8;
- (void)notifyFileChanged:(id)arg1;
- (BOOL)notifyFileChangedSync:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onPreForwardMsgToContact:(id)arg1 msgWrap:(id)arg2;
- (void)onPreForwardVideoToContact:(id)arg1 videoInfo:(id)arg2;
- (void)onForwardMsgToContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)onAfterForwardMsgToContact:(id)arg1 msgWrap:(id)arg2 fromMsg:(id)arg3;
- (void)onHardLinkFile:(id)arg1 to:(id)arg2 newInode:(unsigned long long)arg3 oldInode:(unsigned long long)arg4;
- (id)findValidCachePathForMD5:(id)arg1 messageWrap:(id)arg2 caller:(id)arg3;
- (unsigned long long)p_getFileInode:(id)arg1;
- (void)test_showAllFileLinks:(id)arg1;
- (void)test_hardLinkFiles:(id)arg1;
- (void)test_notifyFileChanged:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSupported:(BOOL)arg1;
- (void)setSupportedForFileSource:(BOOL)arg1;
- (void)setShareDispatchQueue:(id)arg1;
- (void).cxx_destruct;
@end
