@interface MJCaptionGroupModel : NSObject <PBCoding>
{
    double _startTime; // +0x8
    double _duration; // +0x10
    MJCaptionEntryModel * _originalCaptionEntry; // +0x18
    NSArray * _translatedCaptionEntries; // +0x20
}
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_originalCaptionEntry;
+ (void)PBArrayAdd_translatedCaptionEntries;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCaptionGroup:(id)arg1;
- (id)toCaptionGroup;
- (BOOL)isValid;
- (id)description;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)originalCaptionEntry;
- (void)setOriginalCaptionEntry:(id)arg1;
- (id)translatedCaptionEntries;
- (void)setTranslatedCaptionEntries:(id)arg1;
- (void).cxx_destruct;
@end
