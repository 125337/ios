@interface QGPCommandFactory : NSObject
+ (id)createCommandWithJson:(id)arg1 error:(id *)arg2;
+ (void)withoutReturnInvocateTarget:(id)arg1 Selector:(SEL)arg2 command:(id)arg3 error:(id *)arg4;
+ (id)hasReturnInvocateTarget:(id)arg1 Selector:(SEL)arg2 command:(id)arg3 error:(id *)arg4;
+ (id)forwardCommand:(id)arg1 command:(id)arg2;
@end

