@interface WCModuleCenter : NSObject
{
    WCAppContext * _context; // +0x8
    NSMutableArray * _moduleClasseList; // +0x10
    NSMutableDictionary * _modulesMap; // +0x18
    NSMutableArray * _moduleList; // +0x20
}
+ (id)center;
- (id)init;
- (void)registerModule:(Class)arg1;
- (void)moduleInit;
- (void)p_initModule:(Class)arg1;
- (void)registerModuleAndInit:(Class)arg1;
- (void)moduleLoadWithCompleteAction:(id /* block */)arg1;
- (void)p_loadModule:(Class)arg1 withCompleteAction:(id /* block */)arg2;
- (id)getModuleForClass:(Class)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)moduleClasseList;
- (id)modulesMap;
- (id)moduleList;
- (void).cxx_destruct;
@end
