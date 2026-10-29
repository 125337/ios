@interface StoreEmotionTopicViewController : MMUIViewController <LoopPageScrollViewDataSourceDelegate, UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate, StoreEmotionGetEmotionListCgiDelegate, StoreEmotionPageShareLogicDelegate>
{
    LoopPageScrollView * _bannerView; // +0x68
    MMTableView * _tableView; // +0x70
    EmoticonStoreFootView * _tailView; // +0x78
    EmotionBannerSet * _storeAd; // +0x80
    NSMutableArray * _topicEmotionList; // +0x88
    ShareMessageConfirmLogicHelper * _shareMessageHelper; // +0x90
    MMLoadingView * _shareLoadingView; // +0x98
    StoreEmotionGetEmotionListCgi * m_getEmotionListCgi; // +0xa0
    StoreEmotionPageShareLogic * m_shareLogic; // +0xa8
    EmotionStoreRecList * m_recommendRecord; // +0xb0
    long long m_extranceScene; // +0xb8
    BOOL _didLoadData; // +0xc0
    unsigned long long _sessionId; // +0xc8
}
- (id)initWithBannerSet:(id)arg1 extrance:(long long)arg2;
- (id)initWithRecommendRecord:(id)arg1 entrance:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupData;
- (void)setupViews;
- (void)setupTableView;
- (void)initTableFooterView;
- (void)setupNoContentView;
- (void)reloadData;
- (void)setupRightBarButton;
- (void)onOperate:(id)arg1;
- (void)reportExpose;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;
- (int)totalNumOfPage;
- (void)didChangeToPage:(unsigned int)arg1;
- (void)didTapPageAtNum:(unsigned int)arg1;
- (void)OnEmotionChartsCellTapButton:(id)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (BOOL)didLoadData;
- (void)setDidLoadData:(BOOL)arg1;
- (void).cxx_destruct;
@end

