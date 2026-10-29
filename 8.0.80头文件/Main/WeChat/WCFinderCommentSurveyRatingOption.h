@interface WCFinderCommentSurveyRatingOption : NSObject
{
    unsigned long long _score; // +0x8
    NSString * _wording; // +0x10
    unsigned long long _answerID; // +0x18
    WCFinderCommentSurveyFollowUpViewModel * _followUpViewModel; // +0x20
}
- (unsigned long long)score;
- (void)setScore:(unsigned long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (unsigned long long)answerID;
- (void)setAnswerID:(unsigned long long)arg1;
- (id)followUpViewModel;
- (void)setFollowUpViewModel:(id)arg1;
- (void).cxx_destruct;
@end
