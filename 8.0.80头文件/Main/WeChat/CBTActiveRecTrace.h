@interface CBTActiveRecTrace : NSObject
{
    BOOL _firstExpReported; // +0x8
    BOOL _firstClkReported; // +0x9
    long long _enterXiaoweiClkTsMs; // +0x10
    long long _viewWillAppearTsMs; // +0x18
    long long _createRoomTsMs; // +0x20
    long long _recommendCgiTsMs; // +0x28
    long long _recommendCgiResponseTsMs; // +0x30
}
- (long long)enterXiaoweiClkTsMs;
- (void)setEnterXiaoweiClkTsMs:(long long)arg1;
- (long long)viewWillAppearTsMs;
- (void)setViewWillAppearTsMs:(long long)arg1;
- (long long)createRoomTsMs;
- (void)setCreateRoomTsMs:(long long)arg1;
- (long long)recommendCgiTsMs;
- (void)setRecommendCgiTsMs:(long long)arg1;
- (long long)recommendCgiResponseTsMs;
- (void)setRecommendCgiResponseTsMs:(long long)arg1;
- (BOOL)firstExpReported;
- (void)setFirstExpReported:(BOOL)arg1;
- (BOOL)firstClkReported;
- (void)setFirstClkReported:(BOOL)arg1;
@end
