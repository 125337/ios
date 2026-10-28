@interface MMFinderLiveModifyMicSeatNamePanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, UITextFieldDelegate>
{
    id <MMFinderLiveModifyMicSeatNamePanelDelegate> _actionDelegate; // +0x8
    NSString * _originalSeatName; // +0x10
    unsigned long long _seatId; // +0x18
    MMFinderLiveConnectMicSeatBaseInfo * _micSeatBaseInfo; // +0x20
    UIButton * _doneButton; // +0x28
    MMUITextField * _textField; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 seatBaseInfo:(id)arg2;
- (void)layoutSubviews;
- (void)configPageSheetAndDetailView;
- (void)layoutTextField;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)checkIsSeatNameChanged;
- (void)pageSheetWillAppear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onClickPageSheetConfirmButton;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)originalSeatName;
- (void)setOriginalSeatName:(id)arg1;
- (unsigned long long)seatId;
- (void)setSeatId:(unsigned long long)arg1;
- (id)micSeatBaseInfo;
- (void)setMicSeatBaseInfo:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (void).cxx_destruct;
@end
