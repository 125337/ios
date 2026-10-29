@interface WCFinderSearchFeedTabGroupSession : NSObject
{
    WCFinderSearchFeedTabSession * _activeTab; // +0x8
    NSMutableArray * _mutTabs; // +0x10
}
- (BOOL)feedNotEmpty;
- (BOOL)displayTab;
- (id)mutTabs;
- (id)tabs;
- (id)activeTab;
- (void)setActiveTab:(id)arg1;
- (void)clean;
- (id)description;
- (void)setMutTabs:(id)arg1;
- (void).cxx_destruct;
@end

