@interface ContactSelectionSearchReportLogic : NSObject
{
    BOOL _displayedResultsComplete; // +0x8
    BOOL _reportedResultsComplete; // +0x9
    UIView * _reportView; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _pendingQuery; // +0x28
    NSString * _pendingActionId; // +0x30
    NSString * _scheduledQuery; // +0x38
    NSString * _scheduledActionId; // +0x40
    NSString * _executingQuery; // +0x48
    NSString * _executingActionId; // +0x50
    NSString * _displayedActionId; // +0x58
    NSDictionary * _displayedResultTypes; // +0x60
    NSString * _reportedActionId; // +0x68
    NSDictionary * _reportedResultTypes; // +0x70
}
- (id)initWithScene:(unsigned long long)arg1;
- (BOOL)hasActiveSession;
- (void)beginSessionWithView:(id)arg1;
- (void)endSession;
- (void)searchTextDidChange:(id)arg1;
- (void)clearInput;
- (void)willScheduleSearchWithText:(id)arg1;
- (void)willExecuteSearchWithText:(id)arg1;
- (void)cancelSearch;
- (void)updateResultsWithContacts:(id)arg1 historyUsernames:(id)arg2 query:(id)arg3 isComplete:(BOOL)arg4;
- (void)reportCompletedEmptyResultsForQuery:(id)arg1;
- (void)reportResultsWithContacts:(id)arg1 historyUsernames:(id)arg2 query:(id)arg3 isComplete:(BOOL)arg4 updateDisplayedResults:(BOOL)arg5;
- (void)reportClickForContact:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (id)reportView;
- (void)setReportView:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)pendingQuery;
- (void)setPendingQuery:(id)arg1;
- (id)pendingActionId;
- (void)setPendingActionId:(id)arg1;
- (id)scheduledQuery;
- (void)setScheduledQuery:(id)arg1;
- (id)scheduledActionId;
- (void)setScheduledActionId:(id)arg1;
- (id)executingQuery;
- (void)setExecutingQuery:(id)arg1;
- (id)executingActionId;
- (void)setExecutingActionId:(id)arg1;
- (id)displayedActionId;
- (void)setDisplayedActionId:(id)arg1;
- (id)displayedResultTypes;
- (void)setDisplayedResultTypes:(id)arg1;
- (BOOL)displayedResultsComplete;
- (void)setDisplayedResultsComplete:(BOOL)arg1;
- (id)reportedActionId;
- (void)setReportedActionId:(id)arg1;
- (id)reportedResultTypes;
- (void)setReportedResultTypes:(id)arg1;
- (BOOL)reportedResultsComplete;
- (void)setReportedResultsComplete:(BOOL)arg1;
- (void).cxx_destruct;
@end
