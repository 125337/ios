@interface IntelligentMsgImgSavePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _hideOriginLabel; // +0x8
    id /* block */ _onConfirm; // +0x10
    long long _saveScene; // +0x18
    NSString * _originSize; // +0x20
    UIView * _contentView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _originLabel; // +0x38
    WCAgreementCheckBox * _checkBox; // +0x40
}
- (id)initWithSaveScene:(long long)arg1 originSize:(id)arg2 hideOriginLabel:(BOOL)arg3;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (id)titleLabel;
- (id)contentView;
- (id)checkBox;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (long long)saveScene;
- (void)setSaveScene:(long long)arg1;
- (id)originSize;
- (void)setOriginSize:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)originLabel;
- (void)setOriginLabel:(id)arg1;
- (void)setCheckBox:(id)arg1;
- (BOOL)hideOriginLabel;
- (void)setHideOriginLabel:(BOOL)arg1;
- (void).cxx_destruct;
@end
