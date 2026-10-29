@interface RingTonePickerSectionController : MMTListSectionController <RingTonePickCollectionViewCellDelegate>
{
    unsigned long long _scene; // +0x8
    RingToneRecommendReporter_23604 * _reporter; // +0x10
    id <RingTonePickerSectionControllerDelegate> _delegate; // +0x18
    RingToneDetail * _ring; // +0x20
}
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (double)heightForRowAtIndex:(long long)arg1;
- (double)heightForHeader;
- (id)viewForHeader;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)willDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (void)jumpToAuthorPage:(id)arg1;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(BOOL)arg2;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (void).cxx_destruct;
@end

