@interface MMAppAttachFileMgr : MMUserService <ICdnComMgrExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _msgWrapDict; // +0x8
    NSMutableDictionary * _msgAttachUrlDict; // +0x10
}
+ (void)reportFileMsg:(id)arg1 action:(int)arg2;
+ (void)reportSendFileAction:(id)arg1 action:(int)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isLargeFileMessage:(id)arg1;
- (void)checkIfFileExistInSvr:(id)arg1;
- (void)checkUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)batchCheckUploadDataList:(id)arg1 inMsg:(id)arg2;
- (void)calcMessageWrapFileMd5:(id)arg1 scene:(unsigned int)arg2 filePath:(id)arg3;
- (void)checkUploadInternal:(id)arg1 scene:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)onGetCheckBigFileUploadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onBatchCheckBigFileUploadRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)msgWrapDict;
- (void)setMsgWrapDict:(id)arg1;
- (id)msgAttachUrlDict;
- (void)setMsgAttachUrlDict:(id)arg1;
- (void).cxx_destruct;
@end

