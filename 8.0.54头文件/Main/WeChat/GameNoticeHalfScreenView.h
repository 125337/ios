@interface GameNoticeHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, GameNoticeAdditionalInfoViewDelegate>
{
    GameNoticeInfo * _noticeInfo; // +0x8
    id <GameNoticeHalfScreenViewDelegate> _delegate; // +0x10
    MMWebImageView * _infoIcon; // +0x18
    UILabel * _titleLabel; // +0x20
    GameNoticeAdditionalInfoView * _additionalView; // +0x28
    FixTitleColorButton * _confirmButton; // +0x30
    UIButton * _checkButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)checkButtonClicked;
- (void)setNoticeInfo:(id)arg1;
- (double)detailViewHeight;
- (id)titleForConfirmButton;
- (void)onConfirmButtonClick;
- (void)pageSheetDidDisappear;
- (void)additionalButtonDidClick;
- (id)noticeInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)infoIcon;
- (void)setInfoIcon:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)additionalView;
- (void)setAdditionalView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)checkButton;
- (void)setCheckButton:(id)arg1;
- (void).cxx_destruct;
@end

