@interface WCSearchGroupScoreCache : NSObject
{
    NSMutableDictionary * _dicScore; // +0x8
    NSMutableDictionary * _dicFeatures; // +0x10
    NSMutableDictionary * _dicLeaf; // +0x18
}
- (id)init;
- (id)dicScore;
- (void)setDicScore:(id)arg1;
- (id)dicFeatures;
- (void)setDicFeatures:(id)arg1;
- (id)dicLeaf;
- (void)setDicLeaf:(id)arg1;
- (void).cxx_destruct;
@end
