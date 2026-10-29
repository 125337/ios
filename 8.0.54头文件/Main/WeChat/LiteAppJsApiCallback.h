@interface LiteAppJsApiCallback : NSObject
{
    BOOL _isFromView; // +0x8
    unsigned int _appUuid; // +0xc
    unsigned int _localId; // +0x10
    NSString * _appId; // +0x18
    unsigned long long _appPtr; // +0x20
    unsigned long long _pageId; // +0x28
    NSString * _apiName; // +0x30
    long long _callbackId; // +0x38
}
- (id)initWithParam:(id)arg1 appPtr:(unsigned long long)arg2 pageId:(unsigned long long)arg3 appUuid:(unsigned int)arg4 apiName:(id)arg5 callbackId:(long long)arg6 localId:(unsigned int)arg7 isFromView:(BOOL)arg8;
- (void)jsApiCallback:(const void *)arg1 keepAlive:(BOOL)arg2;
- (void)fail:(id)arg1 keepAlive:(BOOL)arg2;
- (void)succes:(id)arg1 keepAlive:(BOOL)arg2;
- (void)fail:(id)arg1;
- (void)succes:(id)arg1;
- (id)getAppId;
- (unsigned long long)getAppPtr;
- (unsigned long long)getPageId;
- (unsigned int)getAppUuid;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)appPtr;
- (void)setAppPtr:(unsigned long long)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)apiName;
- (void)setApiName:(id)arg1;
- (long long)callbackId;
- (void)setCallbackId:(long long)arg1;
- (BOOL)isFromView;
- (void)setIsFromView:(BOOL)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

