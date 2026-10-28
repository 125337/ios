@interface CContactOPLog : NSObject
{
    NSMutableDictionary * m_dicSkipContacts; // +0x8
    BOOL m_isHadReloadSkipContact; // +0x10
    id <CContactOPLogDelegate> _m_delegate; // +0x18
}
+ (id)getModifyContactData:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3;
+ (unsigned int)start_ModifyContact:(id)arg1;
+ (unsigned int)start_ModifySocialBlackList:(id)arg1 modType:(long long)arg2;
- (id)init;
- (void)add_SkipContact:(id)arg1;
- (BOOL)isSkipContact:(id)arg1;
- (BOOL)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3 sync:(BOOL)arg4;
- (BOOL)add_ModifyContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 delScene:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)add_DeleteChatContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(BOOL)arg3;
- (BOOL)add_ModifyUnfoldSns:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 withDescription:(id)arg2 NeedSync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 withPhone:(id)arg2 NeedSync:(BOOL)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
