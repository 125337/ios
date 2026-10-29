@interface KSCrashDoctorParam : NSObject
{
    BOOL _isInstance; // +0x8
    NSString * _className; // +0x10
    NSString * _previousClassName; // +0x18
    unsigned long long _address; // +0x20
    NSString * _value; // +0x28
    NSString * _type; // +0x30
}
- (id)className;
- (void)setClassName:(id)arg1;
- (id)previousClassName;
- (void)setPreviousClassName:(id)arg1;
- (BOOL)isInstance;
- (void)setIsInstance:(BOOL)arg1;
- (unsigned long long)address;
- (void)setAddress:(unsigned long long)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (void).cxx_destruct;
@end

