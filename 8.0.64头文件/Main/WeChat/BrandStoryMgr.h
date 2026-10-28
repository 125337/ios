@interface BrandStoryMgr : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (id)init;
- (BOOL)modifyBrandFlag:(unsigned int)arg1 forUser:(id)arg2;
- (BOOL)modifyBrandFlag:(unsigned int)arg1 forUser:(id)arg2 isSync:(BOOL)arg3;
@end
