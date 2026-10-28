@interface LiteAppStore : NSObject
{
    set<std::pair<unsigned long, unsigned int>, std::less<std::pair<unsigned long, unsigned int>>, std::allocator<std::pair<unsigned long, unsigned int>>> _dispatchInfo; // +0x8
    NSMutableDictionary * _data; // +0x20
    unsigned int _appUuid; // +0x28
    NSString * _appId; // +0x30
    id /* block */ _onDispatch; // +0x38
}
+ (id)ObjToJsonString:(id)arg1;
+ (id)JsonStringToObj:(id)arg1;
+ (id)JSONValue:(id)arg1;
- (id)init;
- (void)SendResult:(unsigned long long)arg1 callbackId:(unsigned int)arg2 json:(id)arg3;
- (void)SendResult:(unsigned long long)arg1 callbackId:(unsigned int)arg2 obj:(id)arg3;
- (void)SendError:(unsigned long long)arg1 callbackId:(unsigned int)arg2 message:(id)arg3;
- (void)SetData:(id)arg1;
- (BOOL)OnDispatch:(id)arg1 instanceId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (id)OnSyncCall:(id)arg1 type:(id)arg2 target:(id)arg3;
- (void)ForceUpdateData;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id /* block */)onDispatch;
- (void)setOnDispatch:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
