@interface GameCenterLatestGameInfo : MMObject <PBCoding>
{
    BOOL _isSubscribed; // +0x8
    unsigned long long _downloadType; // +0x10
}
+ (void)PBArrayAdd_downloadType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (BOOL)isSubscribed;
- (void)setIsSubscribed:(BOOL)arg1;
@end

