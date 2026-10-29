@interface MiniTaskCollectionLoadMoreView : UICollectionReusableView
{
    long long _section; // +0x8
    id <MiniTaskCollectionLoadMoreViewDelegate> _delegate; // +0x10
    MMUIButton * _loadMoreButton; // +0x18
    UIImageView * _iconImageView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onLoadMoreButton:(id)arg1;
- (void)layoutSubviews;
- (long long)section;
- (void)setSection:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadMoreButton;
- (void)setLoadMoreButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end
