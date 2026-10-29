@interface WCFinderProfilePlaylistBigCardCell : UICollectionViewCell
{
    WCFinderCarouselView * _carouselView; // +0x8
    UIEdgeInsets _edgeInsets; // +0x10
}
+ (id)dequeCell:(id)arg1 fromView:(id)arg2;
+ (double)displayHeightWithWidth:(double)arg1 edgeInsets:(UIEdgeInsets)arg2;
- (void)setTag:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDatasource:(id)arg1;
- (id)datasource;
- (UIEdgeInsets)edgeInsets;
- (id)carouselView;
- (void)setCarouselView:(id)arg1;
- (void).cxx_destruct;
@end
