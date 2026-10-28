@interface LivePhotoMakeExtraInfo : NSObject
{
    long long _readyForMoreTimeMs; // +0x8
    long long _readyForMoreFrameCounts; // +0x10
}
- (long long)readyForMoreTimeMs;
- (void)setReadyForMoreTimeMs:(long long)arg1;
- (long long)readyForMoreFrameCounts;
- (void)setReadyForMoreFrameCounts:(long long)arg1;
@end
