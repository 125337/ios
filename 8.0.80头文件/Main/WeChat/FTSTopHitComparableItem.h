@interface FTSTopHitComparableItem : NSObject
{
    unsigned int _clickScore; // +0x8
    id _topHitItem; // +0x10
    NSString * _typeKey; // +0x18
}
- (long long)compareUsingClickScore:(id)arg1;
- (id)topHitItem;
- (void)setTopHitItem:(id)arg1;
- (id)typeKey;
- (void)setTypeKey:(id)arg1;
- (unsigned int)clickScore;
- (void)setClickScore:(unsigned int)arg1;
- (void).cxx_destruct;
@end
