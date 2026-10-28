@interface TPSelectTrackInfo : NSObject
{
    long long _selectTrackId; // +0x8
    long long _selectTrackStartTimeSinceBootMs; // +0x10
    TPTrackInfo * _trackInfo; // +0x18
}
- (long long)selectTrackId;
- (void)setSelectTrackId:(long long)arg1;
- (long long)selectTrackStartTimeSinceBootMs;
- (void)setSelectTrackStartTimeSinceBootMs:(long long)arg1;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg1;
- (void).cxx_destruct;
@end
