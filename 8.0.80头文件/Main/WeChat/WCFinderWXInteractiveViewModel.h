@interface WCFinderWXInteractiveViewModel : NSObject <WCFinderHistorySwitchExtension>
{
    FinderNewUserPrepareResponse * _userPrepare; // +0x8
    NSMutableArray * _pages; // +0x10
    id <WCFinderWXInteractivePageDelegate> _delegate; // +0x18
}
+ (id)supportPages;
- (id)initWithUserPrepare:(id)arg1;
- (void)dealloc;
- (id)makeTabs;
- (void)onFinderHistorySwitchChanged:(BOOL)arg1;
- (id)userPrepare;
- (void)setUserPrepare:(id)arg1;
- (id)pages;
- (void)setPages:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
