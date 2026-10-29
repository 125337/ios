@interface CBTAsstBoardThinkingViewModel : CBTAsstBoardStreamTextViewModel <CBTStreamMDParseLogicDelegate, CBTStreamMDControllerDelegate>
{
    BOOL _isExpanded; // +0x8
    BOOL _pendingStopThinking; // +0x9
    BOOL _isUserToggling; // +0xa
    BOOL _isThinking; // +0xb
    BOOL _pendingThinkLinkShowReport; // +0xc
    NSString * _thinkingTitle; // +0x10
    NSString * _completedTitle; // +0x18
    double _maxWidth; // +0x20
    double _contentHeight; // +0x28
    id <CBTAsstBoardThinkingViewModelUIDelegate> _thinkingUIDelegate; // +0x30
    NSMutableArray * _pendingTitleUpdates; // +0x38
    unsigned long long _thinkDisplayTs; // +0x40
    unsigned long long _thinkLatencyMs; // +0x48
    long long _thinkDefaultExpand; // +0x50
    unsigned long long _thinkFirstTokenTs; // +0x58
    CBTStreamMDController * _mdController; // +0x60
}
- (void)enqueueThinkingTitle:(id)arg1;
- (void)checkPendingThinkingTitleWithOutputContent:(id)arg1;
- (void)onStreamMDControllerDidOutput:(id)arg1 controller:(id)arg2;
- (id)init;
- (id)initWithStreaming:(BOOL)arg1;
- (double)textContentWidthWithCellWidth:(double)arg1;
- (double)measureTextContentHeightWithWidth:(double)arg1;
- (double)cellHeightWithContentHeight:(double)arg1;
- (void)toggleExpanded;
- (void)stopThinking;
- (void)pushStreamText:(id)arg1 isEnd:(BOOL)arg2;
- (id)getLabelColor;
- (id)buildThinkLinkShowParamsFragmentWithNow:(unsigned long long)arg1;
- (id)buildThinkLinkFinishParamsFragmentWithFinishTime:(unsigned long long)arg1 interruptType:(id)arg2;
- (id)getCellReuseId;
- (id)defaultAttribute;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)hidesInMultiSelectMode;
- (BOOL)isThinkingProcessViewModel;
- (id)thinkingTitle;
- (id)completedTitle;
- (void)setCompletedTitle:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (BOOL)pendingStopThinking;
- (void)setPendingStopThinking:(BOOL)arg1;
- (BOOL)isUserToggling;
- (void)setIsUserToggling:(BOOL)arg1;
- (id)thinkingUIDelegate;
- (void)setThinkingUIDelegate:(id)arg1;
- (BOOL)isThinking;
- (void)setIsThinking:(BOOL)arg1;
- (id)pendingTitleUpdates;
- (void)setPendingTitleUpdates:(id)arg1;
- (BOOL)pendingThinkLinkShowReport;
- (void)setPendingThinkLinkShowReport:(BOOL)arg1;
- (unsigned long long)thinkDisplayTs;
- (void)setThinkDisplayTs:(unsigned long long)arg1;
- (unsigned long long)thinkLatencyMs;
- (void)setThinkLatencyMs:(unsigned long long)arg1;
- (long long)thinkDefaultExpand;
- (void)setThinkDefaultExpand:(long long)arg1;
- (unsigned long long)thinkFirstTokenTs;
- (void)setThinkFirstTokenTs:(unsigned long long)arg1;
- (id)mdController;
- (void)setMdController:(id)arg1;
- (void).cxx_destruct;
@end
