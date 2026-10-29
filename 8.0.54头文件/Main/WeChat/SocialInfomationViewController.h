@interface SocialInfomationViewController : MMUIViewController <WCActionSheetDelegate, QZoneLoginStatusDelegate, PBMessageObserverDelegate, IContactRelatedGroupDataExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    QZoneLoginStatus * m_qzone; // +0x70
    NSString * m_cpKeyForSignature; // +0x78
    BOOL m_isSignatureUnsafe; // +0x80
    CContact * m_contact; // +0x88
    ContactRelatedGroupLogic * m_relatedGroupLogic; // +0x90
}
+ (id)getRegionForContact:(id)arg1;
+ (id)getSourceForContact:(id)arg1 sourceMsg:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)relatedGroupTitle;
- (BOOL)shouldRestrictContentViewSize;
- (void)addThridAccountSection;
- (void)relatedGroupSection;
- (void)addFriendInfoSection;
- (void)addRegionCellAtSection:(id)arg1;
- (void)addSignatureCellAtSection:(id)arg1;
- (void)addSourceCellAtSection:(id)arg1;
- (void)addContactAddCreateTimeCellAtSection:(id)arg1;
- (void)makeAddCreateTimeInfoCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableView;
- (void)OnQQAction;
- (void)onPushRelatedGroupViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onQZoneUrl:(id)arg1;
- (void)updateCPState;
- (void)onCRGDataUpdated;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_relatedGroupLogic;
- (void)setM_relatedGroupLogic:(id)arg1;
- (void).cxx_destruct;
@end

