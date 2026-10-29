@interface WCFinderMyTabEntranceViewController : MMUIViewController <WCFinderMyTabSectionControllerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _ignoreReload; // +0x70
    NSMapTable * _paramsMap; // +0x78
    UIScrollView * _scrollView; // +0x80
    NSMutableArray * _sections; // +0x88
    NSMapTable * _cardViewMap; // +0x90
    NSMapTable * _titleLabelMap; // +0x98
    NSMapTable * _reportInfoMap; // +0xa0
    NSDictionary * _combineReportInfo; // +0xa8
    CGSize _cacheContentSize; // +0xb0
}
+ (id)displaySections;
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (id)_makeSection:(Class)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)reloadData;
- (id)_makeSectionTitle:(id)arg1;
- (void)viewWillLayoutSubviews;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)_layoutElements;
- (void)_layoutElements:(BOOL)arg1;
- (void)_updateTitle:(id)arg1;
- (void)_layoutSection:(id)arg1 titleLabel:(id)arg2 originY:(double *)arg3 margin:(double)arg4;
- (void)_layoutSectionTitle:(id)arg1 originY:(double *)arg2 margin:(double)arg3;
- (void)onEntranceSectionDisplayChanged:(id)arg1;
- (void)entranceSectionSetNeedsLayout:(id)arg1;
- (id)entranceSectionRequestNavigationController;
- (void)onEntranceSection:(id)arg1 updateReportInfo:(id)arg2;
- (id)entranceSectionGetCombineReportInfo:(id)arg1;
- (void)registerYReportSdk;
- (id)paramsMap;
- (void)setParamsMap:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)cardViewMap;
- (void)setCardViewMap:(id)arg1;
- (id)titleLabelMap;
- (void)setTitleLabelMap:(id)arg1;
- (id)reportInfoMap;
- (void)setReportInfoMap:(id)arg1;
- (CGSize)cacheContentSize;
- (void)setCacheContentSize:(CGSize)arg1;
- (id)combineReportInfo;
- (void)setCombineReportInfo:(id)arg1;
- (BOOL)ignoreReload;
- (void)setIgnoreReload:(BOOL)arg1;
- (void).cxx_destruct;
@end
