@interface WCFinderCommentSurveyRatingViewModel : NSObject
{
    BOOL _didClickCloseButton; // +0x8
    NSString * _title; // +0x10
    NSArray * _options; // +0x18
    WCFinderCommentSurveyRatingOption * _selectedOption; // +0x20
    WCFinderCommentSurveyStatModel * _statModel; // +0x28
    unsigned long long _questionID; // +0x30
    double _autoDisappearTime; // +0x38
    unsigned long long _configuredCommentPosition; // +0x40
    unsigned long long _state; // +0x48
    unsigned long long _presentedUnderCommentID; // +0x50
}
+ (id)viewModelWithSurveyTaskDataWrap:(id)arg1;
- (id)initWithTaskID:(unsigned long long)arg1 surveyID:(unsigned long long)arg2;
- (BOOL)selectOptionWithScore:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)selectedOption;
- (void)setSelectedOption:(id)arg1;
- (id)statModel;
- (void)setStatModel:(id)arg1;
- (unsigned long long)questionID;
- (void)setQuestionID:(unsigned long long)arg1;
- (double)autoDisappearTime;
- (void)setAutoDisappearTime:(double)arg1;
- (unsigned long long)configuredCommentPosition;
- (void)setConfiguredCommentPosition:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)didClickCloseButton;
- (void)setDidClickCloseButton:(BOOL)arg1;
- (unsigned long long)presentedUnderCommentID;
- (void)setPresentedUnderCommentID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
