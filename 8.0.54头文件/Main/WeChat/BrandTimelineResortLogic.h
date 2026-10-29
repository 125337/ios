@interface BrandTimelineResortLogic : NSObject
{
    BOOL _hasTryResort; // +0x8
    BrandTimelineViewController * _timelineVC; // +0x10
}
- (void)tryResortOnEnterTimeline;
- (id)getResortContext:(id)arg1;
- (id)genResortCommItemFromExposeInfo:(id)arg1;
- (id)timelineVC;
- (void)setTimelineVC:(id)arg1;
- (BOOL)hasTryResort;
- (void)setHasTryResort:(BOOL)arg1;
- (void).cxx_destruct;
@end

