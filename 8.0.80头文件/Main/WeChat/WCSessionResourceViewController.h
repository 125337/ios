@interface WCSessionResourceViewController : MMUIViewController <StorageFootPanelViewDelegate, ResourceBrowseCollectionViewDelegate, IChatLogDataMgrExt>
{
    BOOL _bUserAllSelect; // +0x70
    BOOL _isSend; // +0x71
    unsigned long long _scene; // +0x78
    NSMutableArray * _lastSelectChatLogInfo; // +0x80
    NSMutableArray * _sessionMsgInfos; // +0x88
    ResourceBrowseCollectionView * _sessionBrowseView; // +0x90
    StorageFootPanelView * _footPanelView; // +0x98
    unsigned long long _selectType; // +0xa0
    id /* block */ _comletionHandler; // +0xa8
}
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (id)initWithSessionName:(id)arg1 msgInfo:(id)arg2;
- (id)initWithSessionName:(id)arg1 msgInfo:(id)arg2 withCompletion:(id /* block */)arg3 isSend:(BOOL)arg4;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupView;
- (void)updateView;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectButtonClick;
- (void)p_deleteTheSelectedData;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectAllButtonClick;
- (BOOL)isFootPanelRelateDataSelectAll;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (void)onResourceBrowseCollectionViewSelectChange:(id)arg1;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (BOOL)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (void)willMoveToParentViewController:(id)arg1;
- (void)onChatLogDataReloadItem;
- (id)filterReportSortSession;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)lastSelectChatLogInfo;
- (void)setLastSelectChatLogInfo:(id)arg1;
- (BOOL)bUserAllSelect;
- (void)setBUserAllSelect:(BOOL)arg1;
- (id)sessionMsgInfos;
- (void)setSessionMsgInfos:(id)arg1;
- (id)sessionBrowseView;
- (void)setSessionBrowseView:(id)arg1;
- (id)footPanelView;
- (void)setFootPanelView:(id)arg1;
- (unsigned long long)selectType;
- (void)setSelectType:(unsigned long long)arg1;
- (id /* block */)comletionHandler;
- (void)setComletionHandler:(id /* block */)arg1;
- (BOOL)isSend;
- (void)setIsSend:(BOOL)arg1;
- (void).cxx_destruct;
@end
