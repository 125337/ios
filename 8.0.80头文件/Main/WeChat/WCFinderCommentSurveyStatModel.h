@interface WCFinderCommentSurveyStatModel : NSObject
{
    BOOL _didReportEndExposure; // +0x8
    int _commentScene; // +0xc
    unsigned long long _taskID; // +0x10
    unsigned long long _surveyID; // +0x18
    long long _triggerType; // +0x20
    unsigned long long _questionIndex; // +0x28
    unsigned long long _commentAreaOpenAtTimestamp; // +0x30
    NSDictionary * _commonParams; // +0x38
    unsigned long long _selectedStarScore; // +0x40
    NSMutableSet * _reportedExposureQuestionIDs; // +0x48
    NSMutableSet * _reportedClickQuestionIDs; // +0x50
    unsigned long long _ratingSurveyExposeTsInMs; // +0x58
    unsigned long long _ratingSurveyExposeCommentStayTimeInMs; // +0x60
    unsigned long long _followUpSurveyExposeTsInMs; // +0x68
    unsigned long long _followUpSurveyExposeCommentStayTimeInMs; // +0x70
}
- (id)initWithTaskID:(unsigned long long)arg1 surveyID:(unsigned long long)arg2;
- (id)reportedExposureQuestionIDs;
- (id)reportedClickQuestionIDs;
- (BOOL)_canReportExtStatsWithQuestionID:(unsigned long long)arg1 contentVM:(id)arg2 contextInfo:(id)arg3;
- (void)_reportExtStatsWithFeedActionType:(int)arg1 contentVM:(id)arg2 contextInfo:(id)arg3;
- (void)extStatsReportQuestionExposureWithQuestionID:(unsigned long long)arg1 contentVM:(id)arg2 contextInfo:(id)arg3;
- (void)extStatsReportQuestionClickWithQuestionID:(unsigned long long)arg1 answerID:(unsigned long long)arg2 multiAnswerIDs:(id)arg3 contentVM:(id)arg4 contextInfo:(id)arg5;
- (void)extStatsReportSurveyEndExposureIfNeed:(id)arg1 contextInfo:(id)arg2;
- (unsigned long long)triggerTypeValue;
- (BOOL)recordRatingSurveyExposureIfNeeded;
- (id)ratingSurveyReportParams;
- (void)onFollowUpSurveyExpose;
- (id)followUpReportParams;
- (id)finishFollowUpReportParams:(id)arg1;
- (unsigned long long)taskID;
- (unsigned long long)surveyID;
- (long long)triggerType;
- (void)setTriggerType:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)questionIndex;
- (void)setQuestionIndex:(unsigned long long)arg1;
- (unsigned long long)commentAreaOpenAtTimestamp;
- (void)setCommentAreaOpenAtTimestamp:(unsigned long long)arg1;
- (id)commonParams;
- (void)setCommonParams:(id)arg1;
- (unsigned long long)selectedStarScore;
- (void)setSelectedStarScore:(unsigned long long)arg1;
- (void)setReportedExposureQuestionIDs:(id)arg1;
- (void)setReportedClickQuestionIDs:(id)arg1;
- (BOOL)didReportEndExposure;
- (void)setDidReportEndExposure:(BOOL)arg1;
- (unsigned long long)ratingSurveyExposeTsInMs;
- (void)setRatingSurveyExposeTsInMs:(unsigned long long)arg1;
- (unsigned long long)ratingSurveyExposeCommentStayTimeInMs;
- (void)setRatingSurveyExposeCommentStayTimeInMs:(unsigned long long)arg1;
- (unsigned long long)followUpSurveyExposeTsInMs;
- (void)setFollowUpSurveyExposeTsInMs:(unsigned long long)arg1;
- (unsigned long long)followUpSurveyExposeCommentStayTimeInMs;
- (void)setFollowUpSurveyExposeCommentStayTimeInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
