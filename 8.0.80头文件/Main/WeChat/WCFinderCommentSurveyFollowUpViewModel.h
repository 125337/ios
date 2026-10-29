@interface WCFinderCommentSurveyFollowUpViewModel : NSObject
{
    BOOL _allowsMultipleSelection; // +0x8
    unsigned long long _questionID; // +0x10
    NSString * _questionnaireTitle; // +0x18
    NSString * _submitButtonTitle; // +0x20
    NSArray * _options; // +0x28
    WCFinderCommentSurveyStatModel * _statModel; // +0x30
    NSMutableIndexSet * _selectedOptionIndexes; // +0x38
}
+ (id)viewModelWithSurveyQuestion:(id)arg1 statModel:(id)arg2;
- (id)selectedOptionIndexes;
- (BOOL)isOptionSelectedAtIndex:(unsigned long long)arg1;
- (void)toggleOptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)selectedAnswerID;
- (id)selectedMultiAnswerIDs;
- (id)unsatisfiedReason;
- (unsigned long long)questionID;
- (void)setQuestionID:(unsigned long long)arg1;
- (id)questionnaireTitle;
- (void)setQuestionnaireTitle:(id)arg1;
- (id)submitButtonTitle;
- (void)setSubmitButtonTitle:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)statModel;
- (void)setStatModel:(id)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setSelectedOptionIndexes:(id)arg1;
- (void).cxx_destruct;
@end
