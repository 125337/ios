@interface FavNoteQuickEditorViewManager : MMObject <UIGestureRecognizerDelegate>
{
    BOOL _isHandlingFlutterScroll; // +0x8
    BOOL _isSelectionActive; // +0x9
    BOOL _isProcessing; // +0xa
    BOOL _isWeNoteSessionReady; // +0xb
    BOOL _hasPendingViewCreation; // +0xc
    UIViewController * _parentViewController; // +0x10
    UINavigationController * _navigationController; // +0x18
    MMFlutterViewController * _flutterViewController; // +0x20
    UIView * _flutterView; // +0x28
    UIView * _containerView; // +0x30
    UIView * _innerContainer; // +0x38
    MMFlutterInstance * _flutterInstance; // +0x40
    FavNoteQuickEditPlugin * _plugin; // +0x48
    FavNoteSelectionToolbarProxyPlugin * _selectionToolbarPlugin; // +0x50
    double _maxHeight; // +0x58
    double _navigationAreaHeight; // +0x60
    double _currentEditorHeight; // +0x68
    NSString * _currentText; // +0x70
    NSString * _sessionId; // +0x78
    NSString * _identifierId; // +0x80
    id /* block */ _heightChangedBlock; // +0x88
    WeNoteFlutterQuickVCLogic * _weNoteQuickController; // +0x90
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x98
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0xa0
    UIScrollView * _parentTableView; // +0xa8
    double _pendingMaxHeight; // +0xb0
    CGRect _pendingFrame; // +0xb8
}
- (id)initWithParentViewController:(id)arg1 navigationController:(id)arg2;
- (void)createWeNoteSession;
- (void)onAppWillResignActive;
- (void)onAppWillTerminate;
- (double)calculateMaxHeightWithKeyboardHeight:(double)arg1;
- (id)createContainerViewWithWidth:(double)arg1 navigationAreaHeight:(double)arg2;
- (void)updateContainerViewWidth:(double)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)notifySaveWeNote;
- (void)handleExpandClick;
- (id)containerView;
- (double)getContentHeight;
- (id)createFlutterViewWithFrame:(CGRect)arg1 maxHeight:(double)arg2;
- (void)setupPigeonAPI;
- (id)flutterApi;
- (void)sendMaxHeightToFlutter:(double)arg1;
- (id)getCurrentText;
- (void)clearText;
- (void)destroyFlutterView;
- (void)updateFlutterViewHeight:(double)arg1;
- (id)flutterView;
- (void)setHeightChangedBlock:(id /* block */)arg1;
- (void)onSelectionChangedIsSelected:(BOOL)arg1;
- (void)handleUpdateHeight:(double)arg1;
- (void)handleUpdateText:(id)arg1;
- (void)handleExpandClickWithText:(id)arg1;
- (void)refreshQuickEditor;
- (void)dismissKeyboard;
- (void)setupPanGestureRecognizer;
- (void)setParentTableView:(id)arg1;
- (void)checkStopRecord;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)isContentScrollable;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)parentViewController;
- (void)setParentViewController:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (void)setFlutterView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)innerContainer;
- (void)setInnerContainer:(id)arg1;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)selectionToolbarPlugin;
- (void)setSelectionToolbarPlugin:(id)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)navigationAreaHeight;
- (void)setNavigationAreaHeight:(double)arg1;
- (double)currentEditorHeight;
- (void)setCurrentEditorHeight:(double)arg1;
- (id)currentText;
- (void)setCurrentText:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)identifierId;
- (void)setIdentifierId:(id)arg1;
- (id /* block */)heightChangedBlock;
- (id)weNoteQuickController;
- (void)setWeNoteQuickController:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)parentTableView;
- (BOOL)isHandlingFlutterScroll;
- (void)setIsHandlingFlutterScroll:(BOOL)arg1;
- (BOOL)isSelectionActive;
- (void)setIsSelectionActive:(BOOL)arg1;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
- (BOOL)isWeNoteSessionReady;
- (void)setIsWeNoteSessionReady:(BOOL)arg1;
- (CGRect)pendingFrame;
- (void)setPendingFrame:(CGRect)arg1;
- (double)pendingMaxHeight;
- (void)setPendingMaxHeight:(double)arg1;
- (BOOL)hasPendingViewCreation;
- (void)setHasPendingViewCreation:(BOOL)arg1;
- (void).cxx_destruct;
@end
