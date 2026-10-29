@interface MMAppAttachFileMgr : MMUserService <ICdnComMgrExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _msgWrapDict; // +0x8
    NSMutableDictionary * _msgAttachUrlDict; // +0x10
}
+ (void)reportFileMsg:(id)arg1 action:(int)arg2;
+ (void)reportSendFileAction:(id)arg1 action:(int)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isFileMessageAndLargerThanSize:(id)arg1 size:(unsigned long long)arg2;
- (BOOL)isLargeFileMessage:(id)arg1;
- (void)checkIfFileExistInSvr:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)msgWrapDict;
- (void)setMsgWrapDict:(id)arg1;
- (id)msgAttachUrlDict;
- (void)setMsgAttachUrlDict:(id)arg1;
- (void).cxx_destruct;
@end
