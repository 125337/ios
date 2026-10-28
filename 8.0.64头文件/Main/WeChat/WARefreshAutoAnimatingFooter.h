@interface WARefreshAutoAnimatingFooter : WARefreshAutoFooter
{
    NSString * _noMoreTips; // +0x30
    DotLoadingView * _loadingView; // +0x38
    UIColor * _noMoreTipsBackgroundColor; // +0x40
    UIView * _noMoreDataView; // +0x48
    UIView * _lineView; // +0x50
    MMUILabel * _noMoreTipsLabel; // +0x58
}
- (id)loadingView;
- (id)createLoadingView;
- (id)noMoreDataView;
- (void)onTapNoMore:(id)arg1;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (void)setNoMoreTipsBackgroundColor:(id)arg1;
- (id)noMoreTips;
- (void)setNoMoreTips:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)noMoreTipsBackgroundColor;
- (void)setNoMoreDataView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)noMoreTipsLabel;
- (void)setNoMoreTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
