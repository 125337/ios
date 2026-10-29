@interface TextStatePublishOperateUseCase : NSObject
{
    BOOL _shouldShowRedDotForPublish; // +0x8
    TextStateCardReporter * _cardReporter; // +0x10
    NSString * _passthroughIconId; // +0x18
    id /* block */ _onDeleteSuccessHandler; // +0x20
    NSString * _educationDescForPublish; // +0x28
    id /* block */ _textStateDynamicGetter; // +0x30
    MMUIViewController * _curViewController; // +0x38
}
- (id)initWithViewController:(id)arg1;
- (void)popupActionSheet:(id)arg1;
- (void)publishNewTextState;
- (void)editCurrentTextState;
- (void)__publishOrEditTextState:(id)arg1;
- (id)getSelfCurrentDisplayTextStateModel;
- (id)cardReporter;
- (void)setCardReporter:(id)arg1;
- (id)passthroughIconId;
- (void)setPassthroughIconId:(id)arg1;
- (id /* block */)onDeleteSuccessHandler;
- (void)setOnDeleteSuccessHandler:(id /* block */)arg1;
- (BOOL)shouldShowRedDotForPublish;
- (void)setShouldShowRedDotForPublish:(BOOL)arg1;
- (id)educationDescForPublish;
- (void)setEducationDescForPublish:(id)arg1;
- (id /* block */)textStateDynamicGetter;
- (void)setTextStateDynamicGetter:(id /* block */)arg1;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (void).cxx_destruct;
@end

