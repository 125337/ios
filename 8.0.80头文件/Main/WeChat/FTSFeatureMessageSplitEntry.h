@interface FTSFeatureMessageSplitEntry : NSObject
{
    NSString * _query; // +0x8
    NSArray * _regularIndexes; // +0x10
    NSArray * _featureIndexes; // +0x18
    NSArray * _featureDisplayItems; // +0x20
}
- (id)query;
- (void)setQuery:(id)arg1;
- (id)regularIndexes;
- (void)setRegularIndexes:(id)arg1;
- (id)featureIndexes;
- (void)setFeatureIndexes:(id)arg1;
- (id)featureDisplayItems;
- (void)setFeatureDisplayItems:(id)arg1;
- (void).cxx_destruct;
@end
