@interface WAEJBindingCanvasPattern : WAEJBindingBase
{
    WAEJCanvasPattern * pattern; // +0x20
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 pattern:(id)arg3;
+ (id)patternFromJSValue:(OpaqueJSValue *)arg1;
+ (id)patternFromInstance:(unsigned long long)arg1;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get___type;
- (void)dealloc;
- (OpaqueJSValue *)_get_instance:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get___type:(OpaqueJSContext *)arg1;
@end
