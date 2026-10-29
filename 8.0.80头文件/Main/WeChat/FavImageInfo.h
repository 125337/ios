@interface FavImageInfo : NSObject
{
    BOOL _isVideo; // +0x8
    NSString * _localId; // +0x10
    NSString * _dataId; // +0x18
    long long _updateTime; // +0x20
    NSString * _thumbPath; // +0x28
    NSNumber * _thumbWidth; // +0x30
    NSNumber * _thumbHeight; // +0x38
    NSNumber * _videoDuration; // +0x40
    NSNumber * _favItemLocalId; // +0x48
    NSString * _sectionTitle; // +0x50
}
+ (id)makeWithLocalId:(id)arg1 dataId:(id)arg2 updateTime:(long long)arg3 thumbPath:(id)arg4 thumbWidth:(id)arg5 thumbHeight:(id)arg6 isVideo:(BOOL)arg7 videoDuration:(id)arg8 favItemLocalId:(id)arg9 sectionTitle:(id)arg10;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)thumbWidth;
- (void)setThumbWidth:(id)arg1;
- (id)thumbHeight;
- (void)setThumbHeight:(id)arg1;
- (BOOL)isVideo;
- (void)setIsVideo:(BOOL)arg1;
- (id)videoDuration;
- (void)setVideoDuration:(id)arg1;
- (id)favItemLocalId;
- (void)setFavItemLocalId:(id)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (void).cxx_destruct;
@end
