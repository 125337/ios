@interface BrandProfileMsgTabViewController : BrandProfileBaseTabViewController <BrandProfileTopicViewDelegate, MMMenuControllerExt, WCActionSheetDelegate, IBizIamServiceExt>
{
    BOOL _fetchingOutbox; // +0x8
    id <BrandProfileMsgTabViewControllerDelegate> _msgTabDelegate; // +0x10
    BrandProfileTopicView * _topicView; // +0x18
    BrandProfileTopicViewModel * _topicViewModel; // +0x20
    BrandProfileItemBaseViewModel * _menuTargetViewModel; // +0x28
    BrandProfileItemBaseViewModel * _deletingViewModel; // +0x30
    NSArray * _outboxMessages; // +0x38
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (unsigned long long)tabType;
- (int)cgiReqActionType;
- (id)cgiRespMessageList:(id)arg1;
- (int)cgiRespFuncFlag;
- (id)tabTitle;
- (id)brandProfileCeilingTableView;
- (void)configTableView;
- (id)topicView;
- (void)reloadTopicViewWithInfoList:(id)arg1;
- (void)onTopicButtonClicked:(id)arg1;
- (void)onUnfoldButtonClicked;
- (id)parseMessagesData:(id)arg1;
- (void)loadOutboxMessageCache;
- (id)outboxMessageList;
- (BOOL)shouldOverrideExistSectionData:(id)arg1;
- (void)onFetchOutboxMessagesComplete:(id)arg1;
- (void)onLongPressItemViewModel:(id)arg1;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerDidShowFailed;
- (void)longPressEditItem;
- (void)longPressDeleteItem;
- (void)longPressMoreItem;
- (void)actionSheetViewLoaded:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmDeleteViewModel:(id)arg1;
- (void)onDeleteViewModel:(id)arg1 success:(BOOL)arg2;
- (void)onDeleteBizArticle:(id)arg1;
- (void)resumeEditingViewModel:(id)arg1;
- (id)msgTabDelegate;
- (void)setMsgTabDelegate:(id)arg1;
- (void)setTopicView:(id)arg1;
- (id)topicViewModel;
- (void)setTopicViewModel:(id)arg1;
- (BOOL)fetchingOutbox;
- (void)setFetchingOutbox:(BOOL)arg1;
- (id)menuTargetViewModel;
- (void)setMenuTargetViewModel:(id)arg1;
- (id)deletingViewModel;
- (void)setDeletingViewModel:(id)arg1;
- (id)outboxMessages;
- (void)setOutboxMessages:(id)arg1;
- (void).cxx_destruct;
@end
