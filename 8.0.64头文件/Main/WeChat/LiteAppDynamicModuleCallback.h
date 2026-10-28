@interface LiteAppDynamicModuleCallback : NSObject
{
    BOOL _isFromView; // +0x8
    unsigned int _appUuid; // +0xc
    unsigned int _localId; // +0x10
    NSString * _appId; // +0x18
    unsigned long long _pageId; // +0x20
    long long _callbackId; // +0x28
}
- (id)initWithParam:(unsigned int)arg1 appId:(id)arg2 pageId:(unsigned long long)arg3 callbackId:(long long)arg4 localId:(unsigned int)arg5 isFromView:(BOOL)arg6;
- (void)callback:(id)arg1 keepAlive:(BOOL)arg2;
- (void)callbackError:(id)arg1 keepAlive:(BOOL)arg2;
- (void)callbackImpl:(id)arg1 keepAlive:(BOOL)arg2 error:(BOOL)arg3;
- (unsigned int)getAppUuId;
- (id)getAppId;
- (unsigned long long)getPageId;
- (long long)getCallbackId;
- (unsigned int)getLocalId;
- (BOOL)isFromView;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (long long)callbackId;
- (void)setCallbackId:(long long)arg1;
- (void)setIsFromView:(BOOL)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
