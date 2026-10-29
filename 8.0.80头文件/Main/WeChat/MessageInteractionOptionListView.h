@interface MessageInteractionOptionListView : UIView
{
    CMessageWrap * _msgWrap; // +0x8
    MessageInteractionOptionList * _optionList; // +0x10
    NSMutableArray * _buttonList; // +0x18
}
+ (double)interactionOptionsLineSpacing;
- (id)initWithInteractionOptions:(id)arg1 constrainedWdith:(double)arg2 msgWrap:(id)arg3;
- (void)setupButtons:(double)arg1;
- (void)onOptionClick:(id)arg1;
- (void)onOptionCallbackCompletion:(id)arg1;
- (void)resetAllButtonState;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)optionList;
- (void)setOptionList:(id)arg1;
- (id)buttonList;
- (void)setButtonList:(id)arg1;
- (void).cxx_destruct;
@end
