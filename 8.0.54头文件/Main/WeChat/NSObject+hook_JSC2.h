@interface NSObject (hook_JSC2)
+ (id)jsc2_valueWithObject:(id)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithBool:(BOOL)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithDouble:(double)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithInt32:(int)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithUInt32:(unsigned int)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithNewObjectInContext:(id)arg1;
+ (id)jsc2_valueWithNewArrayInContext:(id)arg1;
+ (id)jsc2_valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2 inContext:(id)arg3;
+ (id)jsc2_valueWithNewErrorFromMessage:(id)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithNewPromiseInContext:(id)arg1 fromExecutor:(id /* block */)arg2;
+ (id)jsc2_valueWithNewPromiseResolvedWithResult:(id)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithNewPromiseRejectedWithReason:(id)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithNewSymbolFromDescription:(id)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithNullInContext:(id)arg1;
+ (id)jsc2_valueWithUndefinedInContext:(id)arg1;
+ (id)jsc2_valueWithPoint:(CGPoint)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithRange:(_NSRange)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithRect:(CGRect)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithSize:(CGSize)arg1 inContext:(id)arg2;
+ (id)jsc2_valueWithJSValueRef:(OpaqueJSValue *)arg1 inContext:(id)arg2;
@end

