@interface WAEJLoadedJSClass : NSObject
{
    OpaqueJSClass * jsClass; // +0x8
    NSDictionary * constantValues; // +0x10
}
- (id)initWithJSClass:(OpaqueJSClass *)arg1 constantValues:(id)arg2;
- (void)dealloc;
- (OpaqueJSClass *)jsClass;
- (id)constantValues;
@end
