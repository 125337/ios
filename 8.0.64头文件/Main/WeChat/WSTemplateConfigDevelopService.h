@interface WSTemplateConfigDevelopService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_matchPatternDic; // +0x8
    NSMutableDictionary * m_actionSheetButtonTitleDic; // +0x10
    NSMapTable * m_templateMgrMapTable; // +0x18
}
- (id)init;
- (void)registerDevelopWithResourceType:(unsigned int)arg1 andMatchPattern:(id)arg2 andActionSheetButtonTitle:(id)arg3 andTemplateMgr:(id)arg4;
- (void)registerDevelopWithTemplateMgr:(id)arg1;
- (void)registerDevelopWithResourceType:(unsigned int)arg1 resourceSubType:(unsigned int)arg2 andMatchPattern:(id)arg3 andActionSheetButtonTitle:(id)arg4 andTemplateMgr:(id)arg5;
- (unsigned int)getMatchPatternResourceTypeByFileTitle:(id)arg1;
- (unsigned int)getMatchPatternResourceSubTypeByFileTitle:(id)arg1;
- (id)getActionSheetButtonTitleWithResourceType:(unsigned int)arg1 resourceSubType:(unsigned int)arg2;
- (id)getTemplateMgrWithResourceType:(unsigned int)arg1 resourceSubType:(unsigned int)arg2;
- (void).cxx_destruct;
@end
