@interface NetCmdLongLinkEvent : NetCmdSendOnlyEvent
{
    int _responseErrType; // +0x3c
    int _responseErrCode; // +0x40
    id /* block */ _responseDecoder; // +0x48
    id /* block */ _responseHandler; // +0x50
    NSData * _responseData; // +0x58
}
- (BOOL)isSendOnlyTask;
- (int)decodeResponseData:(id)arg1 errorCode:(int *)arg2;
- (void)setResponseData:(id)arg1 errType:(int)arg2 errCode:(int)arg3;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (id /* block */)responseDecoder;
- (void)setResponseDecoder:(id /* block */)arg1;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;
- (id)responseData;
- (void)setResponseData:(id)arg1;
- (int)responseErrType;
- (void)setResponseErrType:(int)arg1;
- (int)responseErrCode;
- (void)setResponseErrCode:(int)arg1;
- (void).cxx_destruct;
@end
