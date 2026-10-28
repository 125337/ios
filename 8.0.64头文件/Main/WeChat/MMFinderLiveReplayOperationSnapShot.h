@interface MMFinderLiveReplayOperationSnapShot : NSObject
{
    unsigned long long _timeIndex; // +0x8
}
- (id)snapShotKey;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)timeIndex;
- (void)setTimeIndex:(unsigned long long)arg1;
@end
