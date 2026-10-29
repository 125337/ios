@interface EcsCoreEcsJsaContext_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsJsaContext_Ur>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    int _jsEnv; // +0x60
    long long _taskId; // +0x68
    EcsJsaContextData * _data; // +0x70
    id <EcsCoreEcsJsaBasePlatformInfo_Ur> _nativeInfo; // +0x78
}
+ (id)create:(int)arg1;
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (int)jsEnv;
- (long long)taskId;
- (id)data;
- (id)nativeInfo;
- (int)getJsEnv;
- (void)setJsEnv:(int)arg1;
- (long long)getTaskId;
- (void)setTaskId:(long long)arg1;
- (id)getData;
- (void)setData:(id)arg1;
- (id)getNativeInfo;
- (void)setNativeInfo:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
