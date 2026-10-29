@interface LiteAppJsApiSendFileMessage : LiteAppJsApi <ForwardMessageLogicDelegate, MMLiteAppDownloadMgrDelegate>
{
    ForwardMessageLogicController * _forwardMsgLogic; // +0x20
    NSMutableDictionary * _result; // +0x28
    NSString * _fileType; // +0x30
    NSString * _videoPath; // +0x38
    NSDictionary * _params; // +0x40
    NSString * _appId; // +0x48
    MMLiteAppDownloadMgr * _downloadMgr; // +0x50
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)sendFileMessage:(id)arg1;
- (void)sendImageMessage:(id)arg1;
- (void)sendVideoMessage:(id)arg1;
- (void)getFileDataFromCDN:(id)arg1 filePath:(id)arg2;
- (void)forwardImageMessage:(id)arg1 fileData:(id)arg2;
- (void)forwardMessage:(id)arg1 isImage:(BOOL)arg2;
- (void)addTailInfo:(id)arg1;
- (void)forwardVideoMessage:(id)arg1 filePath:(id)arg2;
- (void)forwardVideoMessageWithThumb:(id)arg1;
- (id)ConvertLiteAppImage2MsgWrapWithImage:(id)arg1 retErrMsg:(id *)arg2;
- (id)ConvertLiteAppVideo2MsgWrapWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)ConvertLiteAppVideo2MsgWrapWithVideoInfo:(id)arg1;
- (void)onDownloadTaskCompletion:(id)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end
