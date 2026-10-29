@interface WCFinderNpsSurveyTrackInfo : NSObject
{
    unsigned long long _shownQuestionId; // +0x8
    unsigned long long _selectedAnswerId; // +0x10
    NSString * _inputAnswerText; // +0x18
    NSArray * _multiAnswerIDs; // +0x20
}
- (unsigned long long)shownQuestionId;
- (void)setShownQuestionId:(unsigned long long)arg1;
- (unsigned long long)selectedAnswerId;
- (void)setSelectedAnswerId:(unsigned long long)arg1;
- (id)inputAnswerText;
- (void)setInputAnswerText:(id)arg1;
- (id)multiAnswerIDs;
- (void)setMultiAnswerIDs:(id)arg1;
- (void).cxx_destruct;
@end
