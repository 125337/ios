@interface ChatBotVOIPBoardViewWeAppCell : ChatBotVOIPBoardViewCardCell
{
    CreateAIWeAppCard * _weAppModel; // +0x8
    WAAgentResult * _weAppResult; // +0x10
    WAContact * _weAppContact; // +0x18
}
- (id)initWithMessage:(id)arg1;
- (void)changeImageViewContent;
- (void)updateReportData:(id)arg1;
- (void)onTapAction;
- (void)handleLongPress:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)menuOption1Tapped;
- (void)menuOption2Tapped;
- (void)openWeApp:(id)arg1;
- (id)weAppModel;
- (void)setWeAppModel:(id)arg1;
- (id)weAppResult;
- (void)setWeAppResult:(id)arg1;
- (id)weAppContact;
- (void)setWeAppContact:(id)arg1;
- (void).cxx_destruct;
@end
