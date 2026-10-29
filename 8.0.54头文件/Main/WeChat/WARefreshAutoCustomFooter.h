@interface WARefreshAutoCustomFooter : WARefreshAutoFooter
{
    int _marginTop; // +0x30
    int _lineWordsInterval; // +0x34
    WARefreshDefaultNoMoreDataLabel * _noMoreDataView; // +0x38
    MMUIImageView * _loadingView; // +0x40
}
- (id)init;
- (void)setupViews;
- (void)placeSubviews;
- (void)updateWords:(id)arg1;
- (void)setState:(long long)arg1;
- (id)loadingView;
- (id)noMoreDataView;
- (int)marginTop;
- (void)setMarginTop:(int)arg1;
- (int)lineWordsInterval;
- (void)setLineWordsInterval:(int)arg1;
- (void)setNoMoreDataView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

