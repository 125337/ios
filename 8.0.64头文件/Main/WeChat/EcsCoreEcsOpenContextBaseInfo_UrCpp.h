@interface EcsCoreEcsOpenContextBaseInfo_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenContextBaseInfo_Ur>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    int _from; // +0x60
    NSString * _flutterEngineId; // +0x68
    long long _taskId; // +0x70
    id <EcsCoreEcsOpenContextBasePlatformInfo_Ur> _nativeInfo; // +0x78
    id <EcsCoreEcsOpenContextBasePlatformInfo_Ur> _flutterInfo; // +0x80
    id <EcsCoreEcsOpenContextBasePlatformInfo_Ur> _cppInfo; // +0x88
}
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (int)from;
- (id)flutterEngineId;
- (long long)taskId;
- (id)nativeInfo;
- (id)flutterInfo;
- (id)cppInfo;
- (int)getFrom;
- (void)setFrom:(int)arg1;
- (id)getFlutterEngineId;
- (void)setFlutterEngineId:(id)arg1;
- (long long)getTaskId;
- (void)setTaskId:(long long)arg1;
- (id)getNativeInfo;
- (void)setNativeInfo:(id)arg1;
- (id)getFlutterInfo;
- (void)setFlutterInfo:(id)arg1;
- (id)getCppInfo;
- (void)setCppInfo:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
