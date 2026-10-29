@interface ChatBotVOIPBoardViewStreamTextCell : ChatBotVOIPBoardViewBaseCell
{
    BOOL _isAnimating; // +0x8
    id <ChatBotStreamTextDelegate> _delegate; // +0x10
    NSMutableArray * _textQueue; // +0x18
    NSTimer * _animationTimer; // +0x20
    UILabel * _mainLabel; // +0x28
}
- (double)setupViewWithWidth:(double)arg1;
- (void)appendTextSegment:(id)arg1;
- (void)processNextSegment;
- (void)streamText:(id)arg1 completion:(id /* block */)arg2;
- (void)updateTextForLabel:(id)arg1;
- (void)updateBaseReportDataPB:(id)arg1;
- (CGRect)getMainLabelRect;
- (void)clearText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textQueue;
- (void)setTextQueue:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)animationTimer;
- (void)setAnimationTimer:(id)arg1;
- (id)mainLabel;
- (void)setMainLabel:(id)arg1;
- (void).cxx_destruct;
@end
