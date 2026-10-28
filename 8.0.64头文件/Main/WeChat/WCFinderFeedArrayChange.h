@interface WCFinderFeedArrayChange : NSObject
{
    NSOrderedCollectionDifference * _diff; // +0x8
    NSArray * _tidArray; // +0x10
    WCFinderFeedArray2 * _source; // +0x18
    NSArray * _beforeTidArray; // +0x20
    NSMutableDictionary * _removes; // +0x28
}
- (id)tidArray;
- (id)feedOfTid:(id)arg1;
- (id)diff;
- (void)setTidArray:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)beforeTidArray;
- (void)setBeforeTidArray:(id)arg1;
- (id)removes;
- (void)setRemoves:(id)arg1;
- (void).cxx_destruct;
@end
