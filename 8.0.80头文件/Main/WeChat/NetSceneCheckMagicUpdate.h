@interface NetSceneCheckMagicUpdate : MMObject <PBMessageObserverDelegate>
{
    id /* block */ _completionHandler; // +0x8
    NSString * _mPackageId; // +0x10
}
- (void)dealloc;
- (void)checkMagicPkgUpdateWithCondition:(id)arg1 base:(id)arg2 patch:(id)arg3 check:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getDefaultConditions;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)mPackageId;
- (void)setMPackageId:(id)arg1;
- (void).cxx_destruct;
@end
