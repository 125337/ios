@interface BrandActionReportLogicController : MMObject <BrandServiceEnterConversationLogicDelegate>
{
    CContact * m_contact; // +0x8
    BrandServiceEnterConversationLogic * m_enterConversationLogic; // +0x10
    BrandServiceContinueLocationReportLogic * m_continueLocationReporter; // +0x18
    id <BrandActionReportLogicControllerDelegate> _delegate; // +0x20
    NSMutableDictionary * _extInfo; // +0x28
}
- (void)dealloc;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)setExtInfo:(id)arg1;
- (void)createEnterReportLogic;
- (void)reportEnterConversation;
- (void)reportExitConversation;
- (void)creatContinueReportLogic;
- (void)updateContact:(id)arg1;
- (void)resetContinueReportLogic;
- (void)showAlertView;
- (void)setSessionInfo:(id)arg1;
- (id)getViewController;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_continueLocationReporter;
- (void)setM_continueLocationReporter:(id)arg1;
- (id)m_enterConversationLogic;
- (void)setM_enterConversationLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extInfo;
- (void).cxx_destruct;
@end

