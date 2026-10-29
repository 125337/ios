@interface RingToneContactSelectViewController : MMPageSheetBaseViewController <ContactSelectViewDelegate, MMPageSheetGestureRecognizerDelegate>
{
    MMLiveContactSelectView * _selectView; // +0x68
    id <RingToneContactSelectViewController> _liveContactDelegate; // +0x70
}
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (double)pageSheetContentHeight;
- (void)initView;
- (void)initPageSheet;
- (void)onSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)getSafeSearchViewController;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)dismissLiveContactSelect;
- (id)selectView;
- (void)setSelectView:(id)arg1;
- (id)liveContactDelegate;
- (void)setLiveContactDelegate:(id)arg1;
- (void).cxx_destruct;
@end

