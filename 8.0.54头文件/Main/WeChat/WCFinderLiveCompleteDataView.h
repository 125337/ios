@interface WCFinderLiveCompleteDataView : MMUIView
{
    id /* block */ _itemSelectBlock; // +0x8
    id /* block */ _dataViewBlock; // +0x10
    id /* block */ _dataViewExposeBlock; // +0x18
    FinderLiveAnchorCloseLivePageData * _pageData; // +0x20
    WCFinderLiveCompleteDataModel * _dataModel; // +0x28
    WCFinderLiveCompleteDataPageView * _basePageView; // +0x30
    WCFinderLiveCompleteDataPageView * _incomePageView; // +0x38
}
+ (id)localPageDataWithFinderLiveInfo:(id)arg1 finderLiveTask:(id)arg2 isBizLive:(BOOL)arg3 showType:(unsigned long long)arg4;
+ (id)getDataItemListWithType:(int)arg1 shouldPaymentEntry:(BOOL)arg2 enableLiveRoomReward:(BOOL)arg3 shoppingAvailable:(BOOL)arg4 isBizLive:(BOOL)arg5;
+ (BOOL)shouldPaymentEntryWithFinderLiveInfo:(id)arg1;
- (id)getDataViewHeightWithPageData:(id)arg1;
- (BOOL)showAudienceAvgSecondsSubTitle:(id)arg1;
- (void)updateWithPageData:(id)arg1;
- (BOOL)showInComeViewWithPageData:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)basePageView;
- (id)incomePageView;
- (id /* block */)itemSelectBlock;
- (void)setItemSelectBlock:(id /* block */)arg1;
- (id /* block */)dataViewBlock;
- (void)setDataViewBlock:(id /* block */)arg1;
- (id /* block */)dataViewExposeBlock;
- (void)setDataViewExposeBlock:(id /* block */)arg1;
- (id)pageData;
- (void)setPageData:(id)arg1;
- (id)dataModel;
- (void)setDataModel:(id)arg1;
- (void)setBasePageView:(id)arg1;
- (void)setIncomePageView:(id)arg1;
- (void).cxx_destruct;
@end

