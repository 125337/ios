@interface LiteAppDynamicModuleConfig : NSObject
{
    NSString * _moduleName; // +0x8
    NSString * _className; // +0x10
    NSMutableDictionary * _syncMethods; // +0x18
    NSMutableDictionary * _asyncMethods; // +0x20
}
- (id)initWithModuleName:(id)arg1 forClass:(id)arg2;
- (void)registerMethods;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id)className;
- (void)setClassName:(id)arg1;
- (id)syncMethods;
- (void)setSyncMethods:(id)arg1;
- (id)asyncMethods;
- (void)setAsyncMethods:(id)arg1;
- (void).cxx_destruct;
@end

