@interface WCMomentsVisibilityCombinedTagOptions : NSObject
{
    BOOL _canEditTagLabel; // +0x8
    long long _enterScene; // +0x10
    long long _privacy; // +0x18
    unsigned long long _sourceScene; // +0x20
    NSMutableOrderedSet * _initialSelectedTagIdSet; // +0x28
    NSArray * _requiredTags; // +0x30
    NSArray * _disabledTags; // +0x38
}
- (id)init;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)initialSelectedTagIdSet;
- (void)setInitialSelectedTagIdSet:(id)arg1;
- (id)requiredTags;
- (void)setRequiredTags:(id)arg1;
- (id)disabledTags;
- (void)setDisabledTags:(id)arg1;
- (BOOL)canEditTagLabel;
- (void)setCanEditTagLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end
