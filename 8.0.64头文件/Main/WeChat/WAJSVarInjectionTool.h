@interface WAJSVarInjectionTool : NSObject
{
    NSMutableArray * _configArr; // +0x8
    NSString * _name; // +0x10
    NSString * _baseObjJsonStr; // +0x18
}
- (id)init;
- (id)initWithName:(id)arg1;
- (void)setBaseObjWithDict:(id)arg1;
- (void)setBaseObjWithJson:(id)arg1;
- (void)addVar:(id)arg1 withNumber:(id)arg2;
- (void)addVar:(id)arg1 withBool:(BOOL)arg2;
- (void)addVar:(id)arg1 withString:(id)arg2;
- (void)addVar:(id)arg1 withDict:(id)arg2;
- (void)addVar:(id)arg1 withJson:(id)arg2;
- (void)addVar:(id)arg1 withObject:(id)arg2;
- (id)getJSString;
- (id)name;
- (void)setName:(id)arg1;
- (id)baseObjJsonStr;
- (void)setBaseObjJsonStr:(id)arg1;
- (void).cxx_destruct;
@end
