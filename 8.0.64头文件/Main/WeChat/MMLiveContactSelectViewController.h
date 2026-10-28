@interface MMLiveContactSelectViewController : MMPageSheetBaseViewController <ContactSelectViewDelegate, MMPageSheetGestureRecognizerDelegate>
{
    long long _currentSelectType; // +0x70
    MMLiveContactSelectView * _selectView; // +0x78
    id <MMLiveContactSelectViewControllerDelegate> _liveContactDelegate; // +0x80
}
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)pageSheetContentHeight;
- (void)pageSheetWillAppear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)initView;
- (void)initPageSheet;
- (void)onSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)getSafeSearchViewController;
- (void)makeTopCell:(id)arg1;
- (void)onSelectTopCell;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)dismissLiveContactSelect;
- (long long)currentSelectType;
- (void)setCurrentSelectType:(long long)arg1;
- (id)selectView;
- (void)setSelectView:(id)arg1;
- (id)liveContactDelegate;
- (void)setLiveContactDelegate:(id)arg1;
- (void).cxx_destruct;
@end
