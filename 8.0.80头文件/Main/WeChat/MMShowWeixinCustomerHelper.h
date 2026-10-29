@interface MMShowWeixinCustomerHelper : NSObject <PBMessageObserverDelegate>
{
    ContactInfoViewController * m_contactInfoView; // +0x8
    id /* block */ m_autoFollowCompletion; // +0x10
    MMLoadingView * _loadingView; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)showLoadingInView:(id)arg1 text:(id)arg2;
- (void)hideLoading;
- (BOOL)willGoToWeixinCustomerHelper:(id)arg1;
- (id)createCustomerHelperContact;
- (id)markCustomerHelperContactFollowedWithUserName:(id)arg1;
- (void)navigateToWeixinCustomerHelper:(id)arg1 customerHelperScene:(unsigned long long)arg2;
- (void)navigateToWeixinCustomerHelperInPluginMode:(id)arg1 customerHelperScene:(unsigned long long)arg2;
- (void)autoFollowCustomerHelper:(id /* block */)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)goToNewMessage:(id)arg1 customerHelperScene:(unsigned long long)arg2;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
