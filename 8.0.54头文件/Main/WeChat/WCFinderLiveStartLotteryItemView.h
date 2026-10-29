@interface WCFinderLiveStartLotteryItemView : MMUIView <UITextFieldDelegate, WCActionSheetDelegate>
{
    BOOL _hasRectCorner; // +0x8
    BOOL _isShowSepelateLine; // +0x9
    BOOL _needFilterWhiteSpace; // +0xa
    BOOL _limitView; // +0xb
    BOOL _unableSelection; // +0xc
    BOOL _unableTextField; // +0xd
    unsigned int _maxInputWordCount; // +0x10
    id <WCFinderLiveStartLotteryItemViewDelegate> _delegate; // +0x18
    unsigned long long _rectCorner; // +0x20
    UIView * _containerView; // +0x28
    MMUILabel * _itemTextLabel; // +0x30
    MMUILabel * _itemSuffixLabel; // +0x38
    MMUITextField * _textField; // +0x40
    MMUILabel * _wordsCountTipsLabel; // +0x48
    UIImageView * _arrowImgView; // +0x50
    UISwitch * _uiSwitch; // +0x58
    UIView * _customView; // +0x60
    UIView * _itemTextSuffixView; // +0x68
    long long _itemType; // +0x70
    unsigned long long _maxInputNumber; // +0x78
    id /* block */ _inputNumberDidChanged; // +0x80
    UIView * _sepelateLine; // +0x88
    UIColor * _switchOnColor; // +0x90
}
- (id)initWithItemType:(long long)arg1;
- (void)layoutSubviews;
- (void)setSwitchOnColor:(id)arg1;
- (id)initWithItemType:(long long)arg1 rectCorner:(unsigned long long)arg2;
- (void)updateTextFieldEnable:(BOOL)arg1 text:(id)arg2 placeHolder:(id)arg3;
- (id)accessibilityLabel;
- (void)updateLiveStartLotteryItemViewRectCorner:(unsigned long long)arg1;
- (void)setupUI;
- (void)setIsShowSepelateLine:(BOOL)arg1;
- (void)layoutUI;
- (void)layoutWordsCountTipsLabel;
- (void)updateItemText:(id)arg1 customView:(id)arg2;
- (void)updateItemText:(id)arg1 itemTextSuffixView:(id)arg2 customView:(id)arg3;
- (void)updateItemText:(id)arg1 suffixText:(id)arg2 placeHolder:(id)arg3;
- (void)updateItemText:(id)arg1 suffixText:(id)arg2 placeHolder:(id)arg3 switchOn:(BOOL)arg4 itemTextSuffixView:(id)arg5;
- (void)setMaxInputWordCount:(unsigned int)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldShowKeyBoard;
- (void)handleSelfViewTapGesture:(id)arg1;
- (id)sepelateLine;
- (void)switchDidChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasRectCorner;
- (void)setHasRectCorner:(BOOL)arg1;
- (unsigned long long)rectCorner;
- (void)setRectCorner:(unsigned long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)itemTextLabel;
- (void)setItemTextLabel:(id)arg1;
- (id)itemSuffixLabel;
- (void)setItemSuffixLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)wordsCountTipsLabel;
- (void)setWordsCountTipsLabel:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)uiSwitch;
- (void)setUiSwitch:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)itemTextSuffixView;
- (void)setItemTextSuffixView:(id)arg1;
- (long long)itemType;
- (void)setItemType:(long long)arg1;
- (unsigned long long)maxInputNumber;
- (void)setMaxInputNumber:(unsigned long long)arg1;
- (unsigned int)maxInputWordCount;
- (id /* block */)inputNumberDidChanged;
- (void)setInputNumberDidChanged:(id /* block */)arg1;
- (BOOL)isShowSepelateLine;
- (void)setSepelateLine:(id)arg1;
- (BOOL)needFilterWhiteSpace;
- (void)setNeedFilterWhiteSpace:(BOOL)arg1;
- (BOOL)limitView;
- (void)setLimitView:(BOOL)arg1;
- (id)switchOnColor;
- (BOOL)unableSelection;
- (void)setUnableSelection:(BOOL)arg1;
- (BOOL)unableTextField;
- (void)setUnableTextField:(BOOL)arg1;
- (void).cxx_destruct;
@end

