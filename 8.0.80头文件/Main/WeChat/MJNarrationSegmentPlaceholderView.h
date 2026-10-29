@interface MJNarrationSegmentPlaceholderView : UICollectionReusableView <MJSegmentReusableView>
{
    id <MJSegmentReusableViewDelegate> _delegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutViews;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)willDisplay;
- (void)didEndDisplaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
