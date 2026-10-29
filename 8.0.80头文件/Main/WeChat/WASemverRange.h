@interface WASemverRange : NSObject
{
    WASemver * _semver; // +0x8
    unsigned long long _op; // +0x10
}
- (id)initWithVersion:(id)arg1 op:(unsigned long long)arg2;
- (id)initWithVersionStr:(id)arg1 op:(unsigned long long)arg2;
- (BOOL)isSatisfiedBy:(id)arg1;
- (id)semver;
- (void)setSemver:(id)arg1;
- (unsigned long long)op;
- (void)setOp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
