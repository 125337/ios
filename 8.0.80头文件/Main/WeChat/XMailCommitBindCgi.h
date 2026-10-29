@interface XMailCommitBindCgi : XMailBaseCgi
{
    XMailSecondPasswordInputViewController * m_secPwdInputVC; // +0x8
    MMUIViewController * _rootViewController; // +0x10
    id <XMailCommitBindCgiDelegate> _delegate; // +0x18
    NSString * _secPwdKey; // +0x20
    CommitBindXmailRequest * _commitBindRequest; // +0x28
}
- (id)init;
- (void)prepareBindMailFromBindedQQ;
- (void)prepareBindMailFromMailAddr:(id)arg1 ticket:(id)arg2;
- (BOOL)startBindWithSecPwd:(id)arg1;
- (BOOL)startBindMailFromWXMailWithMailAddr:(id)arg1;
- (BOOL)openSecPwdInputViewController;
- (id)currentViewController;
- (BOOL)internalStartBindMailWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)secPwdKey;
- (void)setSecPwdKey:(id)arg1;
- (id)commitBindRequest;
- (void)setCommitBindRequest:(id)arg1;
- (void).cxx_destruct;
@end
