@interface WCTimelineMissReadRecord : NSObject <PBCoding>
{
    BOOL _isRealCreatTime; // +0x8
    unsigned int _firstFeedCreatTime; // +0xc
    unsigned long long _missReadRecordId; // +0x10
    NSMutableArray * _missReadFeeds; // +0x18
    NSMutableArray * _weishangFeeds; // +0x20
    NSMutableArray * _invisibleFeeds; // +0x28
}
+ (void)PBArrayAdd_missReadRecordId;
+ (void)PBArrayAdd_missReadFeeds;
+ (void)PBArrayAdd_weishangFeeds;
+ (void)PBArrayAdd_firstFeedCreatTime;
+ (void)PBArrayAdd_isRealCreatTime;
+ (void)PBArrayAdd_invisibleFeeds;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)getFirstMissReadId;
- (id)description;
- (unsigned long long)missReadRecordId;
- (void)setMissReadRecordId:(unsigned long long)arg1;
- (id)missReadFeeds;
- (void)setMissReadFeeds:(id)arg1;
- (id)weishangFeeds;
- (void)setWeishangFeeds:(id)arg1;
- (id)invisibleFeeds;
- (void)setInvisibleFeeds:(id)arg1;
- (unsigned int)firstFeedCreatTime;
- (void)setFirstFeedCreatTime:(unsigned int)arg1;
- (BOOL)isRealCreatTime;
- (void)setIsRealCreatTime:(BOOL)arg1;
- (void).cxx_destruct;
@end
