@interface SplashCacheInfo : NSObject
{
    long long _snapshotDelay; // +0x8
    long long _imageBlockingCount; // +0x10
}
- (long long)snapshotDelay;
- (void)setSnapshotDelay:(long long)arg1;
- (long long)imageBlockingCount;
- (void)setImageBlockingCount:(long long)arg1;
@end
