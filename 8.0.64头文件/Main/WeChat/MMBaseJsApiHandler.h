@interface MMBaseJsApiHandler : NSObject <PBMessageObserverDelegate>
{
    id /* block */ _callbackBlock; // +0x8
    NSString * _systemInfoJsonStr; // +0x10
}
- (void)dealloc;
- (void)setupApiWithJSContext:(id)arg1 systemInfoJson:(id)arg2;
- (void)addApi_kvReport:(id)arg1;
- (void)addApi_idkeyReport:(id)arg1;
- (void)addApi_idkeyListReport:(id)arg1;
- (void)addApi_userAgent:(id)arg1;
- (void)addApi_getPlatform:(id)arg1;
- (void)addApi_reportCgi:(id)arg1;
- (void)addApi_getSystemInfo:(id)arg1;
- (void)onResponseBizCommReportCgi:(id)arg1;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id /* block */)callbackBlock;
- (void)setCallbackBlock:(id /* block */)arg1;
- (id)systemInfoJsonStr;
- (void)setSystemInfoJsonStr:(id)arg1;
- (void).cxx_destruct;
@end
