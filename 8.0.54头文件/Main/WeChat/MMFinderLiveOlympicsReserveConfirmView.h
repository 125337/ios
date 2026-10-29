@interface MMFinderLiveOlympicsReserveConfirmView : MMUIView
{
    UIView * _dialogView; // +0x8
    MMUILabel * _title; // +0x10
    MMUILabel * _subTitle; // +0x18
    UIButton * _closeButton; // +0x20
    UIButton * _reserveButton; // +0x28
    UIView * _vertLine; // +0x30
    UIView * _horiLine; // +0x38
    id /* block */ _actionBlock; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutUI;
- (void)showWithContact:(id)arg1 liveNoticeInfo:(id)arg2 actionBlock:(id /* block */)arg3;
- (void)onCloseButtonClick:(id)arg1;
- (void)onReserveButtonClick:(id)arg1;
- (id)dialogView;
- (void)setDialogView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)reserveButton;
- (void)setReserveButton:(id)arg1;
- (id)vertLine;
- (void)setVertLine:(id)arg1;
- (id)horiLine;
- (void)setHoriLine:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

