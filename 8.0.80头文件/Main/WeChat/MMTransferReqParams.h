@interface MMTransferReqParams : NSObject
{
    BOOL _needVerifySignature; // +0x8
    BOOL _reportCost; // +0x9
    BOOL _disableRetryWhenFail; // +0xa
    BOOL _isWaitingH5auth; // +0xb
    BOOL _isReqRetry; // +0xc
    unsigned int _cmdId; // +0x10
    unsigned int _method; // +0x14
    unsigned int _scene; // +0x18
    unsigned int _transferType; // +0x1c
    unsigned int _jsApiControlBytesIndex; // +0x20
    NSString * _cgiUri; // +0x28
    NSString * _reqJson; // +0x30
    NSString * _h5Url; // +0x38
    NSString * _scope; // +0x40
    NSDictionary * _reqHeader; // +0x48
    NSString * _pubKeyToken; // +0x50
    NSString * _appId; // +0x58
    NSString * _debugIpName; // +0x60
    NSString * _routeTag; // +0x68
    unsigned long long _startTime; // +0x70
    NSMutableDictionary * _extraInfo; // +0x78
    id /* block */ _callback; // +0x80
    NSString * _h5AuthToken; // +0x88
}
- (id)toTransferReq;
- (BOOL)isValid;
- (unsigned int)cmdId;
- (void)setCmdId:(unsigned int)arg1;
- (id)cgiUri;
- (void)setCgiUri:(id)arg1;
- (id)reqJson;
- (void)setReqJson:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (unsigned int)method;
- (void)setMethod:(unsigned int)arg1;
- (id)reqHeader;
- (void)setReqHeader:(id)arg1;
- (id)pubKeyToken;
- (void)setPubKeyToken:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)needVerifySignature;
- (void)setNeedVerifySignature:(BOOL)arg1;
- (id)debugIpName;
- (void)setDebugIpName:(id)arg1;
- (id)routeTag;
- (void)setRouteTag:(id)arg1;
- (BOOL)reportCost;
- (void)setReportCost:(BOOL)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (unsigned int)transferType;
- (void)setTransferType:(unsigned int)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (unsigned int)jsApiControlBytesIndex;
- (void)setJsApiControlBytesIndex:(unsigned int)arg1;
- (id)h5AuthToken;
- (void)setH5AuthToken:(id)arg1;
- (BOOL)disableRetryWhenFail;
- (void)setDisableRetryWhenFail:(BOOL)arg1;
- (BOOL)isWaitingH5auth;
- (void)setIsWaitingH5auth:(BOOL)arg1;
- (BOOL)isReqRetry;
- (void)setIsReqRetry:(BOOL)arg1;
- (void).cxx_destruct;
@end
