@interface CommonHybridRouterParamsCpp : UnitRCObjcBaseProxyClass <CommonHybridRouterParams>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    HybridRouterOpenParams * _openParams; // +0x60
}
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (id)openParams;
- (id)getPlatformKey;
- (id)getPlatformArgs;
- (id)getOpenParams;
- (void)setOpenParams:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
