@interface WCFinderMentionTitleModel : NSObject
{
    BOOL _shouldShowFinderLogo; // +0x8
    BOOL _shouldShowFollowBtn; // +0x9
    WCFinderMention * _mention; // +0x10
    unsigned long long _aggregatedCount; // +0x18
    NSArray * _aggregatedContacts; // +0x20
    unsigned long long _aggregatedContactMaxLine; // +0x28
    NSString * _title; // +0x30
    NSString * _suffixTitle; // +0x38
    WCFinderAuthInfo * _authInfo; // +0x40
    NSString * _timeString; // +0x48
    NSArray * _interactionLabels; // +0x50
}
- (id)init;
- (id)aggregatedSuffixContentWithEllipsis:(BOOL)arg1;
- (id)getAccessibilityLabel;
- (id)mention;
- (void)setMention:(id)arg1;
- (unsigned long long)aggregatedCount;
- (void)setAggregatedCount:(unsigned long long)arg1;
- (id)aggregatedContacts;
- (void)setAggregatedContacts:(id)arg1;
- (unsigned long long)aggregatedContactMaxLine;
- (void)setAggregatedContactMaxLine:(unsigned long long)arg1;
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
- (void).cxx_destruct;
@end
