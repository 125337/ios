@interface BrandProfileFuwuSubListView : BrandProfileFuwuBaseView
{
    BrandProfileFuwuInfo * _fuwuInfo; // +0x8
    UIView * _topDividingView; // +0x10
    UILabel * _groupLabel; // +0x18
    NSMutableArray * _showingFuwuButtonList; // +0x20
    NSMutableArray * _allFuwuButtonList; // +0x28
    double _cachedFuwuViewHeight; // +0x30
}
- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)calcuteFuwuViewHeight;
- (double)layoutFuwuViewSubviews;
- (void)updateFuwuInfo:(id)arg1;
- (void)onFuwuButtonClicked:(id)arg1;
- (id)fuwuInfo;
- (void)setFuwuInfo:(id)arg1;
- (id)topDividingView;
- (void)setTopDividingView:(id)arg1;
- (id)groupLabel;
- (void)setGroupLabel:(id)arg1;
- (id)showingFuwuButtonList;
- (void)setShowingFuwuButtonList:(id)arg1;
- (id)allFuwuButtonList;
- (void)setAllFuwuButtonList:(id)arg1;
- (double)cachedFuwuViewHeight;
- (void)setCachedFuwuViewHeight:(double)arg1;
- (void).cxx_destruct;
@end

