@interface EcsCoreEcsOpenContext_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsOpenContext_Ur>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    id <EcsCoreEcsOpenContextBaseInfo_Ur> _baseInfo; // +0x60
    EcsOpenContextData * _data; // +0x68
    BOOL _callbackAsync; // +0x70
    id /* block */ _eventAction; // +0x78
}
+ (id)create:(int)arg1;
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (id)baseInfo;
- (id)data;
- (BOOL)callbackAsync;
- (id /* block */)eventAction;
- (id)getBaseInfo;
- (void)setBaseInfo:(id)arg1;
- (id)getData;
- (void)setData:(id)arg1;
- (BOOL)getCallbackAsync;
- (void)setCallbackAsync:(BOOL)arg1;
- (id /* block */)getEventAction;
- (void)setEventAction:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
