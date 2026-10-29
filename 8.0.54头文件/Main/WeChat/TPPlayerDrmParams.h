@interface TPPlayerDrmParams : NSObject
{
    long long _drmAbility; // +0x8
    long long _drmType; // +0x10
    long long _drmSecureLevel; // +0x18
    long long _drmPrepareStartTimeMs; // +0x20
    long long _drmPrepareEndTimeMs; // +0x28
    long long _drmSupportSecureDecoder; // +0x30
    long long _drmSupportSecureDecrypt; // +0x38
    NSString * _drmComponentName; // +0x40
    long long _drmOpenSessionStartTimeMs; // +0x48
    long long _drmOpenSessionEndTimeMs; // +0x50
    long long _drmGetProvisionReqStartTimeMs; // +0x58
    long long _drmGetProvisionReqEndTimeMs; // +0x60
    long long _drmSendProvisionReqTimeMs; // +0x68
    long long _drmRecvProvisionRespTimeMs; // +0x70
    long long _drmProvideProvisionRespStartTimeMs; // +0x78
    long long _drmProvideProvisionRespEndTimeMs; // +0x80
    long long _drmGetKeyReqStartTimeMs; // +0x88
    long long _drmGetKeyReqEndTimeMs; // +0x90
    long long _drmSendKeyReqTimeMs; // +0x98
    long long _drmRecvKeyRespTimeMs; // +0xa0
    long long _drmProvideKeyRespStartTimeMs; // +0xa8
    long long _drmProvideKeyRespEndTimeMs; // +0xb0
    long long _drmCertificateStartTimeMs; // +0xb8
    long long _drmCertificateEndTimeMs; // +0xc0
    long long _drmLicenseStartTimeMs; // +0xc8
    long long _drmLicenseEndTimeMs; // +0xd0
}
- (id)init;
- (long long)drmAbility;
- (void)setDrmAbility:(long long)arg1;
- (long long)drmType;
- (void)setDrmType:(long long)arg1;
- (long long)drmSecureLevel;
- (void)setDrmSecureLevel:(long long)arg1;
- (long long)drmPrepareStartTimeMs;
- (void)setDrmPrepareStartTimeMs:(long long)arg1;
- (long long)drmPrepareEndTimeMs;
- (void)setDrmPrepareEndTimeMs:(long long)arg1;
- (long long)drmSupportSecureDecoder;
- (void)setDrmSupportSecureDecoder:(long long)arg1;
- (long long)drmSupportSecureDecrypt;
- (void)setDrmSupportSecureDecrypt:(long long)arg1;
- (id)drmComponentName;
- (void)setDrmComponentName:(id)arg1;
- (long long)drmOpenSessionStartTimeMs;
- (void)setDrmOpenSessionStartTimeMs:(long long)arg1;
- (long long)drmOpenSessionEndTimeMs;
- (void)setDrmOpenSessionEndTimeMs:(long long)arg1;
- (long long)drmGetProvisionReqStartTimeMs;
- (void)setDrmGetProvisionReqStartTimeMs:(long long)arg1;
- (long long)drmGetProvisionReqEndTimeMs;
- (void)setDrmGetProvisionReqEndTimeMs:(long long)arg1;
- (long long)drmSendProvisionReqTimeMs;
- (void)setDrmSendProvisionReqTimeMs:(long long)arg1;
- (long long)drmRecvProvisionRespTimeMs;
- (void)setDrmRecvProvisionRespTimeMs:(long long)arg1;
- (long long)drmProvideProvisionRespStartTimeMs;
- (void)setDrmProvideProvisionRespStartTimeMs:(long long)arg1;
- (long long)drmProvideProvisionRespEndTimeMs;
- (void)setDrmProvideProvisionRespEndTimeMs:(long long)arg1;
- (long long)drmGetKeyReqStartTimeMs;
- (void)setDrmGetKeyReqStartTimeMs:(long long)arg1;
- (long long)drmGetKeyReqEndTimeMs;
- (void)setDrmGetKeyReqEndTimeMs:(long long)arg1;
- (long long)drmSendKeyReqTimeMs;
- (void)setDrmSendKeyReqTimeMs:(long long)arg1;
- (long long)drmRecvKeyRespTimeMs;
- (void)setDrmRecvKeyRespTimeMs:(long long)arg1;
- (long long)drmProvideKeyRespStartTimeMs;
- (void)setDrmProvideKeyRespStartTimeMs:(long long)arg1;
- (long long)drmProvideKeyRespEndTimeMs;
- (void)setDrmProvideKeyRespEndTimeMs:(long long)arg1;
- (long long)drmCertificateStartTimeMs;
- (void)setDrmCertificateStartTimeMs:(long long)arg1;
- (long long)drmCertificateEndTimeMs;
- (void)setDrmCertificateEndTimeMs:(long long)arg1;
- (long long)drmLicenseStartTimeMs;
- (void)setDrmLicenseStartTimeMs:(long long)arg1;
- (long long)drmLicenseEndTimeMs;
- (void)setDrmLicenseEndTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end

