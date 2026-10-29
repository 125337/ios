@interface WCFinderPostVerifyAssist : NSObject <WCFinderUserPageFetchExt>
{
    WCFinderContact * _contact; // +0x8
    AnyPromise * _userPrepare; // +0x10
    AnyPromise * _finderPrepare; // +0x18
    id /* block */ _fillFinderPrepare; // +0x20
}
+ (id)assistWithContact:(id)arg1 userPrepareResponse:(id)arg2;
- (void)fetchOrWatiPrepare:(id /* block */)arg1;
- (id)userPrepareResponse;
- (void)ensurePrepare:(id /* block */)arg1;
- (void)finishPrepareResponseFailWithErrorCode:(long long)arg1 resolver:(id /* block */)arg2;
- (void)dealloc;
- (void)startRequestPrepareResponse;
- (void)tryContinuePostFromDelegateVC:(id)arg1;
- (void)showVerityPicker;
- (void)showRealNameVerityPicker;
- (void)startRealNameVerity;
- (void)startEnterpriseVerity;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (void)showForeignRealNameVerifyTips:(id)arg1 realNameInfo:(id)arg2;
- (void)showForeignRealNameH5Verify:(id)arg1 realNameInfo:(id)arg2;
- (void)_afterRealNameVerity:(id)arg1;
- (void)onFinderUserPageContactInfoUpdate:(id)arg1;
- (BOOL)isRealName;
- (BOOL)isContactLogout;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)finderPrepare;
- (void)setFinderPrepare:(id)arg1;
- (id /* block */)fillFinderPrepare;
- (void)setFillFinderPrepare:(id /* block */)arg1;
- (void).cxx_destruct;
@end
