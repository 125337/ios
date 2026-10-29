@interface MMFinderLiveExposedGiftIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate>
{
    unsigned int _wecoinCount; // +0x8
    id /* block */ _cancelButtonClickedCallback; // +0x10
    id /* block */ _confirmButtonClickedCallback; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _contentView; // +0x28
    UILabel * _introTitleLabel; // +0x30
    UIButton * _cancelButton; // +0x38
    MMFinderLiveCoinButton * _confirmButton; // +0x40
}
- (id)initWithTaskId:(id)arg1 wecoinCount:(unsigned int)arg2;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (id)finderLiveTask;
- (void)onCancelButtonClicked;
- (id /* block */)cancelButtonClickedCallback;
- (void)setCancelButtonClickedCallback:(id /* block */)arg1;
- (id /* block */)confirmButtonClickedCallback;
- (void)setConfirmButtonClickedCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)introTitleLabel;
- (void)setIntroTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (unsigned int)wecoinCount;
- (void)setWecoinCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

