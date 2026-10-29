@interface RingTonePickerViewModel : NSObject
{
    unsigned int _offset; // +0x8
    NSMutableArray * _rings; // +0x10
    NSMutableSet * _feedIDs; // +0x18
    RingToneDetail * _ring; // +0x20
}
- (id)init;
- (id)fetchRecommendRings:(unsigned long long)arg1;
- (void)refreshForTableView;
- (void)addRingForRecommendList:(id)arg1;
- (void)reportRecommendRingBackExpose:(long long)arg1 end:(long long)arg2;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)rings;
- (void)setRings:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (id)feedIDs;
- (void)setFeedIDs:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (void).cxx_destruct;
@end

