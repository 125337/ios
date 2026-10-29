@interface KidsWatchBaseViewController : MMUIViewController <UIScrollViewDelegate>
{
    BOOL _allowTapEndEditing; // +0x70
    BOOL _firstResponderOnceToken; // +0x71
    id <KidsWatchBaseViewControllerDelegate> _delegate; // +0x78
    WCSheetView * _sheetView; // +0x80
    UITapGestureRecognizer * _tapGesture; // +0x88
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (long long)overrideUserInterfaceStyle;
- (double)maxContentWidth;
- (double)contentWidth;
- (BOOL)respondToKeyboardEvent;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapDismissBarButtonItem;
- (void)onTapBackBarButtonItem;
- (void)onTapCloseBarButtonItem;
- (id)tapGesture;
- (void)setAllowTapEndEditing:(BOOL)arg1;
- (void)onTapGestureTap:(id)arg1;
- (BOOL)shouldEndEditForTappedView:(id)arg1;
- (void)initKeyboardEventListener;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)becomeFirstResponderOnce;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (BOOL)allowTapEndEditing;
- (void)setTapGesture:(id)arg1;
- (BOOL)firstResponderOnceToken;
- (void)setFirstResponderOnceToken:(BOOL)arg1;
- (void).cxx_destruct;
@end
