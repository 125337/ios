@interface MMFinderLiveFansGroupGiftCustomizationPanel : MMPageSheetBaseView <UITextFieldDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _textEditing; // +0x8
    BOOL _changeCommiting; // +0x9
    id <MMFinderLiveFansGroupGiftCustomizationPanelDelegate> _delegate; // +0x10
    MMFinderLiveFansGroupCustomizableGiftItem * _giftItem; // +0x18
    MMFinderLiveFansGroupCustomizableGiftColorVariant * _currentColorVariant; // +0x20
    NSString * _currentColorVariantDefaultTextAttachment; // +0x28
    NSString * _currentTextAttachment; // +0x30
    UIView * _parentView; // +0x38
    UIView * _previewContainerView; // +0x40
    PAGFile * _currentPagFile; // +0x48
    PAGView * _previewPagView; // +0x50
    MMUITextField * _textField; // +0x58
    MMFinderLiveFansGroupGiftCustomizationPanelTextFieldGradientView * _textFieldGradientView; // +0x60
    UICollectionView * _colorVariantCollectionView; // +0x68
    UIView * _textEditLightDismissView; // +0x70
    double _keyboardHeight; // +0x78
    UIButton * _confirmButton; // +0x80
}
- (id)initWithGiftItem:(id)arg1;
- (void)onPageSheetContainerBgTapped;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onCustomizationConfirmed;
- (void)onCanceled;
- (void)onTextEditLightDismissed;
- (void)onTextFieldChanged;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setupPageSheetConfig;
- (id)navigationLeftButton;
- (id)navigationRightButton;
- (void)updateTitleWithGiftItem:(id)arg1;
- (void)setupNotifications;
- (void)preloadCustomGiftAnimations;
- (void)updateCurrentColorVariant:(id)arg1;
- (void)updateTextFieldAppearanceForSelected:(BOOL)arg1;
- (unsigned long long)validateTextAttachment:(id)arg1;
- (void)showToastForTextAttachmentValidationResult:(unsigned long long)arg1;
- (void)updateTextAttachmentToEffectiveValue;
- (void)updateTextAttachmentToPreviewValue;
- (id)originalTextAttachment;
- (BOOL)shouldConfirm;
- (void)updateConfirmButtonEnabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)currentColorVariant;
- (void)setCurrentColorVariant:(id)arg1;
- (id)currentColorVariantDefaultTextAttachment;
- (void)setCurrentColorVariantDefaultTextAttachment:(id)arg1;
- (id)currentTextAttachment;
- (void)setCurrentTextAttachment:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (id)previewContainerView;
- (void)setPreviewContainerView:(id)arg1;
- (id)currentPagFile;
- (void)setCurrentPagFile:(id)arg1;
- (id)previewPagView;
- (void)setPreviewPagView:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)textFieldGradientView;
- (void)setTextFieldGradientView:(id)arg1;
- (id)colorVariantCollectionView;
- (void)setColorVariantCollectionView:(id)arg1;
- (id)textEditLightDismissView;
- (void)setTextEditLightDismissView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (BOOL)textEditing;
- (void)setTextEditing:(BOOL)arg1;
- (BOOL)changeCommiting;
- (void)setChangeCommiting:(BOOL)arg1;
- (void).cxx_destruct;
@end

