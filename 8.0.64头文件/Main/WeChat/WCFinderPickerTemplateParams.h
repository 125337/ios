@interface WCFinderPickerTemplateParams : NSObject
{
    BOOL _forbidChangeMusic; // +0x8
    BOOL _showLegalTipsViewIfNeed; // +0x9
    NSMutableArray * _omjTemplates; // +0x10
    unsigned long long _selectedIndex; // +0x18
    unsigned long long _eventId; // +0x20
    NSString * _followFeedId; // +0x28
}
- (id)currentSelectedTemplateId;
- (BOOL)forbidChangeMusic;
- (void)setForbidChangeMusic:(BOOL)arg1;
- (id)omjTemplates;
- (void)setOmjTemplates:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (BOOL)showLegalTipsViewIfNeed;
- (void)setShowLegalTipsViewIfNeed:(BOOL)arg1;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (id)followFeedId;
- (void)setFollowFeedId:(id)arg1;
- (void).cxx_destruct;
@end
