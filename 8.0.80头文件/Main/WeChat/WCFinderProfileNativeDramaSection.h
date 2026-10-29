@interface WCFinderProfileNativeDramaSection : NSObject <WCFinderCollectionViewCompositionalSection>
{
    double _horizontalMargin; // +0x8
    WCFinderProfileNativeDramaSectionModel * _model; // +0x10
    NSArray * _items; // +0x18
}
+ (long long)columnCountForCurrentDevice;
+ (double)horizontalMarginWithContentHorizontalMargin:(double)arg1;
- (id)initWithModel:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)_setupItems;
- (id)layoutWithEnvironment:(id)arg1;
- (double)horizontalMargin;
- (void)setHorizontalMargin:(double)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
