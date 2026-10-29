@interface TingObjcInPageStateManagerCpp : UnitRCObjcBaseProxyClass <TingObjcInPageStateManager>
{
    recursive_mutex _fieldMutex; // +0x8
    vector<bool, std::allocator<bool>> _fieldHasCache; // +0x48
    BOOL _inTingPage; // +0x60
}
+ (id)sharedInstance;
- (id)init;
- (void)notifyFieldUpdated:(int)arg1;
- (BOOL)inTingPage;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (BOOL)getInTingPage;
- (void)setInTingPage:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
