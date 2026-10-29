@interface MMFinderLiveHonCoverCacheInfo : NSObject <PBCoding>
{
    BOOL _received; // +0x8
    BOOL _honCoverReceive; // +0x9
    unsigned int _full; // +0xc
    unsigned long long _liveId; // +0x10
    NSString * _honCoverUrl; // +0x18
}
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_honCoverUrl;
+ (void)PBArrayAdd_received;
+ (void)PBArrayAdd_honCoverReceive;
+ (void)PBArrayAdd_full;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)honCoverUrl;
- (void)setHonCoverUrl:(id)arg1;
- (BOOL)received;
- (void)setReceived:(BOOL)arg1;
- (BOOL)honCoverReceive;
- (void)setHonCoverReceive:(BOOL)arg1;
- (unsigned int)full;
- (void)setFull:(unsigned int)arg1;
- (void).cxx_destruct;
@end

