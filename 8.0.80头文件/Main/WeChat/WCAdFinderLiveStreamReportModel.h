@interface WCAdFinderLiveStreamReportModel : WCAdChannelReportExtendInfoModel
{
    int _joinLiveFlag; // +0x8
    unsigned int _joinLiveStartTimestamp; // +0xc
    unsigned int _joinLiveEndTimestamp; // +0x10
    int _displayType; // +0x14
    int _showBrandWallpaperImage; // +0x18
    int _showFrontImage; // +0x1c
    int _horizontalGravity; // +0x20
    int _verticalGravity; // +0x24
    long long _totalPlayTime; // +0x28
}
- (long long)totalPlayTime;
- (void)setTotalPlayTime:(long long)arg1;
- (int)joinLiveFlag;
- (void)setJoinLiveFlag:(int)arg1;
- (unsigned int)joinLiveStartTimestamp;
- (void)setJoinLiveStartTimestamp:(unsigned int)arg1;
- (unsigned int)joinLiveEndTimestamp;
- (void)setJoinLiveEndTimestamp:(unsigned int)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (int)showBrandWallpaperImage;
- (void)setShowBrandWallpaperImage:(int)arg1;
- (int)showFrontImage;
- (void)setShowFrontImage:(int)arg1;
- (int)horizontalGravity;
- (void)setHorizontalGravity:(int)arg1;
- (int)verticalGravity;
- (void)setVerticalGravity:(int)arg1;
@end
