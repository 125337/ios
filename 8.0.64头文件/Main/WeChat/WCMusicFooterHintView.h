@interface WCMusicFooterHintView : UICollectionReusableView
{
    unsigned long long _mode; // +0x8
    WCMusicLoadingHintView * _loadingView; // +0x10
    WCMusicFooterNoMoreView * _noMoreView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)loadingView;
- (id)noMoreView;
- (unsigned long long)mode;
- (void)setLoadingView:(id)arg1;
- (void)setNoMoreView:(id)arg1;
- (void).cxx_destruct;
@end
