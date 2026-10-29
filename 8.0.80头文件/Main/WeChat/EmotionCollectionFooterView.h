@interface EmotionCollectionFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate>
{
    EmoticonStoreFootView * _footerView; // +0x8
    id <EmotionCollectionFooterViewDelegate> _delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reset;
- (void)refreshCollectionViewDidScroll:(id)arg1;
- (void)refreshCollectionViewDataSourceDidFinishedLoading:(id)arg1;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
