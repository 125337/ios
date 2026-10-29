@interface KSCrashDoctor : NSObject
+ (id)doctor;
- (id)recrashReport:(id)arg1;
- (id)systemReport:(id)arg1;
- (id)crashReport:(id)arg1;
- (id)infoReport:(id)arg1;
- (id)errorReport:(id)arg1;
- (int)cpuFamily:(id)arg1;
- (id)registerNameForFamily:(int)arg1 paramIndex:(int)arg2;
- (id)mainExecutableNameForReport:(id)arg1;
- (id)crashedThreadReport:(id)arg1;
- (id)backtraceFromThreadReport:(id)arg1;
- (id)basicRegistersFromThreadReport:(id)arg1;
- (id)lastInAppStackEntry:(id)arg1;
- (id)lastStackEntry:(id)arg1;
- (BOOL)isInvalidAddress:(id)arg1;
- (BOOL)isMathError:(id)arg1;
- (BOOL)isMemoryCorruption:(id)arg1;
- (id)lastFunctionCall:(id)arg1;
- (id)zombieCall:(id)arg1;
- (BOOL)isStackOverflow:(id)arg1;
- (BOOL)isDeadlock:(id)arg1;
- (id)appendOriginatingCall:(id)arg1 callName:(id)arg2;
- (id)diagnoseCrash:(id)arg1;
@end

