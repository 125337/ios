@interface WCFinderMentionTitleModel : NSObject
{
    BOOL _shouldShowFinderLogo; // +0x8
    BOOL _shouldShowFollowBtn; // +0x9
    BOOL _adjustsAuthIconSizeForDynamicType; // +0xa
    unsigned long long _displayStyle; // +0x10
    WCFinderMention * _mention; // +0x18
    unsigned long long _aggregatedCount; // +0x20
    NSArray * _aggregatedContacts; // +0x28
    unsigned long long _aggregatedContactMaxLine; // +0x30
    unsigned long long _aggregatedContactMaxCount; // +0x38
    NSString * _title; // +0x40
    NSString * _suffixTitle; // +0x48
    WCFinderAuthInfo * _authInfo; // +0x50
    NSString * _timeString; // +0x58
    NSArray * _interactionLabels; // +0x60
}
- (id)init;
- (id)aggregatedSuffixContentWithEllipsis:(BOOL)arg1;
- (id)getAccessibilityLabel;
- (void)setShouldShowFinderLogoAndAuthInfoWithMention:(id)arg1 isFinder:(BOOL)arg2 hasAuthInteractionLabel:(BOOL)arg3;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (unsigned long long)aggregatedCount;
- (void)setAggregatedCount:(unsigned long long)arg1;
- (id)aggregatedContacts;
- (void)setAggregatedContacts:(id)arg1;
- (unsigned long long)aggregatedContactMaxLine;
- (void)setAggregatedContactMaxLine:(unsigned long long)arg1;
- (unsigned long long)aggregatedContactMaxCount;
- (void)setAggregatedContactMaxCount:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)suffixTitle;
- (void)setSuffixTitle:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (BOOL)shouldShowFinderLogo;
- (void)setShouldShowFinderLogo:(BOOL)arg1;
- (id)timeString;
- (void)setTimeString:(id)arg1;
- (BOOL)shouldShowFollowBtn;
- (void)setShouldShowFollowBtn:(BOOL)arg1;
- (id)interactionLabels;
- (void)setInteractionLabels:(id)arg1;
- (BOOL)adjustsAuthIconSizeForDynamicType;
- (void)setAdjustsAuthIconSizeForDynamicType:(BOOL)arg1;
- (void).cxx_destruct;
@end
