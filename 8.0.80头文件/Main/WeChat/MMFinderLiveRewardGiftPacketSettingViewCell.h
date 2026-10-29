@interface MMFinderLiveRewardGiftPacketSettingViewCell : MMTableViewCell <MMFinderLiveGiftResourceMgrExt, UITextFieldDelegate>
{
    BOOL _bSelected; // +0x8
    UIImageView * _thumbnailView; // +0x10
    MMUILabel * _displayNameLabel; // +0x18
    MMUILabel * _priceLabel; // +0x20
    UIImageView * _coinIconView; // +0x28
    UIImageView * _selectedImageView; // +0x30
    MMUITextField * _countNumField; // +0x38
    MMUIButton * _addButton; // +0x40
    MMUIButton * _minusButton; // +0x48
    MMFinderLiveGiftPacketViewModel * _viewModel; // +0x50
    id /* block */ _becomeFirstResponderBlock; // +0x58
    id <MMFinderLiveRewardGiftPacketSettingViewCellDelegate> _cellDelegate; // +0x60
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)resetState;
- (void)updateWithViewModel:(id)arg1;
- (void)updateMinusButtonState;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)selectedButtonLeftMargin;
- (CGSize)selectedButtonSize;
- (id)selectedImageForSelectedButton;
- (id)unSelectedImageForSelectedButton;
- (void)onBackViewDidTaped:(id)arg1;
- (void)onSelectedImageViewDidTaped:(id)arg1;
- (void)onCountNumFieldResignFirstResponder;
- (void)onAddButtonClicked:(id)arg1;
- (void)onMinusButtonClicked:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)getDefaultGiftThumbImage;
- (id)getGiftDisplayName:(id)arg1;
- (id)getGiftIconImage:(id)arg1;
- (id)getGiftDiscription:(id)arg1;
- (id)getGiftDescriptionFont:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (BOOL)bSelected;
- (void)setBSelected:(BOOL)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)countNumField;
- (void)setCountNumField:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)minusButton;
- (void)setMinusButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)becomeFirstResponderBlock;
- (void)setBecomeFirstResponderBlock:(id /* block */)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (void).cxx_destruct;
@end
