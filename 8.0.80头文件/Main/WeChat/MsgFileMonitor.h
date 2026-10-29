@interface MsgFileMonitor : MMUserService <MMServiceProtocol>
{
    BOOL _isEnabled; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
}
+ (id)shared;
+ (BOOL)shouldHandleMsg:(id)arg1 dataId:(id)arg2;
+ (id)findDataItemWithDataId:(id)arg1 inList:(id)arg2;
+ (id)recordSubFileName:(id)arg1;
+ (id)senderUsernameOfMsg:(id)arg1;
+ (id)recordDataItemAtInnerIndex:(id)arg1 inList:(id)arg2;
+ (void)reportAction:(unsigned long long)arg1 msgWrap:(id)arg2 dataId:(id)arg3;
+ (void)onDownloadStart:(id)arg1 dataId:(id)arg2;
+ (void)onDownloadStop:(id)arg1 dataId:(id)arg2;
+ (void)onDownloadFinish:(id)arg1 dataId:(id)arg2 isSucceed:(BOOL)arg3;
+ (void)onSlientSyncReceived:(id)arg1;
+ (void)onSlientSyncStart:(id)arg1;
+ (void)onSlientSyncStop:(id)arg1;
+ (void)onSlientSyncFinish:(id)arg1 isSucceed:(BOOL)arg2;
+ (void)onUserPreview:(id)arg1;
+ (void)onUserClickDeleteBubble:(id)arg1 dataId:(id)arg2;
+ (void)onUserSelectAndDeleteMultiMsg:(id)arg1 dataId:(id)arg2;
+ (void)onUserDeleteSearchMsg:(id)arg1 dataId:(id)arg2;
+ (void)onUserRevoke:(id)arg1 dataId:(id)arg2;
+ (void)onUserDeleteRecord:(id)arg1 dataId:(id)arg2;
+ (void)onMsgClear:(id)arg1 dataId:(id)arg2;
+ (void)onChatAllMsgCleared:(id)arg1;
+ (void)onMsgClearOnBatchAdd:(id)arg1 dataId:(id)arg2;
+ (void)onUserClickDiskSpaceClear:(id)arg1 innerIndex:(id)arg2;
+ (void)onDiskSpaceClear:(id)arg1 innerIndex:(id)arg2;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)checkMsgFile:(id)arg1;
- (void)checkMsgFile:(id)arg1 dataId:(id)arg2 isFileExist:(BOOL)arg3;
- (id)msgKey:(id)arg1 dataId:(id)arg2;
- (void)clearMsgDownloadedFlag:(id)arg1 dataId:(id)arg2;
- (void)clearAllDownloadedFlagForChats:(id)arg1;
- (void)markMsgDownloaded:(id)arg1 dataId:(id)arg2;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
