@interface MMFinderLiveCompleteViewReplaySettingsStandardStrategy : NSObject <MMFinderLiveCompleteViewReplaySettingsStrategy>
{
    BOOL _commentConversionEnabled; // +0x8
    BOOL _membersExclusiveEnabled; // +0x9
    BOOL _membersExclusiveCapable; // +0xa
}
- (id)initWithMembersExclusiveCapability:(BOOL)arg1;
- (id)title;
- (id)descriptionText;
- (unsigned long long)applicableOptions;
- (void)setMembersExclusiveEnabled:(BOOL)arg1;
- (BOOL)commentConversionEnabled;
- (void)setCommentConversionEnabled:(BOOL)arg1;
- (BOOL)membersExclusiveEnabled;
- (BOOL)membersExclusiveCapable;
- (void)setMembersExclusiveCapable:(BOOL)arg1;
@end

