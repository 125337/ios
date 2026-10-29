@interface WCFinderMyTabSectionController : NSObject
{
    BOOL _display; // +0x8
    NSString * _displayTitle; // +0x10
    id <WCFinderMyTabSectionControllerDelegate> _delegate; // +0x18
    NSMutableArray * _didBePopCallbackList; // +0x20
}
+ (Class)paramsClass;
+ (id)generateReportInfoFromCombines:(id)arg1;
+ (long long)mapAccountType:(BOOL)arg1 brandState:(long long)arg2;
- (id)init;
- (id)initWithParams:(id)arg1;
- (id)createDisplayCard;
- (void)onViewWillAppear;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (void)onViewWillBePushOrPresent;
- (void)onViewDidBePushOrPresent;
- (void)onViewWillBePopOrDismiss;
- (void)onViewDidBePopOrDismiss;
- (void)onViewWillPushOrPresent;
- (void)onViewDidPushOrPresent;
- (void)onViewWillPopOrDismiss;
- (void)onViewDidPopOrDismiss;
- (void)addPageDidBePopCallback:(id /* block */)arg1;
- (void)setDisplay:(BOOL)arg1;
- (void)setCardNeedsLayout;
- (id)navigationController;
- (void)updateReportInfo:(id)arg1;
- (id)combineReportInfo;
- (BOOL)display;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)didBePopCallbackList;
- (void)setDidBePopCallbackList:(id)arg1;
- (void).cxx_destruct;
@end
