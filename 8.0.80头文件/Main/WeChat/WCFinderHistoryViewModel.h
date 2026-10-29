@interface WCFinderHistoryViewModel : NSObject <WCFinderHistorySwitchExtension>
{
    BOOL _showSearchIcon; // +0x8
    id <WCFinderHistoryViewModelDelegate> _delegate; // +0x10
    NSArray * _tabs; // +0x18
    WCFinderHistoryPageModel * _displayTab; // +0x20
    long long _historyRecardDays; // +0x28
}
+ (id /* block */)mapSessionBlock;
- (id)init;
- (void)dealloc;
- (void)_requestTabData:(id)arg1;
- (void)makeTabs;
- (void)setDisplayTab:(id)arg1;
- (void)setShowSearchIcon:(BOOL)arg1;
- (BOOL)hasContent;
- (int)scene;
- (void)updateHistoryRecardDays:(long long)arg1;
- (void)updateNoMoreTips;
- (void)clear;
- (void)onFinderHistoryDeleteItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabs;
- (void)setTabs:(id)arg1;
- (id)displayTab;
- (long long)historyRecardDays;
- (void)setHistoryRecardDays:(long long)arg1;
- (BOOL)showSearchIcon;
- (void).cxx_destruct;
@end
