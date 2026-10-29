@interface OpenIMSucceedContactLogic : MMObject <MMTipsViewControllerDelegate, OpenIMContactVerifyLogicDelegate, PBMessageObserverDelegate, IMsgExt>
{
    CMessageWrap * m_succeedContactMessageWrap; // +0x8
    NSMutableDictionary * m_allSucceedContactDic; // +0x10
    OpenIMContactVerifyLogic * m_openIMVerifyLogic; // +0x18
    MMTipsViewController * m_succeedContactTipsView; // +0x20
    CBaseContact * m_contact; // +0x28
    NSString * _reportSessionId; // +0x30
    id <OpenIMSucceedContactLogicLogicDelegate> m_delegate; // +0x38
}
- (id)init;
- (void)startSucceedContactOnce:(id)arg1 contact:(id)arg2;
- (void)startSucceedContact:(id)arg1 contact:(id)arg2;
- (void)p_startSucceedContact:(id)arg1 contact:(id)arg2;
- (id)getSucceedContactInfoDic;
- (id)getSucceedContactInfoDicWithUsrName:(id)arg1 andMessageWrap:(id)arg2;
- (void)showSucceedContactWindow;
- (void)touchImageButton:(id)arg1;
- (id)parseSucceedContactXMLContent:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)startNotSucceedContact:(id)arg1 contact:(id)arg2;
- (void)showNotSucceedContactAlertView;
- (BOOL)isNewSucceedContact;
- (BOOL)isNewSucceedContactWithUsrName:(id)arg1 andMessageWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)NotAutoSucceedNetWorkWithAction:(int)arg1;
- (void)OnNotAutoSucceedResponse:(id)arg1;
- (id)getReportSessionId;
- (int)getReportUserStatus;
- (int)getReportSucceedStatus;
- (void)reportOpenIMReportWatchMessageRecordFromContact:(id)arg1 toContact:(id)arg2;
- (void)reportOpenIMNewSucceedWithActionCode:(unsigned int)arg1 andUsrName:(id)arg2 andMessageWrap:(id)arg3;
- (void)reportOpenIMNewSucceedWithActionCode:(unsigned int)arg1;
- (void)onOpenIMContactVerifyDone:(id)arg1 msgId:(unsigned long long)arg2;
- (void)onOpenIMContactVerifyFail:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
