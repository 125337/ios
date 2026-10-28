@interface WCFinderNativeDramaDetailLoadingSection : NSObject <WCFinderCollectionViewCompositionalSection>
{
    WCFinderNativeDramaDetailLoadingSectionModel * _model; // +0x8
    NSArray * _items; // +0x10
}
- (id)initWithModel:(id)arg1;
- (void)_setupItems;
- (id)layoutWithEnvironment:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
