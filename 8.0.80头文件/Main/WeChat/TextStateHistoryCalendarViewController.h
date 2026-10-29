@interface TextStateHistoryCalendarViewController : MMUIViewController <TextStateHistoryCalendarCollectionViewDelegate, TextStateCardListDelegate, TextStateHistoryLogicDelegate>
{
    BOOL _canSelect; // +0x70
    TextStateHistoryCalendarCollectionView * _collectionView; // +0x78
    WCStoryFloatTopBar * _topBar; // +0x80
    unsigned long long _enterTime; // +0x88
    TextStateHistoryLogic * _historyLogic; // +0x90
    TextStateCardListViewController * _cardListViewController; // +0x98
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)initView;
- (void)initData;
- (void)refreshSceneSessionId;
- (void)fetchDataWithNeedLoading:(BOOL)arg1;
- (void)reportAction:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectSectionAtIndex:(unsigned long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewDidSelectStoryEntry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)continueFetchDataIfNeeded;
- (void)shouldReloadCardList;
- (void)shouldReloadCalendar;
- (void)shouldLocateCalendarToItemAtIndexPath:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)historyLogic;
- (void)setHistoryLogic:(id)arg1;
- (BOOL)canSelect;
- (void)setCanSelect:(BOOL)arg1;
- (id)cardListViewController;
- (void)setCardListViewController:(id)arg1;
- (void).cxx_destruct;
@end
