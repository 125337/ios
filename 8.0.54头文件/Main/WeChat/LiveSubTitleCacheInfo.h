@interface LiveSubTitleCacheInfo : NSObject <PBCoding>
{
    unsigned int _isClosed; // +0x8
    unsigned long long _liveStartTime; // +0x10
}
+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_isClosed;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)liveStartTime;
- (void)setLiveStartTime:(unsigned long long)arg1;
- (unsigned int)isClosed;
- (void)setIsClosed:(unsigned int)arg1;
@end

