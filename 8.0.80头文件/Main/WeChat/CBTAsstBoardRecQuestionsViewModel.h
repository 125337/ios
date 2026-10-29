@interface CBTAsstBoardRecQuestionsViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _pendingFQFirstTokenReport; // +0x8
    BOOL _hasReportedRemoval; // +0x9
    id <CBTAsstBoardRecQuestionsViewModelDelegate> _customDelegate; // +0x10
    double _exposureTimestamp; // +0x18
    unsigned long long _fqCompletedTimestampMs; // +0x20
    unsigned long long _reportAnswerCompletedTs; // +0x28
    unsigned long long _fqFirstTokenTimestampMs; // +0x30
    unsigned long long _reportQueryDisplayTs; // +0x38
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)getQuestions;
- (id)getCellReuseId;
- (id)questionFont;
- (struct)rendererConfig;
- (struct)measureLayoutForQuestion:(id)arg1 totalWidth:(double)arg2;
- (id)attributedStringForQuestion:(id)arg1 layout:(struct)arg2 arrowImage:(id)arg3 textColor:(id)arg4;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (void)didInsertIntoTableView;
- (void)onClickQuestion:(id)arg1;
- (void)reportFQCompleted;
- (id)buildFQClickedParamsWithQuestion:(id)arg1;
- (id)buildFQCompletedParams;
- (void)reportRemovalWithClickedQuestion:(id)arg1 removalReason:(long long)arg2;
- (void)onBoardDeactivate;
- (BOOL)isForwardable;
- (BOOL)shouldDeactivateInteractiveViews;
- (BOOL)hidesInMultiSelectMode;
- (id)customDelegate;
- (void)setCustomDelegate:(id)arg1;
- (double)exposureTimestamp;
- (void)setExposureTimestamp:(double)arg1;
- (unsigned long long)fqCompletedTimestampMs;
- (void)setFqCompletedTimestampMs:(unsigned long long)arg1;
- (BOOL)pendingFQFirstTokenReport;
- (void)setPendingFQFirstTokenReport:(BOOL)arg1;
- (unsigned long long)reportAnswerCompletedTs;
- (void)setReportAnswerCompletedTs:(unsigned long long)arg1;
- (unsigned long long)fqFirstTokenTimestampMs;
- (void)setFqFirstTokenTimestampMs:(unsigned long long)arg1;
- (unsigned long long)reportQueryDisplayTs;
- (void)setReportQueryDisplayTs:(unsigned long long)arg1;
- (BOOL)hasReportedRemoval;
- (void)setHasReportedRemoval:(BOOL)arg1;
- (void).cxx_destruct;
@end
