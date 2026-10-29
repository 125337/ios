@interface EcsShareToContactLogic_WAAppMsg : EcsShareToContactLogic_Base
{
    BOOL _shouldShowLoading; // +0x8
    EcsWAAppMessageModel * _model; // +0x10
}
+ (void)reportSeniorBuyerEnterChatroomEvent:(id)arg1 toContacts:(id)arg2 forwardSid:(id)arg3;
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (void)genMessage:(id /* block */)arg1;
- (void)convertFrontendJumpInfoIfNeededWithCompletion:(id /* block */)arg1;
- (void)setupFriendReceiveSnackBarTitleIfNeeded;
- (void)requestShareInfoIfNeededWithCompletion:(id /* block */)arg1;
- (void)startLoadingAfterDelay;
- (void)stopLoading;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)genMessageWrapFromModel:(id)arg1;
- (void)makeSureMessageWrapVaild;
- (void)finishWithMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)reportFrontendJumpInfoStatusIfNeeded;
- (void)reportJumpInfoIssueWithStatus:(id)arg1 jumpInfoJsonString:(id)arg2 cardType:(int)arg3 path:(id)arg4;
- (void)onShareSuccess:(BOOL)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (BOOL)shouldShowLoading;
- (void)setShouldShowLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
