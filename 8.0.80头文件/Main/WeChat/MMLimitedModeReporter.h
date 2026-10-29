@interface MMLimitedModeReporter : NSObject
+ (void)reportUnfocusInfo:(id)arg1;
+ (void)reportToastInfo:(id)arg1;
+ (void)reportAction:(long long)arg1;
+ (void)reportAction:(long long)arg1 scene:(long long)arg2;
+ (void)reportAction:(long long)arg1 bussinessName:(id)arg2 beforeValue:(id)arg3 afterValue:(id)arg4 allbussinessSettings:(id)arg5 status:(unsigned int)arg6;
@end
