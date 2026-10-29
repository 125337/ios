@interface EditVideoBGMSearchResultCollectionViewFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate>
{
    double _heightLimit; // +0x8
    id <EditVideoBGMSearchResultCollectionViewFooterViewDelegate> _delegate; // +0x10
    WCTimeLineFooterView * _footerView; // +0x18
}
+ (double)getViewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)resetStatus:(unsigned long long)arg1;
- (void)removeClickAction;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (double)heightLimit;
- (void)setHeightLimit:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end

