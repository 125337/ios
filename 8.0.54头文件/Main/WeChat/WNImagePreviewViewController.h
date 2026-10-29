@interface WNImagePreviewViewController : MMUIViewController <UIScrollViewDelegate, WNImageActionSheetViewDelegate, WNSaveImageLogicExt>
{
    BOOL _isTrueScroll; // +0x68
    unsigned int _localId; // +0x6c
    UIView * _bottomView; // +0x70
    UIView * _longNoteView; // +0x78
    UIImage * _snapshotImage; // +0x80
    WNSaveImageLogic * _saveImageLogic; // +0x88
    UIView * _headerView; // +0x90
    UIButton * _closeBtn; // +0x98
    UIButton * _changeStyleBtn; // +0xa0
    double _lastContentOffset; // +0xa8
    UIScrollView * _longNoteScrollView; // +0xb0
    MMUILabel * _changeStyleLabel; // +0xb8
    WNImageActionSheetView * _actionSheetView; // +0xc0
    WNMultiImagesCollectionView * _multiImagesCollectionView; // +0xc8
    UIButton * _doneBtn; // +0xd0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (void)initView;
- (void)initHeaderView;
- (void)initBottomView;
- (void)initBackgroundView;
- (void)initActionSheetView;
- (void)onClose:(id)arg1;
- (void)onDone:(id)arg1;
- (void)onChangeStyle:(id)arg1;
- (void)onClickButtonWithType:(long long)arg1 andIndex:(long long)arg2;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (void)hiddenActionSheetViewWithRecordState:(BOOL)arg1;
- (void)changeImageStyle:(long long)arg1;
- (void)changeImageFontStyle:(long long)arg1;
- (void)changeImageBackgroudImage:(long long)arg1;
- (void)changeImageAlignment:(long long)arg1;
- (void)showLongNoteView;
- (void)showLongNoteWithView:(id)arg1;
- (void)showSquareNoteViews;
- (void)showSquareNoteWithViews:(id)arg1;
- (void)showRefuseGenerateView;
- (void)displayLongNoteView:(id)arg1 withSize:(CGSize)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSaveImage:(unsigned int)arg1;
- (double)getTopInsert;
- (double)getBottomInsert;
- (double)getActionViewHeight;
- (double)getBottomViewHeight;
- (double)getHeaderViewHeight;
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
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)changeStyleBtn;
- (void)setChangeStyleBtn:(id)arg1;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg1;
- (id)longNoteScrollView;
- (void)setLongNoteScrollView:(id)arg1;
- (id)changeStyleLabel;
- (void)setChangeStyleLabel:(id)arg1;
- (id)actionSheetView;
- (void)setActionSheetView:(id)arg1;
- (id)multiImagesCollectionView;
- (void)setMultiImagesCollectionView:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (BOOL)isTrueScroll;
- (void)setIsTrueScroll:(BOOL)arg1;
- (void).cxx_destruct;
@end

