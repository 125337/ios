@interface ChatBotVOIPBoardViewQuestionView : UIView
{
    QuestionInfo * _questionInfo; // +0x8
    UILabel * _titleView; // +0x10
    UILabel * _contentView; // +0x18
}
- (id)initWithQuestion:(id)arg1 frame:(CGRect)arg2;
- (void)initView;
- (void)updateQuestion:(id)arg1;
- (void)showStartText;
- (void)showNextText;
- (void)showEndText;
- (id)questionInfo;
- (void)setQuestionInfo:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
