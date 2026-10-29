@interface MSEMessageAppFileMsgCGIClient : NSObject
{
    NSString * _toUsername; // +0x8
    NSString * _fileName; // +0x10
    long long _fileSize; // +0x18
    NSMutableArray * _cdnReqDataNodes; // +0x20
    NSString * _clientMsgId; // +0x28
    NSString * _fileMd5; // +0x30
}
- (void)setMsgAppClientWithToUsername:(id)arg1 withFileName:(id)arg2 withFileSize:(long long)arg3 fileMd5:(id)arg4;
- (id)getMessageClientID;
- (id)genShareExtMsgAppPrepareRequsstCGIWrap;
- (id)genExtMsgAppPrepareRequest;
- (id)genExtMsgAppMsg;
- (id)genAppMsgContent;
- (id)genAppMsgAttachContent;
- (id)genExtMsgAppFileInfo;
- (id)genShareExtMsgAppCdnReqMessage;
- (id)genCdnReqBody;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (id)cdnReqDataNodes;
- (void)setCdnReqDataNodes:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (void).cxx_destruct;
@end

