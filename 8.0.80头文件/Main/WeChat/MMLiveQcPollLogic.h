@interface MMLiveQcPollLogic : NSObject <MMLiveQcPollResponseDelegate>
{
    BOOL _anyResponseReceived; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSMutableSet * _handledPolls; // +0x18
    MMLiveQcPoll * _currentPoll; // +0x20
    NSMutableArray * _questionStack; // +0x28
    MMFinderLivePromoteDisplayLease * _leadingQuestionDisplayLease; // +0x30
    MMLiveQcPollActivityFeed * _activityFeed; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)startPollTask:(id)arg1;
- (void)onFirstResponseOptionSelectedForQuestion:(id)arg1;
- (void)onResponseOptionsEntered:(id)arg1 forQuestion:(id)arg2;
- (void)onQuestionDismissedWithoutResponseEntered:(id)arg1;
- (void)showNextQuestion;
- (void)showQuestionWithLeasedPromotionalView:(id)arg1 duration:(double)arg2;
- (void)showQuestionWithPageSheet:(id)arg1;
- (void)commit;
- (void)reset;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)handledPolls;
- (void)setHandledPolls:(id)arg1;
- (id)currentPoll;
- (void)setCurrentPoll:(id)arg1;
- (id)questionStack;
- (void)setQuestionStack:(id)arg1;
- (id)leadingQuestionDisplayLease;
- (void)setLeadingQuestionDisplayLease:(id)arg1;
- (id)activityFeed;
- (void)setActivityFeed:(id)arg1;
- (BOOL)anyResponseReceived;
- (void)setAnyResponseReceived:(BOOL)arg1;
- (void).cxx_destruct;
@end
