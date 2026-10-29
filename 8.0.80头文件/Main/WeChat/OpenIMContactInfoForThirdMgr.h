@interface OpenIMContactInfoForThirdMgr : MMUserService <ContactSearchLogicDelegate, MMServiceProtocol>
{
    ContactSearchLogic * m_contactSearchLogic; // +0x8
    OpenIMContactInfoForThirdReqFetchContext * m_reqContext; // +0x10
}
- (void)handleOpenIMContactForThirdWithUrl:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3 spamContext:(id)arg4 context:(id)arg5 onSuccess:(id /* block */)arg6 onFail:(id /* block */)arg7;
- (void)handleOpenIMContactForThirdWithDic:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3 spamContext:(id)arg4 context:(id)arg5 onSuccess:(id /* block */)arg6 onFail:(id /* block */)arg7;
- (void)onContactSearchLogicDoneForThird:(id)arg1 thirdFromScene:(unsigned int)arg2 spamWording:(id)arg3 extInfo:(id)arg4;
- (void)onContactSearchLogicFailForThird:(id)arg1 extInfo:(id)arg2;
- (void)reportShowOpenIMProfileForThirdLogWithAction:(unsigned int)arg1 allowResultType:(unsigned int)arg2 sourceScene:(unsigned int)arg3;
- (void).cxx_destruct;
@end
