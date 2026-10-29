@interface KSCrashDoctorFunctionCall : NSObject
{
    NSString * _name; // +0x8
    NSArray * _params; // +0x10
}
- (id)descriptionForObjCCall;
- (id)descriptionWithParamCount:(int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

