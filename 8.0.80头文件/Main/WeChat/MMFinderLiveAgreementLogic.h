@interface MMFinderLiveAgreementLogic : NSObject
{
    BOOL _isViewingAgreement; // +0x8
    id <MMFinderLiveAgreementInfoProviding> _agreementInfoProvider; // +0x10
}
- (id)initWithAgreementInfoProvider:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)checkLiveAgreement;
- (id)currentAgreementInfo;
- (BOOL)isLivePolicyCheckedElsewhere;
- (void)updateLiveAgreementCache;
- (id)getCachedLiveAgreement;
- (BOOL)isViewingAgreement;
- (void)setIsViewingAgreement:(BOOL)arg1;
- (id)agreementInfoProvider;
- (void)setAgreementInfoProvider:(id)arg1;
- (void).cxx_destruct;
@end
