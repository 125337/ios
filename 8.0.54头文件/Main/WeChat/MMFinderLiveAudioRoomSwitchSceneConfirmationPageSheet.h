@interface MMFinderLiveAudioRoomSwitchSceneConfirmationPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    unsigned long long _scenario; // +0x8
    id /* block */ _confirmBlock; // +0x10
    UILabel * _contentLabel; // +0x18
    UILabel * _descriptionLabel; // +0x20
}
- (id)initForScenario:(unsigned long long)arg1 confirmBlock:(id /* block */)arg2;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)initializeComponents;
- (BOOL)enableConfirm;
- (unsigned long long)scenario;
- (void)setScenario:(unsigned long long)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end

