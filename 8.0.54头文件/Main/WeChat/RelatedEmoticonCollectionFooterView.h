@interface RelatedEmoticonCollectionFooterView : UICollectionReusableView
{
    MMTerminatorView * _terminatorView; // +0x8
    MMUIActivityIndicatorView * _indicatorView; // +0x10
    MMUILabel * _loadingTipView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)onLoading;
- (void)onNoMore;
- (id)terminatorView;
- (void)setTerminatorView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)loadingTipView;
- (void)setLoadingTipView:(id)arg1;
- (void).cxx_destruct;
@end

