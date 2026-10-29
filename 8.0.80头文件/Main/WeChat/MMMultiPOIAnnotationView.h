@interface MMMultiPOIAnnotationView : QAnnotationView
{
    UIView * _squareView; // +0x8
    MMWebImageView * _iconView; // +0x10
    CAShapeLayer * _bubbleLayer; // +0x18
    UIView * _badgeView; // +0x20
    UILabel * _badgeLabel; // +0x28
    MMMultiPOIItem * _currentItem; // +0x30
    unsigned long long _currentClusterCount; // +0x38
}
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)buildSubviewsOnce;
- (void)applyFixedLayout;
- (void)configureWithItem:(id)arg1 clusterCount:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applyBackgroundColors;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)currentItem;
- (void)setCurrentItem:(id)arg1;
- (unsigned long long)currentClusterCount;
- (void)setCurrentClusterCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
