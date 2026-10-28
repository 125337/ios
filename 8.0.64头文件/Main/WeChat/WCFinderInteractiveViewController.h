@interface WCFinderInteractiveViewController : WCFinderNavTabViewController
{
    WCFinderInteractiveCounts _counts; // +0x70
}
+ (id)createTitleWithIcon:(id)arg1 count:(long long)arg2;
- (id)initWithCounts:(WCFinderInteractiveCounts)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateRightBarButtonItems;
- (void)onLimitedClicked;
- (id)definePages;
- (void)onSearchClicked;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (WCFinderInteractiveCounts)counts;
- (void)setCounts:(WCFinderInteractiveCounts)arg1;
- (id).cxx_construct;
@end
