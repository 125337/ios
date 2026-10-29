@interface MMFinderLivePromotePubbleContentView : UIView
{
    BOOL _hasGetJumpInfo; // +0x8
    BOOL _isGettingJumpInfo; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _promoteId; // +0x18
    FinderLivePromoteMsgInfo * _currentPromoteMsgInfo; // +0x20
    UIView * _contentView; // +0x28
    NSString * _useSuggestions; // +0x30
    NSString * _customEndText; // +0x38
    id <MMFinderLiveOperationViewDelegate> _operationDelegate; // +0x40
    id /* block */ _closeAction; // +0x48
    id /* block */ _tapAction; // +0x50
    id /* block */ _actionReportCallback; // +0x58
    id /* block */ _firstFrameRenderredCompletion; // +0x60
    unsigned long long _currentContentMode; // +0x68
    MMFinderLivePromotePubbleCustomContentEndView * _customEndView; // +0x70
}
+ (id)createPromotePubbleContentWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
+ (void)reportForPromoteActions:(id)arg1 withLiveTask:(id)arg2;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (void)layoutSubviews;
- (void)addGestures;
- (BOOL)disableTapGesture;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutCustomEndView;
- (void)resetGetJumpInfoTag;
- (void)requestJumpInfo:(id /* block */)arg1;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (id)accessibilityValueString;
- (void)handleSingleTapGesture:(id)arg1;
- (BOOL)isCurrentPromoteMsgInfo:(id)arg1;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteMsgInfo:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)disMissSelf;
- (void)onClosed;
- (void)onShowed;
- (void)onDismissed;
- (void)onTapped;
- (void)displayContent:(unsigned long long)arg1;
- (void)reportForExpose;
- (void)reportForClick;
- (id)createPromoteActionReportItem:(unsigned long long)arg1;
- (id)liveTask;
- (BOOL)isCustomDisplaying;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)promoteId;
- (void)setPromoteId:(unsigned long long)arg1;
- (id)currentPromoteMsgInfo;
- (void)setCurrentPromoteMsgInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)hasGetJumpInfo;
- (void)setHasGetJumpInfo:(BOOL)arg1;
- (BOOL)isGettingJumpInfo;
- (void)setIsGettingJumpInfo:(BOOL)arg1;
- (id)useSuggestions;
- (void)setUseSuggestions:(id)arg1;
- (id)customEndText;
- (void)setCustomEndText:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id /* block */)actionReportCallback;
- (void)setActionReportCallback:(id /* block */)arg1;
- (id /* block */)firstFrameRenderredCompletion;
- (void)setFirstFrameRenderredCompletion:(id /* block */)arg1;
- (unsigned long long)currentContentMode;
- (void)setCurrentContentMode:(unsigned long long)arg1;
- (id)customEndView;
- (void)setCustomEndView:(id)arg1;
- (void).cxx_destruct;
@end

