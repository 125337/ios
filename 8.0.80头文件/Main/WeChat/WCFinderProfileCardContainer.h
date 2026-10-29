@interface WCFinderProfileCardContainer : UIView
{
    multimap<NSString *, UIView *, ClassIdentifyEqual, std::allocator<std::pair<NSString *const, UIView *>>> _classMap; // +0x8
    BOOL _showBlurBG; // +0x20
    id <WCFinderProfileCardContainerExposeDelegate> _exposeDelegate; // +0x28
    unsigned long long _scene; // +0x30
    WCFinderSteamProfileHeaderTheme * _theme; // +0x38
    NSMutableArray * _lineViews; // +0x40
    NSMutableArray * _elements; // +0x48
    NSMutableDictionary * _viewClassMap; // +0x50
    NSArray * _displayViewArray; // +0x58
    NSMutableSet * _exposedItems; // +0x60
}
+ (BOOL)shouldDisplayViewWithTy:(long long)arg1 withData:(id)arg2;
+ (void)updateView:(id)arg1 ty:(long long)arg2 withData:(id)arg3 scene:(unsigned long long)arg4;
- (id)initWithFrame:(CGRect)arg1 scene:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1 withTheme:(id)arg2 scene:(unsigned long long)arg3;
- (void)registerViews;
- (void)update:(id /* block */)arg1;
- (void)updateWithCards:(vector<WCFinderProfileCard, std::allocator<WCFinderProfileCard>>)arg1;
- (void)pushCacheView:(id)arg1;
- (id)popCacheView:(Class)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)displayedViews;
- (void)updateElementsLayout:(id)arg1;
- (void)layoutLinesWithCount:(id)arg1;
- (void)ensureLinesWithCount:(long long)arg1;
- (void)installElements:(id)arg1;
- (void)unInstallViews:(id)arg1;
- (id)exposeDelegate;
- (void)setExposeDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (id)lineViews;
- (void)setLineViews:(id)arg1;
- (id)elements;
- (void)setElements:(id)arg1;
- (BOOL)showBlurBG;
- (void)setShowBlurBG:(BOOL)arg1;
- (id)viewClassMap;
- (void)setViewClassMap:(id)arg1;
- (id)displayViewArray;
- (void)setDisplayViewArray:(id)arg1;
- (id)exposedItems;
- (void)setExposedItems:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
