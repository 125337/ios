@interface MMFinderLiveAgreementLogic : NSObject
{
    BOOL _isViewingAgreement; // +0x8
    MMLiveTaskId * _taskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)checkLiveAgreement;
- (id)currentAgreementInfo;
- (BOOL)isLivePolicyCheckedElsewhere;
- (id)liveTask;
- (void)updateLiveAgreementCache;
- (id)getCachedLiveAgreement;
- (void)mockAgreementInfoIfNeeded;
- (id)taskId;
- (BOOL)isViewingAgreement;
- (void)setIsViewingAgreement:(BOOL)arg1;
- (void).cxx_destruct;
@end
