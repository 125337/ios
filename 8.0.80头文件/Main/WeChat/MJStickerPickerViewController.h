@interface MJStickerPickerViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MJStickerPickerViewModelDelegate, MMGrowTextViewDelegate, IMMGrowTextViewExt, MJMovieTextActionProtocol>
{
    BOOL _isAppearing; // +0x8
    BOOL _usesLightTextPanelAppearance; // +0x9
    BOOL _isSelectingDefaultFancyTextStyle; // +0xa
    BOOL _usedDuoMaterialLayout; // +0xb
    id <MJStickerPickerViewControllerDelegate> _delegate; // +0x10
    id /* block */ _selectionIsValid; // +0x18
    NSString * _inputText; // +0x20
    MJStickerPickerViewModel * _viewModel; // +0x28
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x30
    NSIndexPath * _selectedIndexPath; // +0x38
    NSString * _textInputPlaceholder; // +0x40
    double _currentKeyboardHeight; // +0x48
    double _materialLayoutWidth; // +0x50
    UICollectionView * _contentView; // +0x58
    MJInspectorToolBar * _toolBar; // +0x60
    MJTextInputBar * _textInputBar; // +0x68
    UIView * _textInputBottomMaskView; // +0x70
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)setUsesLightTextPanelAppearance:(BOOL)arg1;
- (void)applyTextPanelAppearance;
- (void)setupTextInputBarConstraints;
- (double)textInputTopOffset;
- (void)addToolBarIfNeeded;
- (void)stickerPickerViewModelNotifyNeedsReload:(id)arg1;
- (void)reloadContentView;
- (void)setIsAppearing:(BOOL)arg1;
- (void)reloadData:(id)arg1;
- (void)updateInputPlaceholder:(id)arg1;
- (void)resetPreview;
- (void)updateOnSkimTimeDidChange:(struct)arg1;
- (void)updateOnPlaybackTimeDidChange:(struct)arg1;
- (void)updateOnIsPlayingDidChange:(BOOL)arg1;
- (void)fetchDatas;
- (void)setupTextInputState;
- (void)setSelectedIndexPath:(id)arg1;
- (void)reloadTextInputWithEntranceSegmentIfNeeded;
- (void)selectDefaultFancyTextStyleIfNeeded;
- (void)selectStickerAtIndexPath:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateSelect:(BOOL)arg1 withCell:(id)arg2;
- (void)onTextViewDidChange:(id)arg1;
- (id)textUnmarkedForTextView:(id)arg1;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)confirmButtonDidClick:(id)arg1;
- (id)textInputBar;
- (id)contentView;
- (id)textInputBottomMaskView;
- (BOOL)isReplacing;
- (void)rebindEntranceSegmentVM:(id)arg1;
- (BOOL)isAppearing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)selectionIsValid;
- (void)setSelectionIsValid:(id /* block */)arg1;
- (id)inputText;
- (void)setInputText:(id)arg1;
- (BOOL)usesLightTextPanelAppearance;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)selectedIndexPath;
- (BOOL)isSelectingDefaultFancyTextStyle;
- (void)setIsSelectingDefaultFancyTextStyle:(BOOL)arg1;
- (id)textInputPlaceholder;
- (void)setTextInputPlaceholder:(id)arg1;
- (double)currentKeyboardHeight;
- (void)setCurrentKeyboardHeight:(double)arg1;
- (double)materialLayoutWidth;
- (void)setMaterialLayoutWidth:(double)arg1;
- (BOOL)usedDuoMaterialLayout;
- (void)setUsedDuoMaterialLayout:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (id)toolBar;
- (void)setToolBar:(id)arg1;
- (void)setTextInputBar:(id)arg1;
- (void)setTextInputBottomMaskView:(id)arg1;
- (void).cxx_destruct;
@end
