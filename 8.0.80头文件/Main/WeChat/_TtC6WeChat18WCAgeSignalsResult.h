@interface _TtC6WeChat18WCAgeSignalsResult : NSObject
{
    void * status; // +0x8
    NSNumber * ageLower; // +0x18
    NSNumber * ageUpper; // +0x20
    void * source; // +0x28
    void * errorCode; // +0x38
}
- (id)status;
- (id)ageLower;
- (id)ageUpper;
- (id)source;
- (id)errorCode;
- (id)initWithStatus:(id)arg1 ageLower:(id)arg2 ageUpper:(id)arg3 source:(id)arg4 errorCode:(id)arg5;
- (id)init;
- (void).cxx_destruct;
@end
