@interface MJCaptionGroup : NSObject
{
    MJCaptionEntry * _originalCaptionEntry; // +0x8
    NSArray * _translatedCaptionEntries; // +0x10
    struct _timeRange; // +0x18
}
- (id)initWithTimeRange:(struct)arg1 originalCaptionEntry:(id)arg2 translatedCaptionEntries:(id)arg3;
- (id)copyWithSpeedRatio:(double)arg1;
- (id)description;
- (struct)timeRange;
- (id)originalCaptionEntry;
- (id)translatedCaptionEntries;
- (void).cxx_destruct;
@end

