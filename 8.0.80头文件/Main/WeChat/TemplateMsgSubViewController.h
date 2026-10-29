@interface TemplateMsgSubViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate, WASessionArrowTitleViewDelegate, MessageNodeViewDelegate>
{
    unsigned int _enterScene; // +0x1e0
    NSString * _templateSessionId; // +0x1e8
    TemplateMsgSearchHelper * _searchHelper; // +0x1f0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)initNavigationRightBarButton;
- (void)onClickHeaderBar:(id)arg1;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (double)getTipsHeight;
- (void)didReceiveMemoryWarning;
- (void)onSettingButton:(id)arg1;
- (void)reloadTabeView;
- (void)onSearchButton:(id)arg1;
- (void)onTableEndScroll;
- (void)makeNotifyMsgExpose;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (BOOL)isServiceNotificationFirstLevelPage;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(BOOL)arg2;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (void)onClickTitle;
- (BOOL)isScanOrScheduleSessionId:(id)arg1;
- (void)reportServerNotifySubscribeMessageOp:(unsigned int)arg1 viewModel:(id)arg2 reportModel:(id)arg3;
- (id)templateSessionId;
- (void)setTemplateSessionId:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)searchHelper;
- (void)setSearchHelper:(id)arg1;
- (void).cxx_destruct;
@end
