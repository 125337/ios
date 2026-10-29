@interface WAJSVarInjectionTool : NSObject
{
    NSMutableArray * _configArr; // +0x8
    BOOL _useAssign; // +0x10
    NSString * _name; // +0x18
    NSString * _baseObjJsonStr; // +0x20
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
- (void)_setStatement:(id)arg1 forVar:(id)arg2;
- (void)setVar:(id)arg1 withNumber:(id)arg2;
- (void)setVar:(id)arg1 withBool:(BOOL)arg2;
- (void)setVar:(id)arg1 withString:(id)arg2;
- (void)setVar:(id)arg1 withDict:(id)arg2;
- (void)setVar:(id)arg1 withJson:(id)arg2;
- (id)getJSString;
- (id)name;
- (void)setName:(id)arg1;
- (id)baseObjJsonStr;
- (void)setBaseObjJsonStr:(id)arg1;
- (BOOL)useAssign;
- (void)setUseAssign:(BOOL)arg1;
- (void).cxx_destruct;
@end
