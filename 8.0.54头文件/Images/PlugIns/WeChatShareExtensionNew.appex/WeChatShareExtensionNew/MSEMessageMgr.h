@interface MSEMessageMgr : NSObject <MSEMessageVideoCGIClientDelegate, NSURLSessionDelegate>
{
    BOOL _isSendingVideoRequest; // +0x8
    BOOL _isResendMsg; // +0x9
    int _contentType; // +0xc
    MSEMessageImgCGIClient * _msgImgCGIClient; // +0x10
    MSEMessageVideoCGIClient * _msgVideoCGIClient; // +0x18
    MSEMessageAppMsgCGIClient * _msgAppMsgCGIClient; // +0x20
    MSEMessageAppFileMsgCGIClient * _msgFileAppMsgCGIClient; // +0x28
    NSString * _cdnHostIP; // +0x30
    NSString * _currentSessionID; // +0x38
    unsigned long long _currentTaskID; // +0x40
}
+ (id)sharedInstance;
- (void)sendImageMessageToUser:(id)arg1 withImageUrls:(id)arg2;
- (void)sendVideoMessageToUser:(id)arg1 withVideoUrl:(id)arg2;
- (void)sendUrlMessageToUser:(id)arg1 withContentUrl:(id)arg2 withThumbnailImgUrl:(id)arg3 withUrlTitle:(id)arg4 Desc:(id)arg5;
- (void)sendFileAppMessageToUser:(id)arg1 withFileName:(id)arg2 withFileSize:(long long)arg3 fileMd5:(id)arg4;
- (void)startCompressVideo:(id)arg1;
- (void)tryResendMsg;
- (void)clearLastFailRequest;
- (void)onVideoDidCompressEnd;
- (void)onVideoDidCompressSuccessWithFileSize:(long long)arg1 videoUrl:(id)arg2 outputVideoUrl:(id)arg3;
- (void)onVideoDidCompressFail:(id)arg1;
- (id)getCgiUriPrefix;
- (id)genCGIRequestBufferInternal:(id)arg1;
- (void)postMessageCDNRequestWithCGIWrap:(id)arg1 withCdnRequestMsg:(id)arg2;
- (void)postCdnPostRequestToUrl:(id)arg1 withCdnReqBuffer:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sendBadRequestNotification;
- (void)sendSuccessRequestNotification;
- (void)sendFailRequestNotification:(id)arg1;
- (void)reportSendMsgFailIdKeyWithStatuscode:(long long)arg1;
- (BOOL)checkIfValid;
- (void)saveTaskMessageIDWithSessionID:(id)arg1 taskID:(unsigned long long)arg2;
- (void)removeMessageMetaDataFile;
- (void)addMessageFailTaskSessionDataWithSessionID:(id)arg1 taskID:(unsigned long long)arg2;
- (void)removeMessageFailTaskSessionDataWithSesionID:(id)arg1 taskID:(unsigned long long)arg2;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (id)msgImgCGIClient;
- (void)setMsgImgCGIClient:(id)arg1;
- (id)msgVideoCGIClient;
- (void)setMsgVideoCGIClient:(id)arg1;
- (id)msgAppMsgCGIClient;
- (void)setMsgAppMsgCGIClient:(id)arg1;
- (id)msgFileAppMsgCGIClient;
- (void)setMsgFileAppMsgCGIClient:(id)arg1;
- (id)cdnHostIP;
- (void)setCdnHostIP:(id)arg1;
- (BOOL)isSendingVideoRequest;
- (void)setIsSendingVideoRequest:(BOOL)arg1;
- (BOOL)isResendMsg;
- (void)setIsResendMsg:(BOOL)arg1;
- (id)currentSessionID;
- (void)setCurrentSessionID:(id)arg1;
- (unsigned long long)currentTaskID;
- (void)setCurrentTaskID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

