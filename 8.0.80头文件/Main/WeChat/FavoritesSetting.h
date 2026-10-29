@interface FavoritesSetting : NSObject <NSCoding>
{
    BOOL _bIsFirstTimeInFav; // +0x8
    BOOL _bHasCalculateFavItemSize; // +0x9
    BOOL _bHasFixedUploadStatus; // +0xa
    BOOL _useNewTagLogic; // +0xb
    BOOL _hasGetFavSetting; // +0xc
    BOOL _enableMusicList; // +0xd
    BOOL _enableAiSearch; // +0xe
    BOOL _enableStar; // +0xf
    int _showFavIntroViewTimes; // +0x10
    unsigned long long _totalCapacity; // +0x18
    unsigned long long _usedCapacity; // +0x20
    unsigned long long _maxAutoDownloadSize; // +0x28
    unsigned long long _maxFavFileSize; // +0x30
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)totalCapacity;
- (void)setTotalCapacity:(unsigned long long)arg1;
- (unsigned long long)usedCapacity;
- (void)setUsedCapacity:(unsigned long long)arg1;
- (unsigned long long)maxAutoDownloadSize;
- (void)setMaxAutoDownloadSize:(unsigned long long)arg1;
- (unsigned long long)maxFavFileSize;
- (void)setMaxFavFileSize:(unsigned long long)arg1;
- (BOOL)bIsFirstTimeInFav;
- (void)setBIsFirstTimeInFav:(BOOL)arg1;
- (int)showFavIntroViewTimes;
- (void)setShowFavIntroViewTimes:(int)arg1;
- (BOOL)bHasCalculateFavItemSize;
- (void)setBHasCalculateFavItemSize:(BOOL)arg1;
- (BOOL)bHasFixedUploadStatus;
- (void)setBHasFixedUploadStatus:(BOOL)arg1;
- (BOOL)useNewTagLogic;
- (void)setUseNewTagLogic:(BOOL)arg1;
- (BOOL)hasGetFavSetting;
- (void)setHasGetFavSetting:(BOOL)arg1;
- (BOOL)enableMusicList;
- (void)setEnableMusicList:(BOOL)arg1;
- (BOOL)enableAiSearch;
- (void)setEnableAiSearch:(BOOL)arg1;
- (BOOL)enableStar;
- (void)setEnableStar:(BOOL)arg1;
@end
