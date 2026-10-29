@interface TXYHyInnerOverConfig : NSObject
{
    BOOL _isShowPrivacyAgreementDialog; // +0x8
    BOOL _openCheckRiskMode; // +0x9
    BOOL _iShowTipsPage; // +0xa
}
- (BOOL)isShowPrivacyAgreementDialog;
- (void)setIsShowPrivacyAgreementDialog:(BOOL)arg1;
- (BOOL)openCheckRiskMode;
- (void)setOpenCheckRiskMode:(BOOL)arg1;
- (BOOL)iShowTipsPage;
- (void)setIShowTipsPage:(BOOL)arg1;
@end
