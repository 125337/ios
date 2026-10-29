@interface WeNoteNewImagePreviewViewController : MMUIViewController <UIScrollViewDelegate, WeNoteNewImageActionSheetViewDelegate, TextStatePublishViewControllerDelegate, WeNoteNewSaveImageLogicExt>
{
    BOOL _isTrueScroll; // +0x70
    BOOL _showingActionSheet; // +0x71
    unsigned int _localId; // +0x74
    UIView * _bottomView; // +0x78
    UIView * _longNoteView; // +0x80
    UIImage * _snapshotImage; // +0x88
    WeNoteNewSaveImageLogic * _saveImageLogic; // +0x90
    double _lastContentOffset; // +0x98
    UIScrollView * _longNoteScrollView; // +0xa0
    WeNoteNewImageActionSheetView * _actionSheetView; // +0xa8
    CAGradientLayer * _gradientLayer; // +0xb0
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initView;
- (void)initNavigationBar;
- (void)initBottomView;
- (void)setupGradientLayer;
- (void)updateGradientColors;
- (void)traitCollectionDidChange:(id)arg1;
- (id)createIconViewForIndex:(long long)arg1;
- (void)bottomBarButtonTapped:(id)arg1;
- (void)handleShareAction;
- (void)handleMomentAction;
- (id)ConvertImg2WCUploadTask:(id)arg1;
- (void)handleStateAction;
- (void)onTextStatePublished;
- (void)handleDownloadAction;
- (void)initBackgroundView;
- (void)initActionSheetView;
- (void)onClose:(id)arg1;
- (void)onDone:(id)arg1;
- (void)onChangeStyle:(id)arg1;
- (void)onClickButtonWithNewType:(long long)arg1 andIndex:(long long)arg2;
- (void)onActionSheetHeightChanged:(double)arg1;
- (void)onShowAuthorChanged:(BOOL)arg1;
- (void)onShowDateChanged:(BOOL)arg1;
- (CGPoint)calculateContentOffsetFromActionSheetHeight:(double)arg1;
- (void)changeImageFontStyle:(long long)arg1;
- (void)changeImageAlignment:(long long)arg1;
- (void)changeImageBackgroudImage:(long long)arg1;
- (void)showLongNoteView;
- (void)showLongNoteWithView:(id)arg1;
- (void)adjustContentOffsetForActionSheet;
- (void)displayLongNoteView:(id)arg1 withSize:(CGSize)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSaveImage:(unsigned int)arg1;
- (double)getTopInsert;
- (double)getBottomInsert;
- (double)getActionViewHeight;
- (double)getBottomViewHeight;
- (double)getTopInsetForNoteScrollView;
- (double)getMaxContentHeight;
- (void)reportSecurityCheckWithImage:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)longNoteView;
- (void)setLongNoteView:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)saveImageLogic;
- (void)setSaveImageLogic:(id)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg1;
- (id)longNoteScrollView;
- (void)setLongNoteScrollView:(id)arg1;
- (id)actionSheetView;
- (void)setActionSheetView:(id)arg1;
- (BOOL)isTrueScroll;
- (void)setIsTrueScroll:(BOOL)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (BOOL)showingActionSheet;
- (void)setShowingActionSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end
