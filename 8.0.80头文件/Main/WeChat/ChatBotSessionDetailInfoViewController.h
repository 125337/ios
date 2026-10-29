@interface ChatBotSessionDetailInfoViewController : AddContactToChatRoomViewController
{
    unsigned int _enterScene; // +0xb4
    NSString * _sessionId; // +0xb8
}
- (void)viewDidLoad;
- (void)openContactInfo:(id)arg1;
- (void)onEditAndSearch;
- (void)setMuteStatus;
- (void)setTopSession;
- (void)onClear:(id)arg1;
- (void)onDelete;
- (void)addMember;
- (void)modifyContactInfoViewController:(id)arg1;
- (void)registerYReportSdk;
- (void)reportForEventId:(id)arg1 params:(id)arg2;
- (void)reportExposureYuanBaoErrorToastCell;
- (id)getReportParams;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
