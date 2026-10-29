@interface WxpayStoreEngineCommand : NSObject
{
    int _callbackId; // +0x8
    NSString * _op; // +0x10
    NSString * _appId; // +0x18
    NSString * _action; // +0x20
    NSString * _paramsJSON; // +0x28
    unsigned long long _pageId; // +0x30
    NSString * _type; // +0x38
    NSString * _resultJSON; // +0x40
}
- (id)op;
- (void)setOp:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)paramsJSON;
- (void)setParamsJSON:(id)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (int)callbackId;
- (void)setCallbackId:(int)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)resultJSON;
- (void)setResultJSON:(id)arg1;
- (void).cxx_destruct;
@end
