@interface BizRecentReadFooter : UIView
{
    BizRecentReadNoMoreDataLabel * _noMoreDataView; // +0x8
    MMUIImageView * _loadingView; // +0x10
}
- (id)init;
- (void)setupViews;
- (void)layoutSubviews;
- (void)setState:(unsigned int)arg1;
- (id)loadingView;
- (id)noMoreDataView;
- (void)setNoMoreDataView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
