@interface WASemver : MMObject <_TtP9WeAppCore14SemverProtocol_>
{
    BOOL _isValid; // +0x8
    NSString * _originalStr; // +0x10
    NSNumber * _major; // +0x18
    NSNumber * _minor; // +0x20
    NSNumber * _patch; // +0x28
    NSArray * _arrVersion; // +0x30
}
- (id)initWithVersionStr:(id)arg1;
- (void)parse:(id)arg1;
- (BOOL)checkIsValid;
- (BOOL)isSatisfiedBy:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isLessThan:(id)arg1;
- (BOOL)isGreaterThan:(id)arg1;
- (id)getExtrapolateVersion;
- (id)originalStr;
- (BOOL)isValid;
- (id)major;
- (void)setMajor:(id)arg1;
- (id)minor;
- (void)setMinor:(id)arg1;
- (id)patch;
- (void)setPatch:(id)arg1;
- (id)arrVersion;
- (void)setArrVersion:(id)arg1;
- (void).cxx_destruct;
@end
