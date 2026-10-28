@interface _TtC9WeAppCore6Semver : NSObject <_TtP9WeAppCore14SemverProtocol_>
{
     originalStr; // +0x8
     isValid; // +0x18
     arrVersion; // +0x20
     $__lazy_storage_$_major; // +0x28
     $__lazy_storage_$_minor; // +0x30
     $__lazy_storage_$_patch; // +0x38
}
- (id)originalStr;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)initWithVersionStr:(id)arg1;
- (BOOL)isSatisfiedBy:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
