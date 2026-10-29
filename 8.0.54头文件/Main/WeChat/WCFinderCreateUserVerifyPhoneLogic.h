@interface WCFinderCreateUserVerifyPhoneLogic : NSObject <VerifyPhoneDelegate>
{
    AnyPromise * _userPreparePromise; // +0x8
    WCAccountBindPhoneControlLogic * _bindPhoneLogic; // +0x10
}
- (id)initWithUserPrepare:(id)arg1;
- (void)setUserPrepare:(id)arg1;
- (id)userPrepare;
- (void)startRequestPrepareResponse;
- (void)verifyBindPhoneFromVC:(id)arg1;
- (id)userPreparePromise;
- (void)setUserPreparePromise:(id)arg1;
- (id)bindPhoneLogic;
- (void)setBindPhoneLogic:(id)arg1;
- (void).cxx_destruct;
@end

