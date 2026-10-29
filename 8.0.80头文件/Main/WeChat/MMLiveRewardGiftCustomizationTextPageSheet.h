@interface MMLiveRewardGiftCustomizationTextPageSheet : MMPageSheetBaseView <MMLiveSlottedTextFieldDelegate, UITextFieldDelegate, MMFinderLiveGiftResourceMgrExt>
{
    BOOL _detaching; // +0x8
    MMFinderLiveGiftCustomizationModel * _model; // +0x10
    id <MMLiveRewardGiftCustomizationTextPageSheetDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    NSString * _originalText; // +0x28
    double _keyboardHeight; // +0x30
    id <MMFinderLiveGiftCustomizationTextValidating> _validator; // +0x38
    unsigned long long _finalAction; // +0x40
    PAGFile * _pagFile; // +0x48
    UIScrollView * _scrollView; // +0x50
    PAGView * _previewView; // +0x58
    UILabel * _fullPriceLabel; // +0x60
    UILabel * _premiumPriceLabel; // +0x68
    MMLiveSlottedTextField * _primaryTextField; // +0x70
    UITextField * _fallbackTextField; // +0x78
    UILabel * _hintLabel; // +0x80
    UIButton * _clearButton; // +0x88
    UIButton * _confirmButton; // +0x90
}
- (id)initWithTaskId:(id)arg1 model:(id)arg2;
- (void)layoutSubviews;
- (void)pageSheetWillDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidDisappear;
- (void)onVoiceOverStatusChanged;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)onCanceled;
- (void)onConfirmed;
- (void)onCleared;
- (void)onFallbackTextFieldChanged;
- (BOOL)isCharacterStringValid:(id)arg1 inSlotIndex:(unsigned long long)arg2 forSlottedTextField:(id)arg3;
- (BOOL)isWeChatEmoticonValid:(id)arg1 inSlotIndex:(unsigned long long)arg2 forSlottedTextField:(id)arg3;
- (void)slottedTextFieldTextChanged:(id)arg1;
- (BOOL)slottedTextFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (void)initializeComponents;
- (void)loadPreview;
- (void)configureFullPriceLabelText;
- (void)configurePremiumPriceLabelText;
- (void)configureTextFields;
- (double)contentHeight;
- (id)liveTask;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)originalText;
- (void)setOriginalText:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)validator;
- (void)setValidator:(id)arg1;
- (BOOL)detaching;
- (void)setDetaching:(BOOL)arg1;
- (unsigned long long)finalAction;
- (void)setFinalAction:(unsigned long long)arg1;
- (id)pagFile;
- (void)setPagFile:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)fullPriceLabel;
- (void)setFullPriceLabel:(id)arg1;
- (id)premiumPriceLabel;
- (void)setPremiumPriceLabel:(id)arg1;
- (id)primaryTextField;
- (void)setPrimaryTextField:(id)arg1;
- (id)fallbackTextField;
- (void)setFallbackTextField:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
