@interface CBTAsstBoardTurnCompleteViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isLiked; // +0x8
    BOOL _isDisliked; // +0x9
    BOOL _isForLocalErrorBubble; // +0xa
    BOOL _readAloudAvailable; // +0xb
    BOOL _hasReadableRoundText; // +0xc
    unsigned int _completeTypeMask; // +0x10
    NSString * _source; // +0x18
    NSString * _aiSearchContent; // +0x20
    NSString * _answerAgent; // +0x28
    NSArray * _switchAgentList; // +0x30
    CBTAsstBoardResponseHistory * _responseHistory; // +0x38
    NSArray * _cachedReferenceSourceItems; // +0x40
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)agentDisplayName;
- (id)getCellReuseId;
- (BOOL)isSwitchAgentEnable;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)debugLogContent;
- (BOOL)isForwardable;
- (BOOL)hidesInMultiSelectMode;
- (BOOL)shouldReport;
- (id)cachedReferenceSourceItems;
- (BOOL)shouldDeactivateInteractiveViews;
- (void)didInsertIntoTableView;
- (id)source;
- (void)setSource:(id)arg1;
- (id)aiSearchContent;
- (void)setAiSearchContent:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (BOOL)isDisliked;
- (void)setIsDisliked:(BOOL)arg1;
- (id)answerAgent;
- (void)setAnswerAgent:(id)arg1;
- (id)switchAgentList;
- (void)setSwitchAgentList:(id)arg1;
- (unsigned int)completeTypeMask;
- (void)setCompleteTypeMask:(unsigned int)arg1;
- (BOOL)isForLocalErrorBubble;
- (void)setIsForLocalErrorBubble:(BOOL)arg1;
- (BOOL)readAloudAvailable;
- (void)setReadAloudAvailable:(BOOL)arg1;
- (BOOL)hasReadableRoundText;
- (void)setHasReadableRoundText:(BOOL)arg1;
- (id)responseHistory;
- (void)setResponseHistory:(id)arg1;
- (void)setCachedReferenceSourceItems:(id)arg1;
- (void).cxx_destruct;
@end
