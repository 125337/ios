@interface WAReportPhoneAuthActionItem : WAReportBaseItem
{
    BOOL _isBindPhone; // +0x8
    BOOL _bindSuccess; // +0x9
    unsigned long long _getPhoneNumberCount; // +0x10
    unsigned long long _clickConfirmCount; // +0x18
    unsigned long long _clickDenyCount; // +0x20
    unsigned long long _clickCancelCount; // +0x28
    unsigned long long _confirmBindedPhoneCount; // +0x30
    unsigned long long _confirmUnBindPhoneCount; // +0x38
    unsigned long long _clickInfoCount; // +0x40
    unsigned long long _clickUseOtherPhoneCount; // +0x48
    unsigned long long _clickManagePhoneCount; // +0x50
    unsigned long long _clickGetVerifyCodeCount; // +0x58
    unsigned long long _getVerifyCodeSuccessCount; // +0x60
    unsigned long long _getVerifyCodeFailedCount; // +0x68
    unsigned long long _clickAddPhoneDoneCount; // +0x70
    unsigned long long _addPhoneSuccessCount; // +0x78
    unsigned long long _addPhoneFailedCount; // +0x80
    unsigned long long _addPhoneAndSaveCount; // +0x88
    unsigned long long _addPhoneNotSaveCount; // +0x90
    unsigned long long _clickAddPhoneOnManagePageCount; // +0x98
    unsigned long long _deletePhoneCount; // +0xa0
    unsigned long long _deletePhoneSuccessCount; // +0xa8
    unsigned long long _deletePhoneFailedCount; // +0xb0
    unsigned long long _verifyCodeCount; // +0xb8
    unsigned long long _verifyCodeSuccessCount; // +0xc0
    unsigned long long _verifyCodeFailedCount; // +0xc8
    NSString * _phoneNumber; // +0xd0
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (BOOL)isBindPhone;
- (void)setIsBindPhone:(BOOL)arg1;
- (BOOL)bindSuccess;
- (void)setBindSuccess:(BOOL)arg1;
- (unsigned long long)getPhoneNumberCount;
- (void)setGetPhoneNumberCount:(unsigned long long)arg1;
- (unsigned long long)clickConfirmCount;
- (void)setClickConfirmCount:(unsigned long long)arg1;
- (unsigned long long)clickDenyCount;
- (void)setClickDenyCount:(unsigned long long)arg1;
- (unsigned long long)clickCancelCount;
- (void)setClickCancelCount:(unsigned long long)arg1;
- (unsigned long long)confirmBindedPhoneCount;
- (void)setConfirmBindedPhoneCount:(unsigned long long)arg1;
- (unsigned long long)confirmUnBindPhoneCount;
- (void)setConfirmUnBindPhoneCount:(unsigned long long)arg1;
- (unsigned long long)clickInfoCount;
- (void)setClickInfoCount:(unsigned long long)arg1;
- (unsigned long long)clickUseOtherPhoneCount;
- (void)setClickUseOtherPhoneCount:(unsigned long long)arg1;
- (unsigned long long)clickManagePhoneCount;
- (void)setClickManagePhoneCount:(unsigned long long)arg1;
- (unsigned long long)clickGetVerifyCodeCount;
- (void)setClickGetVerifyCodeCount:(unsigned long long)arg1;
- (unsigned long long)getVerifyCodeSuccessCount;
- (void)setGetVerifyCodeSuccessCount:(unsigned long long)arg1;
- (unsigned long long)getVerifyCodeFailedCount;
- (void)setGetVerifyCodeFailedCount:(unsigned long long)arg1;
- (unsigned long long)clickAddPhoneDoneCount;
- (void)setClickAddPhoneDoneCount:(unsigned long long)arg1;
- (unsigned long long)addPhoneSuccessCount;
- (void)setAddPhoneSuccessCount:(unsigned long long)arg1;
- (unsigned long long)addPhoneFailedCount;
- (void)setAddPhoneFailedCount:(unsigned long long)arg1;
- (unsigned long long)addPhoneAndSaveCount;
- (void)setAddPhoneAndSaveCount:(unsigned long long)arg1;
- (unsigned long long)addPhoneNotSaveCount;
- (void)setAddPhoneNotSaveCount:(unsigned long long)arg1;
- (unsigned long long)clickAddPhoneOnManagePageCount;
- (void)setClickAddPhoneOnManagePageCount:(unsigned long long)arg1;
- (unsigned long long)deletePhoneCount;
- (void)setDeletePhoneCount:(unsigned long long)arg1;
- (unsigned long long)deletePhoneSuccessCount;
- (void)setDeletePhoneSuccessCount:(unsigned long long)arg1;
- (unsigned long long)deletePhoneFailedCount;
- (void)setDeletePhoneFailedCount:(unsigned long long)arg1;
- (unsigned long long)verifyCodeCount;
- (void)setVerifyCodeCount:(unsigned long long)arg1;
- (unsigned long long)verifyCodeSuccessCount;
- (void)setVerifyCodeSuccessCount:(unsigned long long)arg1;
- (unsigned long long)verifyCodeFailedCount;
- (void)setVerifyCodeFailedCount:(unsigned long long)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (void).cxx_destruct;
@end
