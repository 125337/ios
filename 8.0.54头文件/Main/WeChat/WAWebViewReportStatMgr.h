@interface WAWebViewReportStatMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_outActionTimestampDict; // +0x8
    NSMutableArray * m_mutiSelectMsgList; // +0x10
    WAReportOuterMenuActionItem * m_mutiSelectBaseItem; // +0x18
    WaReportMessageVideoActionItem * _waMessageVideoReport; // +0x20
    NSMutableDictionary * m_menuActionTimestampDict; // +0x28
    NSMutableDictionary * m_apiActionDict; // +0x30
    BOOL _isOpenDebugState; // +0x38
}
- (void)registOutMenuAction:(id)arg1;
- (id)outActionItemFromMgr:(unsigned long long)arg1;
- (void)registOutMenuActionOnMutiSelectMsgArray:(id)arg1;
- (void)reportOutMenuActionOnMutiSelectMsgResult:(unsigned long long)arg1 contacts:(id)arg2;
- (void)registWaMessageVideoShareAction:(id)arg1;
- (id)waMessageVideoShareAction;
- (id)init;
- (void)registWebMenuAction:(unsigned long long)arg1;
- (id)menuActionItemFromMgr:(unsigned long long)arg1;
- (BOOL)needReportJSApiAction:(id)arg1;
- (BOOL)hasJSApiEventAction:(unsigned int)arg1 appId:(id)arg2;
- (void)registerJSApiAction:(id)arg1 callid:(unsigned int)arg2 appId:(id)arg3;
- (BOOL)getJSApiEventAction:(unsigned int)arg1 withActionItem:(id)arg2 appId:(id)arg3 needRemoveEventAction:(BOOL)arg4;
- (id)m_mutiSelectBaseItem;
- (void)setM_mutiSelectBaseItem:(id)arg1;
- (BOOL)isOpenDebugState;
- (void)setIsOpenDebugState:(BOOL)arg1;
- (void).cxx_destruct;
@end

