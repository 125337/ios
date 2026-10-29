@interface AccountErrorInfo : NSObject
{
    unsigned int _uiMessage; // +0x8
    int _baseResponseRet; // +0xc
    BaseResponseErrMsg * _errMsg; // +0x10
}
+ (id)errorInfoFromBaseResponse:(id)arg1;
+ (id)errorInfoFromBaseResponse:(id)arg1 networkError:(id)arg2;
- (id)init;
- (void)parseErrMsgXml:(id)arg1;
- (unsigned int)uiMessage;
- (void)setUiMessage:(unsigned int)arg1;
- (int)baseResponseRet;
- (void)setBaseResponseRet:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
