@interface WCFinderTabPageModel : NSObject
{
    BOOL _preLoadWhileScrolling; // +0x8
    BOOL _tabViewNotBindRedDotPath; // +0x9
    UIViewController * _viewController; // +0x10
    NSString * _tabTitleName; // +0x18
    NSString * _selectTabTitleName; // +0x20
    NSString * _unselectTabTitleName; // +0x28
    NSString * _bindRedDotPath; // +0x30
    UIView<WCFinderTabViewProtocol> * _tabView; // +0x38
    NSString * _accessibilityLabel; // +0x40
}
- (id)init;
- (BOOL)useSelectedAndUnSelectedTitle;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)tabTitleName;
- (void)setTabTitleName:(id)arg1;
- (id)selectTabTitleName;
- (void)setSelectTabTitleName:(id)arg1;
- (id)unselectTabTitleName;
- (void)setUnselectTabTitleName:(id)arg1;
- (id)bindRedDotPath;
- (void)setBindRedDotPath:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (BOOL)preLoadWhileScrolling;
- (void)setPreLoadWhileScrolling:(BOOL)arg1;
- (BOOL)tabViewNotBindRedDotPath;
- (void)setTabViewNotBindRedDotPath:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (void).cxx_destruct;
@end
