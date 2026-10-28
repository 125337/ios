@interface WAEJClassLoader : NSObject
{
    OpaqueJSClass * jsConstructorClass; // +0x8
    NSMutableDictionary * classCache; // +0x10
}
- (id)initWithScriptView:(id)arg1 name:(id)arg2;
- (void)addSubContext:(id)arg1 context:(OpaqueJSContext *)arg2 name:(id)arg3;
- (void)dealloc;
- (id)getJSClass:(id)arg1 isComponent:(BOOL)arg2;
- (id)loadJSClass:(id)arg1 isComponent:(BOOL)arg2;
- (OpaqueJSClass *)jsConstructorClass;
@end
