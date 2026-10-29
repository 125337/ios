@interface BrandAndServiceAuthListRefreshFooter : WARefreshAutoFooter
{
    DotLoadingView * _loadingView; // +0x30
    UIView * _noMoreDataView; // +0x38
    UIView * _lineView; // +0x40
    MMUILabel * _noMoreTipsLabel; // +0x48
    NSString * _noMoreTips; // +0x50
    UIColor * _noMoreTipsBackgroundColor; // +0x58
}
- (id)loadingView;
- (id)noMoreDataView;
- (void)placeSubviews;
- (void)setState:(long long)arg1;
- (void)setNoMoreTipsBackgroundColor:(id)arg1;
- (id)noMoreTips;
- (void)setNoMoreTips:(id)arg1;
- (id)noMoreTipsBackgroundColor;
- (void).cxx_destruct;
@end
