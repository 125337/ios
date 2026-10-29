@interface AppMsgSendProcessor : UploadStateProcessor <IBufferUploadExt>
{
    unsigned int _sendRetryCount; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    NSString * _appMsgContent; // +0x18
    NSData * _appMsgContentData; // +0x20
    OpenBufferUploadMgr * _openBufferUploadMgr; // +0x28
}
- (id)initWithContext:(id)arg1;
- (id)openBufferUploadMgr;
- (id)appMsgContent;
- (id)appMsgContentData;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)startUploadMsgXmlData;
- (id)getSendAppMsgRequest;
- (void)sendCurAppMsg;
- (void)SendMsgOK:(id)arg1;
- (void)OnBufferUploadFail:(id)arg1 ClientAppDataId:(id)arg2;
- (void)OnBufferUploadOK:(id)arg1 ClientAppDataId:(id)arg2 MediaId:(id)arg3;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void)setAppMsgContent:(id)arg1;
- (void)setAppMsgContentData:(id)arg1;
- (void)setOpenBufferUploadMgr:(id)arg1;
- (unsigned int)sendRetryCount;
- (void)setSendRetryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

