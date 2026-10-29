@interface WACgiResponse : NSObject
{
    unsigned int _uiMessage; // +0x8
    int _stnErrCode; // +0xc
    int _stnErrType; // +0x10
    WACgiRequest * _cgiRequest; // +0x18
    WXPBGeneratedMessage * _pbResponse; // +0x20
    WxaRuntimeLoginTransferResp * _transferResponse; // +0x28
    WACgiProfileInfo * _cgiProfile; // +0x30
}
+ (id)responseFrom:(id)arg1;
- (id)cgiRequest;
- (void)setCgiRequest:(id)arg1;
- (unsigned int)uiMessage;
- (void)setUiMessage:(unsigned int)arg1;
- (id)pbResponse;
- (void)setPbResponse:(id)arg1;
- (id)transferResponse;
- (void)setTransferResponse:(id)arg1;
- (id)cgiProfile;
- (void)setCgiProfile:(id)arg1;
- (int)stnErrCode;
- (void)setStnErrCode:(int)arg1;
- (int)stnErrType;
- (void)setStnErrType:(int)arg1;
- (void).cxx_destruct;
@end

