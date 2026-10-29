@interface WCFinderNpsSurveyView : MMUIView <MMStarRatingViewDelegate>
{
    id /* block */ _answerButtonClickedBlock; // +0x8
    id /* block */ _starRatingViewClickedBlock; // +0x10
    FinderNpsSurveyTaskConf * _taskConf; // +0x18
    FinderNpsSurveyQuestion * _surveyQuestion; // +0x20
    UILabel * _questionLabel; // +0x28
    NSMutableArray * _answerButtonList; // +0x30
    MMStarRatingView * _starRatingView; // +0x38
}
- (void)updateTaskConf:(id)arg1 surveyQuestion:(id)arg2;
- (id)questionLabel;
- (id)answerButtonList;
- (id)starRatingView;
- (void)removeAnswerButtonList;
- (void)removeStarRatingView;
- (void)addQuestionLabelAndAnswerButtonList;
- (void)addQuestionLabelAndStarRatingView;
- (void)flexLayoutQuestionLabelAndAnswerButtonList;
- (void)flexLayoutQuestionLabelAndStarRatingView;
- (void)onAnswerButtonClicked:(id)arg1;
- (void)starRatingView:(id)arg1 scorePercentDidChange:(double)arg2;
- (id /* block */)answerButtonClickedBlock;
- (void)setAnswerButtonClickedBlock:(id /* block */)arg1;
- (id /* block */)starRatingViewClickedBlock;
- (void)setStarRatingViewClickedBlock:(id /* block */)arg1;
- (id)taskConf;
- (void)setTaskConf:(id)arg1;
- (id)surveyQuestion;
- (void)setSurveyQuestion:(id)arg1;
- (void)setQuestionLabel:(id)arg1;
- (void)setAnswerButtonList:(id)arg1;
- (void)setStarRatingView:(id)arg1;
- (void).cxx_destruct;
@end

