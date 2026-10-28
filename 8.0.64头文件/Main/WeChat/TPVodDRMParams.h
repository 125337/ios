@interface TPVodDRMParams : NSObject
{
    long long _drmType; // +0x8
    long long _secureLevel; // +0x10
    unsigned long long _prepareStimeMs; // +0x18
    unsigned long long _prepareEtimeMs; // +0x20
    unsigned long long _certificateStimeMs; // +0x28
    unsigned long long _certificateEtimeMs; // +0x30
    unsigned long long _licenseStimeMs; // +0x38
    unsigned long long _licenseEtimeMs; // +0x40
}
- (id)init;
- (long long)drmType;
- (void)setDrmType:(long long)arg1;
- (long long)secureLevel;
- (void)setSecureLevel:(long long)arg1;
- (unsigned long long)prepareStimeMs;
- (void)setPrepareStimeMs:(unsigned long long)arg1;
- (unsigned long long)prepareEtimeMs;
- (void)setPrepareEtimeMs:(unsigned long long)arg1;
- (unsigned long long)certificateStimeMs;
- (void)setCertificateStimeMs:(unsigned long long)arg1;
- (unsigned long long)certificateEtimeMs;
- (void)setCertificateEtimeMs:(unsigned long long)arg1;
- (unsigned long long)licenseStimeMs;
- (void)setLicenseStimeMs:(unsigned long long)arg1;
- (unsigned long long)licenseEtimeMs;
- (void)setLicenseEtimeMs:(unsigned long long)arg1;
@end
