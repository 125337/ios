@interface NewLifeOpenCreateFinderContactHandler : NewLifeActionHandler <WCFinderCreateUserViewControllerDelegate>
{
    WCFinderContact * _contact; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)onSuccess;
- (void)onFaiulre;
- (void)createUserFinished:(id)arg1;
- (void)cancelCreateUser;
- (void)createUserFailed;
- (void)createUserClosed;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

