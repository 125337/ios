@interface WCAlbumPickerFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate>
{
    id <WCAlbumPickerFooterViewDelegate> _delegate; // +0x8
    WCStoryRefreshFooterView * _footerView; // +0x10
}
+ (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)footerView;
- (void)refreshCollectionViewDidScroll:(id)arg1;
- (void)refreshCollectionViewDataSourceDidFinishedLoading:(id)arg1;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end

