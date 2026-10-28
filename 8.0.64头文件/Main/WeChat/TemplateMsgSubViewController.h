@interface TemplateMsgSubViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate, WASessionArrowTitleViewDelegate, MessageNodeViewDelegate>
{
    NSString * _templateSessionId; // +0x1e0
    UIView * _headerBarView; // +0x1e8
    UIView * _headerLineView; // +0x1f0
    UIButton * _headerBarButton; // +0x1f8
    MMHeadImageView * _headView; // +0x200
    MMUILabel * _nickNameLabel; // +0x208
    MMUILabel * _typeLabel; // +0x210
    TemplateMsgSearchHelper * _searchHelper; // +0x218
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)initNavigationRightBarButton;
- (void)initHeaderBar;
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
- (id)headerBarView;
- (void)setHeaderBarView:(id)arg1;
- (id)headerLineView;
- (void)setHeaderLineView:(id)arg1;
- (id)headerBarButton;
- (void)setHeaderBarButton:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)typeLabel;
- (void)setTypeLabel:(id)arg1;
- (id)searchHelper;
- (void)setSearchHelper:(id)arg1;
- (void).cxx_destruct;
@end
