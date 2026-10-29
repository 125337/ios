@interface BizIamProfileOpenRequestContext : NSObject
{
    BOOL _shouldDismissWeAppContainer; // +0x8
    unsigned long long _requestToken; // +0x10
    NSString * _username; // +0x18
    MMUIViewController * _hostController; // +0x20
    BrandProfileEnterInfo * _profileEnterInfo; // +0x28
}
- (unsigned long long)requestToken;
- (void)setRequestToken:(unsigned long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)hostController;
- (void)setHostController:(id)arg1;
- (id)profileEnterInfo;
- (void)setProfileEnterInfo:(id)arg1;
- (BOOL)shouldDismissWeAppContainer;
- (void)setShouldDismissWeAppContainer:(BOOL)arg1;
- (void).cxx_destruct;
@end
