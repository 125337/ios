@interface QFoundationPrivacy : NSObject
{
    BOOL _toReplaceInlandDomain; // +0x8
    BOOL _isAgreed; // +0x9
    NSString * _identifier; // +0x10
    NSString * _appVersion; // +0x18
    NSString * _hardWare; // +0x20
    double _scale; // +0x28
    _opaque_pthread_rwlock_t _readWriteLock; // +0x30
}
+ (id)singleton;
- (void)setPrivacyAgreement:(BOOL)arg1;
- (BOOL)privacyAgreementStatus;
- (id)init;
- (id)getAppVersion;
- (id)getAppIdentifier;
- (id)getUUID;
- (id)getIDFV;
- (id)getHardware;
- (double)deviceScale;
- (void)setToReplaceInlandDomain:(BOOL)arg1;
- (BOOL)toReplaceInlandDomain;
- (void)dealloc;
- (BOOL)isAgreed;
- (void)setIsAgreed:(BOOL)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)hardWare;
- (void)setHardWare:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (_opaque_pthread_rwlock_t)readWriteLock;
- (void)setReadWriteLock:(_opaque_pthread_rwlock_t)arg1;
- (void).cxx_destruct;
@end

