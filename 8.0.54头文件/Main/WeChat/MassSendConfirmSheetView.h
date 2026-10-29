@interface MassSendConfirmSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _cancelBlock; // +0x8
    id /* block */ _confirmBlock; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UIView * _topSeperatorLineView; // +0x20
    MMUILabel * _contactDescLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIView * _bottomSperatorLineView; // +0x38
    NSArray * _contacts; // +0x40
}
- (id)initWithContacts:(id)arg1;
- (void)initConfigs;
- (void)initView;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)topSeperatorLineView;
- (void)setTopSeperatorLineView:(id)arg1;
- (id)contactDescLabel;
- (void)setContactDescLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)bottomSperatorLineView;
- (void)setBottomSperatorLineView:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (void).cxx_destruct;
@end

