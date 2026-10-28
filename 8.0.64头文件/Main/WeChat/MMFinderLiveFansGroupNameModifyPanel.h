@interface MMFinderLiveFansGroupNameModifyPanel : MMPageSheetBaseView
{
    BOOL _isKeyBoardShow; // +0x8
    NSString * _inputText; // +0x10
    id /* block */ _fansGroupNameModifiedCallback; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _contentView; // +0x28
    MMFinderLiveFansGroupInputView * _inputView; // +0x30
    MMUILabel * _fansGroupInputTipLabel; // +0x38
    UIButton * _modifyButton; // +0x40
    double _keyBoardHeight; // +0x48
}
- (id)initWithTaskId:(id)arg1;
- (void)initNotifications;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutInputView;
- (void)layoutFansGroupInputTipLabel;
- (void)layoutModifyButton;
- (double)contentWidth;
- (double)contentHeight;
- (double)getMaxPanelHeight;
- (void)updateModifyButtonOrigin;
- (void)updateDetailViewFrame;
- (void)onModifyButtonClicked:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateFansGroupName;
- (BOOL)getModifyButtonEnable;
- (void)setInputText:(id)arg1;
- (void)makeInputBecomeFirstResponder;
- (id)inputText;
- (id /* block */)fansGroupNameModifiedCallback;
- (void)setFansGroupNameModifiedCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)fansGroupInputTipLabel;
- (void)setFansGroupInputTipLabel:(id)arg1;
- (id)modifyButton;
- (void)setModifyButton:(id)arg1;
- (BOOL)isKeyBoardShow;
- (void)setIsKeyBoardShow:(BOOL)arg1;
- (double)keyBoardHeight;
- (void)setKeyBoardHeight:(double)arg1;
- (void).cxx_destruct;
@end
