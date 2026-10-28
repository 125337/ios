@interface MMLiveRelatedCollectionViewLoadIndicatorView : UICollectionReusableView
{
    BOOL _active; // +0x8
    MMUIActivityIndicatorView * _relatedLiveLoadingIndicatorView; // +0x10
}
+ (id)reusableViewKind;
+ (id)reuseId;
- (id)initWithFrame:(CGRect)arg1;
- (void)setActive:(BOOL)arg1;
- (void)layoutSubviews;
- (BOOL)active;
- (id)relatedLiveLoadingIndicatorView;
- (void)setRelatedLiveLoadingIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
