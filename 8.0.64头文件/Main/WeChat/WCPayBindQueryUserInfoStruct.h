@interface WCPayBindQueryUserInfoStruct : NSObject
{
    NSArray * m_arrPayCardList; // +0x8
    NSArray * m_arrHistoryPayCardList; // +0x10
    WCPayUserInfo * m_oUserInfo; // +0x18
    NSArray * m_arrVirtualCardList; // +0x20
    NSArray * m_arrWXBorrowMoneyList; // +0x28
    WCPayBalanceInfo * m_oBalanceInfo; // +0x30
    WCPaySwitchInfo * m_oSwitchInfo; // +0x38
    WCPayNoticeInfo * m_oWCPayNoticeInfo; // +0x40
    WCPayLoanEntryInfo * m_oLoanEntryInfo; // +0x48
    WCPayBindCardInfo * m_oSelectedBindCardInfo; // +0x50
    NSString * m_nsNoAvalibleCardWording; // +0x58
    WCPayRealnameGuideInfo * realnameInfo; // +0x60
    int _bindqueryScene; // +0x68
    NSArray * m_arrBalaneNotice; // +0x70
    NSArray * m_arrFetchNotice; // +0x78
    WCPayFetchInfo * _m_oFetchInfo; // +0x80
    WCPayLQTInfo * _m_oLqtInfo; // +0x88
    WCPayBankPriority * _bank_priority; // +0x90
    WCPayBillEntryInfo * _billEntryInfo; // +0x98
    WCPayJumpRemindInfo * _jumpRemindInfo; // +0xa0
    WCPayDynamicActionEntry * _lqt_action_entry; // +0xa8
    WCPayBalanceChargeLQTInfo * _balanceLqtInfo; // +0xb0
    WCPayOfflinePayGuideBar * _offlinePayGuideBar; // +0xb8
    WCPayOfflinePayBlockLayer * _offlinePayBlockLayer; // +0xc0
    WCPayOfflinePayDisableBlockLayer * _offlinePayDisableBlockLayer; // +0xc8
    NSArray * _payManageLabelList; // +0xd0
    NSString * _complianceHalfPageData; // +0xd8
}
- (id)m_arrPayCardList;
- (void)setM_arrPayCardList:(id)arg1;
- (id)m_arrHistoryPayCardList;
- (void)setM_arrHistoryPayCardList:(id)arg1;
- (id)m_arrVirtualCardList;
- (void)setM_arrVirtualCardList:(id)arg1;
- (id)m_oBalanceInfo;
- (void)setM_oBalanceInfo:(id)arg1;
- (id)m_oSwitchInfo;
- (void)setM_oSwitchInfo:(id)arg1;
- (id)m_oUserInfo;
- (void)setM_oUserInfo:(id)arg1;
- (id)m_oWCPayNoticeInfo;
- (void)setM_oWCPayNoticeInfo:(id)arg1;
- (id)m_arrBalaneNotice;
- (void)setM_arrBalaneNotice:(id)arg1;
- (id)m_arrFetchNotice;
- (void)setM_arrFetchNotice:(id)arg1;
- (id)m_arrWXBorrowMoneyList;
- (void)setM_arrWXBorrowMoneyList:(id)arg1;
- (id)m_oLoanEntryInfo;
- (void)setM_oLoanEntryInfo:(id)arg1;
- (id)m_oSelectedBindCardInfo;
- (void)setM_oSelectedBindCardInfo:(id)arg1;
- (id)m_nsNoAvalibleCardWording;
- (void)setM_nsNoAvalibleCardWording:(id)arg1;
- (id)realnameInfo;
- (void)setRealnameInfo:(id)arg1;
- (id)m_oFetchInfo;
- (void)setM_oFetchInfo:(id)arg1;
- (id)m_oLqtInfo;
- (void)setM_oLqtInfo:(id)arg1;
- (id)bank_priority;
- (void)setBank_priority:(id)arg1;
- (int)bindqueryScene;
- (void)setBindqueryScene:(int)arg1;
- (id)billEntryInfo;
- (void)setBillEntryInfo:(id)arg1;
- (id)jumpRemindInfo;
- (void)setJumpRemindInfo:(id)arg1;
- (id)lqt_action_entry;
- (void)setLqt_action_entry:(id)arg1;
- (id)balanceLqtInfo;
- (void)setBalanceLqtInfo:(id)arg1;
- (id)offlinePayGuideBar;
- (void)setOfflinePayGuideBar:(id)arg1;
- (id)offlinePayBlockLayer;
- (void)setOfflinePayBlockLayer:(id)arg1;
- (id)offlinePayDisableBlockLayer;
- (void)setOfflinePayDisableBlockLayer:(id)arg1;
- (id)payManageLabelList;
- (void)setPayManageLabelList:(id)arg1;
- (id)complianceHalfPageData;
- (void)setComplianceHalfPageData:(id)arg1;
- (void).cxx_destruct;
@end
