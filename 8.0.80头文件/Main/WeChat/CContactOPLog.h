@interface CContactOPLog : NSObject
{
    NSMutableDictionary * m_dicSkipContacts; // +0x8
    BOOL m_isHadReloadSkipContact; // +0x10
    id <CContactOPLogDelegate> _m_delegate; // +0x18
}
+ (id)getModifyContactData:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3;
+ (unsigned int)start_ModifyContact:(id)arg1;
+ (unsigned int)start_DeleteContact:(id)arg1 isRetainChatHistory:(BOOL)arg2;
+ (unsigned int)start_ModifySocialBlackList:(id)arg1 modType:(long long)arg2;
+ (void)start_ModifyContactUserName:(id)arg1 remark:(id)arg2 isChangeRemark:(BOOL)arg3 arrPhone:(id)arg4 isChangePhone:(BOOL)arg5 contactDesc:(id)arg6 isChangecontactDesc:(BOOL)arg7 callbackBlock:(id /* block */)arg8;
+ (void)handelStartModifyContactUserName:(id)arg1 arrMultipleOplogCmdItem:(id)arg2 isSuccess:(BOOL)arg3 oplogRet:(id)arg4 ret:(int)arg5 callbackBlock:(id /* block */)arg6;
- (id)init;
- (void)add_SkipContact:(id)arg1;
- (BOOL)isSkipContact:(id)arg1;
- (BOOL)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3 sync:(BOOL)arg4;
- (BOOL)add_ModifyContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 delScene:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)add_DeleteChatContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_DeleteContact:(id)arg1 isRetainChatHistory:(BOOL)arg2 delScene:(unsigned int)arg3 sync:(BOOL)arg4;
- (BOOL)add_ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(BOOL)arg3;
- (BOOL)add_ModifyUnfoldSns:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 withDescription:(id)arg2 NeedSync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 withPhone:(id)arg2 NeedSync:(BOOL)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
