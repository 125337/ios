@interface WCPayGPLaunchViewControllerV2 : WCPayBaseViewController <SessionSelectControllerDelegate, WCPayGPPhotoViewControllerDelegate, MMImagePickerManagerDelegate, WCPayBottomPanelViewDelegate, UITableViewDelegate, UITableViewDataSource, MMGrowTextViewDelegate, WCPayGPLaunchModeDetailViewDelegate, IMMGrowTextViewExt, WCPayWebImageViewDelegate, WCPayGPLaunchConfirmPageSheetDelegate, UITextFieldDelegate>
{
    BOOL _bNeedDismissSessionListView; // +0x90
    BOOL _bHasShowTotalAmountTips; // +0x91
    BOOL _bHasShowPerAmountTips; // +0x92
    BOOL _bHasShowTotalMemberTips; // +0x93
    BOOL _showSolitaireEntry; // +0x94
    BOOL _bIsSearchingGroupContact; // +0x95
    unsigned int _maxTotalNum; // +0x98
    unsigned int _chatroomMemberCount; // +0x9c
    unsigned int _totalMember; // +0xa0
    unsigned int _launchMemberCount; // +0xa4
    id <WCPayGPLaunchViewControllerV2Delegate> _delegate; // +0xa8
    MMTableView * _tableView; // +0xb0
    UIView * _headerView; // +0xb8
    WCPayNoticeItemView * _noticeBanner; // +0xc0
    MMGrowTextView * _themeInputTextView; // +0xc8
    WCPayWebImageView * _remarkImageView; // +0xd0
    UIView * _themeEditView; // +0xd8
    UIView * _launchContentView; // +0xe0
    UIView * _footerView; // +0xe8
    UIView * _launchMoneyWrapperView; // +0xf0
    MMUILabel * _launchTipsLabel; // +0xf8
    MMUILabel * _launchMoneyLabel; // +0x100
    UIButton * _launchBtn; // +0x108
    WCPayGPLaunchParamInvalidTipsView * _paramInvalidTipsView; // +0x110
    WCPayBottomPanelView * _bottomPanelView; // +0x118
    NSArray * _sectionTypeArray; // +0x120
    unsigned long long _maxTotalAmount; // +0x128
    unsigned long long _maxPerAmount; // +0x130
    unsigned long long _curLaunchType; // +0x138
    NSString * _activityTheme; // +0x140
    NSArray * _curCommonAASelectedContact; // +0x148
    NSString * _curCommonAAAmountString; // +0x150
    NSArray * _curActivityModeSelectedContact; // +0x158
    NSDictionary * _curActivityModePayAmountDict; // +0x160
    NSString * _launchTheme; // +0x168
    NSArray * _launchUsernameArray; // +0x170
    unsigned long long _launchPerAmount; // +0x178
    NSArray * _launchPayerItems; // +0x180
    unsigned long long _launchTotalAmount; // +0x188
    NSMutableArray * _svrRecomendSessionContacts; // +0x190
    MMPageSheetAdapter * _pageSheetAdapter; // +0x198
    WCPayGPLaunchModeDetailView * _pageSheetDetailView; // +0x1a0
    double _keyboardHeight; // +0x1a8
    WCPayGPLaunchConfirmPageSheet * _confirmPageSheet; // +0x1b0
    NSDictionary * _pageOutDateReportDict; // +0x1b8
}
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)refreshLaunchType;
- (void)setupPreShowData;
- (void)setupData;
- (void)setupReportData;
- (void)setupView;
- (void)setupNavigationBar;
- (void)setupTableView;
- (void)setupHeaderView;
- (void)refreshMemoViewAfterInputChange;
- (void)setupFooterView;
- (void)setupThemeEditView;
- (void)setupLaunchContentView;
- (void)layoutLaunchContentView;
- (void)genLaunchTipsLabelWithSuperView:(id)arg1;
- (void)genLaunchMoneyLabelWithSuperView:(id)arg1;
- (void)genLaunchButton;
- (double)calcLaunchContentHeightAndContentTopMargin:(double)arg1;
- (void)layoutFooterContentWithOnlyShowButton;
- (void)layoutFooterContentWithTipsContent:(id)arg1 moneyContent:(id)arg2;
- (void)setupSectionType;
- (id)getSectionTypeWithSectionIndex:(long long)arg1;
- (void)refreshCurrentLaunchModeData;
- (void)setupCommonAAData;
- (void)setupCustomizeAAData;
- (void)setupActivityAAData;
- (id)getTotalMemberDisplayLabelContent;
- (void)setLaunchSelectedContact:(id)arg1;
- (void)setLaunchChatroomContact:(id)arg1;
- (void)ignoreOpenIMContactAndRefreshTotalMember;
- (double)getActivityAATotalPayerAmount;
- (unsigned int)getCommonAARoundPerAmountValue;
- (id)getActivityAATotalPayerAmountString;
- (void)refreshView;
- (void)launchGPCancel;
- (void)noticeBtnClick;
- (void)resigntextField;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)checkLaunchStatus;
- (void)checkCommonAALaunchStatus;
- (void)checkActivityAALaunchStatus;
- (void)checkCustomizeAALaunchStatus;
- (void)launchBtnClick;
- (void)modeChangeBtnClick;
- (void)importFromSolitaireClick;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)adjustTableViewOffsetWhenKeyboardShow;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)launchCommonAA;
- (void)launchActivityAA;
- (void)launchCustomizeAA;
- (void)showLaunchConfirmView;
- (void)onGPConfirmPageSheetClickConfirm;
- (void)onGPConfirmPageSheetClickCancel;
- (void)continueToLaunchFromPartialMember;
- (void)realLaunch;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCellWithReuseableId:(id)arg1;
- (id)setupModeChangeCellContent;
- (id)setupTotalAmountCellContent;
- (id)setupTotalMemberCellContent;
- (id)setupCustomizePayerTipsCellContent;
- (id)setupCustomizeGroupMemberTipsCellContent;
- (id)setupActivityAAPayerTitleCellContent;
- (id)setupActivityAAPayerDetailCellContentWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showActivityAAMemberEditView;
- (void)refreshLaunchViewWithControlData:(id)arg1;
- (void)refreshLaunchViewWithSelectedContacts:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)refreshLaunchViewWithSelectedContactArray:(id)arg1;
- (void)continueToLaunchPfAfterCdnUploadSucc;
- (void)handleEventAfterLaunchSucc;
- (void)remarkImageCoverBtnClick;
- (void)onPhtotViewControllerClickSaveImage:(id)arg1;
- (void)cleanRemarkImageData;
- (void)onPhotoViewControllerClickDeleteImage;
- (void)onPhotoViewControllerDismiss;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)paramInvalidTipsView;
- (void)showInvalidTips:(id)arg1;
- (void)hideInvalidTipsView;
- (void)hideTotalAmountInvalidTips;
- (void)hidePerAmountInvalidTips;
- (void)hideTotalMemberInvalidTips;
- (void)hideAllInvalidTips;
- (void)showUpgrapdeIMTipsPanelView;
- (void)showPfFirstUseTipsPanelView;
- (void)showTipsPanelViewWithTitle:(id)arg1 mainContent:(id)arg2;
- (void)onWCPaypBottomPanelViewDismiss;
- (BOOL)needShowSessionList;
- (void)showSessionListForPf;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)reCalcPayerDataAfterSelectContact:(id)arg1;
- (id)sectionTitleForBizChatSession;
- (long long)numberOfRowInBizChatSession;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (void)contactInBizChatDidSelect:(id)arg1;
- (id)getPayerUsernameList;
- (void)genRecommendContactList;
- (void)searchTargetUserNames:(id)arg1 inGroupContactList:(id)arg2 maxResultCount:(long long)arg3;
- (id)pageSheetDetailView;
- (void)showGroupPayModePageSheet;
- (BOOL)shouldHideCustomizeAAType;
- (void)onDetailViewSelectLaunchType:(unsigned long long)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)getSolitaireTotalMemberDisplayLabelContent;
- (id)getSolitaireSceneSelectedContact;
- (void)refreshViewControllerAfterImportSolitaire;
- (id)genSolitaireLaunchData;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)noticeBanner;
- (void)setNoticeBanner:(id)arg1;
- (id)themeInputTextView;
- (void)setThemeInputTextView:(id)arg1;
- (id)remarkImageView;
- (void)setRemarkImageView:(id)arg1;
- (id)themeEditView;
- (void)setThemeEditView:(id)arg1;
- (id)launchContentView;
- (void)setLaunchContentView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)launchMoneyWrapperView;
- (void)setLaunchMoneyWrapperView:(id)arg1;
- (id)launchTipsLabel;
- (void)setLaunchTipsLabel:(id)arg1;
- (id)launchMoneyLabel;
- (void)setLaunchMoneyLabel:(id)arg1;
- (id)launchBtn;
- (void)setLaunchBtn:(id)arg1;
- (void)setParamInvalidTipsView:(id)arg1;
- (id)bottomPanelView;
- (void)setBottomPanelView:(id)arg1;
- (BOOL)bNeedDismissSessionListView;
- (void)setBNeedDismissSessionListView:(BOOL)arg1;
- (id)sectionTypeArray;
- (void)setSectionTypeArray:(id)arg1;
- (unsigned int)maxTotalNum;
- (void)setMaxTotalNum:(unsigned int)arg1;
- (unsigned long long)maxTotalAmount;
- (void)setMaxTotalAmount:(unsigned long long)arg1;
- (unsigned long long)maxPerAmount;
- (void)setMaxPerAmount:(unsigned long long)arg1;
- (BOOL)bHasShowTotalAmountTips;
- (void)setBHasShowTotalAmountTips:(BOOL)arg1;
- (BOOL)bHasShowPerAmountTips;
- (void)setBHasShowPerAmountTips:(BOOL)arg1;
- (BOOL)bHasShowTotalMemberTips;
- (void)setBHasShowTotalMemberTips:(BOOL)arg1;
- (BOOL)showSolitaireEntry;
- (void)setShowSolitaireEntry:(BOOL)arg1;
- (unsigned long long)curLaunchType;
- (void)setCurLaunchType:(unsigned long long)arg1;
- (id)activityTheme;
- (void)setActivityTheme:(id)arg1;
- (id)curCommonAASelectedContact;
- (void)setCurCommonAASelectedContact:(id)arg1;
- (id)curCommonAAAmountString;
- (void)setCurCommonAAAmountString:(id)arg1;
- (id)curActivityModeSelectedContact;
- (void)setCurActivityModeSelectedContact:(id)arg1;
- (id)curActivityModePayAmountDict;
- (void)setCurActivityModePayAmountDict:(id)arg1;
- (unsigned int)chatroomMemberCount;
- (void)setChatroomMemberCount:(unsigned int)arg1;
- (unsigned int)totalMember;
- (void)setTotalMember:(unsigned int)arg1;
- (id)launchTheme;
- (void)setLaunchTheme:(id)arg1;
- (id)launchUsernameArray;
- (void)setLaunchUsernameArray:(id)arg1;
- (unsigned int)launchMemberCount;
- (void)setLaunchMemberCount:(unsigned int)arg1;
- (unsigned long long)launchPerAmount;
- (void)setLaunchPerAmount:(unsigned long long)arg1;
- (id)launchPayerItems;
- (void)setLaunchPayerItems:(id)arg1;
- (unsigned long long)launchTotalAmount;
- (void)setLaunchTotalAmount:(unsigned long long)arg1;
- (id)svrRecomendSessionContacts;
- (void)setSvrRecomendSessionContacts:(id)arg1;
- (BOOL)bIsSearchingGroupContact;
- (void)setBIsSearchingGroupContact:(BOOL)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)setPageSheetDetailView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)confirmPageSheet;
- (void)setConfirmPageSheet:(id)arg1;
- (id)pageOutDateReportDict;
- (void)setPageOutDateReportDict:(id)arg1;
- (void).cxx_destruct;
@end

