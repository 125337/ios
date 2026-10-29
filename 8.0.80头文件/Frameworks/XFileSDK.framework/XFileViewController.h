@interface XFileViewController :  <XFileOpenResultDelegate, XFilePasswordCancelDelegate, UIGestureRecognizerDelegate>
{
    unsigned char _cursorFlag; // +0x8
    BOOL _viewWillDisappear; // +0x9
    NSString * cachePath; // +0x10
    NSString * linksPath; // +0x18
    OpenFileParams _params; // +0x20
    OpenFileReportData _reportData; // +0x80
    UIEdgeInsets _appliedInsets; // +0x178
    double _appliedSideInset; // +0x198
    BOOL _excelAvoidBroken; // +0x1a0
    double _landscapeNotchInset; // +0x1a8
    BOOL _longPressHandled; // +0x1b0
    BOOL _hasLink; // +0x1b1
    BOOL _openDocumentSuccess; // +0x1b2
    BOOL _isExcel; // +0x1b3
    BOOL _isScrolling; // +0x1b4
    BOOL _shouldHandleSingleTap; // +0x1b5
    BOOL _surpportTextSelect; // +0x1b6
    BOOL _hasHideMagnifier; // +0x1b7
    BOOL _isShowMenu; // +0x1b8
    NSURL * _path; // +0x1c0
    NSTimer * _loadingTimer; // +0x1c8
    long long _bitmapWidth; // +0x1d0
    long long _bitmapHeight; // +0x1d8
    long long _sheetHeight; // +0x1e0
    long long _sheetMarginBottom; // +0x1e8
    id <XFileOpenResultDelegate> _openResultDelegate; // +0x1f0
    id <XFilePasswordCancelDelegate> _passwordCancelDelegate; // +0x1f8
    UIColor * _renderBackgroundColor; // +0x200
    UIColor * _excelRenderBackgroundColor; // +0x208
    double _renderTopInset; // +0x210
    UIView * _xfileContentView; // +0x218
    UIView * _xfileCanvasView; // +0x220
    MTKView * _mtkView; // +0x228
    XFileRenderer * _renderer; // +0x230
    double _scale; // +0x238
    NSTimer * _autoFrameTimer; // +0x240
    id <XFileSingleTapDelegate> _singleTapDelegate; // +0x248
    PageNumberView * _pageNumberView; // +0x250
    NSLayoutConstraint * _pageNumberTopConstraint; // +0x258
    NSLayoutConstraint * _pageNumberLeadingConstraint; // +0x260
    ScrollBarView * _scrollBarView; // +0x268
    SheetsView * _sheetsView; // +0x270
    UIView * _sheetSeparatorView; // +0x278
    LoadingView * _loadingView; // +0x280
    PasswordViewController * _passwordViewController; // +0x288
    TextSelectionCursorView * _cursor1; // +0x290
    TextSelectionCursorView * _cursor2; // +0x298
    double _cancelMagnifierOffset; // +0x2a0
    UIMenuController * _menu; // +0x2a8
    MagnifierView * _magnifierView; // +0x2b0
    CellTextViewerView * _cellTextViewerView; // +0x2b8
    CGPoint _initialTouchPoint; // +0x2c0
    CGPoint _cursorStartPosition; // +0x2d0
    CGPoint _cursorGestureStartPosition; // +0x2e0
}
+ (void)XFileSDKInit:(void * *)arg1 reporter:(void * *)arg2;
+ (void)XFileSDKInit:(void * *)arg1 reporter:(void * *)arg2 version:(long long)arg3;
+ (BOOL)isXFileSurpport:(id)arg1;
+ (id)xfileLinksDir;
+ (id)internalLinkPathForFileURL:(id)arg1 linksDir:(id)arg2;
+ (void)deleteXFileCache;
+ (void)checkVersionAndClearCacheIfNeeded;
+ (void)cleanupOrphanLinksInDirectory:(id)arg1;
- (id)init;
- (void)initPath;
- (void)initAdapter;
- (void)appDidBecomeActive:(id)arg1;
- (void)startHighFrame;
- (void)viewDidLoad;
- (void)loadFileURL:(id)arg1;
- (void)OpenDocument:(long long)arg1 path:(id)arg2 password:(id)arg3;
- (void)OpenDocumentComplete:(int)arg1;
- (void)setXFileSingleTapDelegate:(id)arg1;
- (void)setXFilePasswordCancelDelegate:(id)arg1;
- (void)setXFileOpenResultDelegate:(id)arg1;
- (void)setXFileRenderBackgroundColor:(id)arg1;
- (void)setXFileExcelRenderBackgroundColor:(id)arg1;
- (void)setXFileRenderTopInset:(double)arg1;
- (id)renderBackgroundColor;
- (id)excelRenderBackgroundColor;
- (id)currentBackgroundColor;
- (void)applyRenderBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)initLoadingView;
- (void)showLoading;
- (void)hideLoading;
- (void)initXFileCanvasView:(CGRect)arg1;
- (void)initPageNumberView;
- (void)initScrollBarView;
- (void)showScrollBar;
- (void)initCursorView;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (BOOL)isLandscape;
- (UIEdgeInsets)currentAvoidInsets;
- (double)landscapeNotchInset;
- (BOOL)breakExcelAvoidIfNeeded;
- (BOOL)syncSideInsetToCore;
- (double)renderTopInsetInContent;
- (double)renderTopInsetInContentHeight:(double)arg1;
- (double)pageNumberSideInsetInContentWidth:(double)arg1;
- (CGRect)scrollBarFrameInContentSize:(CGSize)arg1;
- (CGPoint)canvasOriginInSelfView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)restoreCellTextViewerIfNeeded:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)syncViewSizeChange;
- (void)syncCursorPositionOffset;
- (void)relocateCellTextViewerIfNeeded;
- (void)showCursor;
- (void)hideCursor;
- (void)showMenu;
- (void)hideMenu;
- (void)copyText:(id)arg1;
- (void)viewCellText:(id)arg1;
- (id)stringFromStdString:(const void *)arg1;
- (CGRect)excelSelectedCellRectInSelfView;
- (void)showCellTextViewerWithText:(id)arg1;
- (void)hideCellTextViewer;
- (void)removeCellTextViewerImmediately;
- (void)removePasswordViewController;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handleCursor1Pan:(id)arg1;
- (void)handleCursor2Pan:(id)arg1;
- (void)onCursorPositionUpdate:(id)arg1 gesture:(id)arg2;
- (void)handlePinch:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (BOOL)shouldHandleSingleTapAt:(id)arg1;
- (void)setAutoFrameTimer;
- (void)closeAutoFrame;
- (void)cancelAutoFrameTimer;
- (long long)GetFileSizeMb:(id)arg1;
- (void)dealloc;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)hasLink;
- (void)setHasLink:(BOOL)arg1;
- (id)loadingTimer;
- (void)setLoadingTimer:(id)arg1;
- (long long)bitmapWidth;
- (void)setBitmapWidth:(long long)arg1;
- (long long)bitmapHeight;
- (void)setBitmapHeight:(long long)arg1;
- (long long)sheetHeight;
- (void)setSheetHeight:(long long)arg1;
- (long long)sheetMarginBottom;
- (void)setSheetMarginBottom:(long long)arg1;
- (id)openResultDelegate;
- (void)setOpenResultDelegate:(id)arg1;
- (id)passwordCancelDelegate;
- (void)setPasswordCancelDelegate:(id)arg1;
- (BOOL)openDocumentSuccess;
- (void)setOpenDocumentSuccess:(BOOL)arg1;
- (BOOL)isExcel;
- (void)setIsExcel:(BOOL)arg1;
- (void)setRenderBackgroundColor:(id)arg1;
- (void)setExcelRenderBackgroundColor:(id)arg1;
- (double)renderTopInset;
- (void)setRenderTopInset:(double)arg1;
- (id)xfileContentView;
- (id)xfileCanvasView;
- (id)mtkView;
- (void)setMtkView:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (CGPoint)initialTouchPoint;
- (void)setInitialTouchPoint:(CGPoint)arg1;
- (id)autoFrameTimer;
- (void)setAutoFrameTimer:(id)arg1;
- (BOOL)shouldHandleSingleTap;
- (void)setShouldHandleSingleTap:(BOOL)arg1;
- (id)singleTapDelegate;
- (void)setSingleTapDelegate:(id)arg1;
- (id)pageNumberView;
- (id)pageNumberTopConstraint;
- (void)setPageNumberTopConstraint:(id)arg1;
- (id)pageNumberLeadingConstraint;
- (void)setPageNumberLeadingConstraint:(id)arg1;
- (id)scrollBarView;
- (id)sheetsView;
- (id)sheetSeparatorView;
- (id)loadingView;
- (id)passwordViewController;
- (BOOL)surpportTextSelect;
- (void)setSurpportTextSelect:(BOOL)arg1;
- (id)cursor1;
- (id)cursor2;
- (double)cancelMagnifierOffset;
- (void)setCancelMagnifierOffset:(double)arg1;
- (CGPoint)cursorStartPosition;
- (void)setCursorStartPosition:(CGPoint)arg1;
- (CGPoint)cursorGestureStartPosition;
- (void)setCursorGestureStartPosition:(CGPoint)arg1;
- (BOOL)hasHideMagnifier;
- (void)setHasHideMagnifier:(BOOL)arg1;
- (id)menu;
- (BOOL)isShowMenu;
- (void)setIsShowMenu:(BOOL)arg1;
- (id)magnifierView;
- (id)cellTextViewerView;
- (void)setCellTextViewerView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
