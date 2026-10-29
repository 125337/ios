@interface WCSessionResourceViewController : MMUIViewController <StorageFootPanelViewDelegate, ResourceBrowseCollectionViewDelegate, IChatLogDataMgrExt>
{
    NSMutableArray * _sessionMsgInfos; // +0x68
    ResourceBrowseCollectionView * _sessionBrowseView; // +0x70
    StorageFootPanelView * _footPanelView; // +0x78
}
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (id)initWithSessionName:(id)arg1 msgInfo:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupView;
- (void)updateView;
- (id)getFootPanelSelectButtonTitle;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelLabelText;
- (id)getFootPanelSizeText;
- (void)onFootPanelSelectButtonClick;
- (void)p_deleteTheSelectedData;
- (void)onFootPanelDeleteButtonClick;
- (BOOL)isFootPanelRelateDataLoading;
- (BOOL)isFootPanelRelateDataSelectEmpty;
- (void)onResourceBrowseCollectionViewSelectChange:(id)arg1;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (BOOL)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (void)willMoveToParentViewController:(id)arg1;
- (void)onChatLogDataReloadItem;
- (id)sessionMsgInfos;
- (void)setSessionMsgInfos:(id)arg1;
- (id)sessionBrowseView;
- (void)setSessionBrowseView:(id)arg1;
- (id)footPanelView;
- (void)setFootPanelView:(id)arg1;
- (void).cxx_destruct;
@end

