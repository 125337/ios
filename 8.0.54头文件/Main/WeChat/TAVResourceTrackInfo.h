@interface TAVResourceTrackInfo : NSObject
{
    BOOL _useEmpty; // +0x8
    AVAssetTrack * _track; // +0x10
    struct _scaleToDuration; // +0x18
    struct _selectedTimeRange; // +0x30
}
- (id)track;
- (void)setTrack:(id)arg1;
- (struct)selectedTimeRange;
- (void)setSelectedTimeRange:(struct)arg1;
- (struct)scaleToDuration;
- (void)setScaleToDuration:(struct)arg1;
- (BOOL)useEmpty;
- (void)setUseEmpty:(BOOL)arg1;
- (void).cxx_destruct;
@end

