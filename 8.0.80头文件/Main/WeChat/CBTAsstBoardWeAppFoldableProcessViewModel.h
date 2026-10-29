@interface CBTAsstBoardWeAppFoldableProcessViewModel : CBTAsstBoardBaseViewModel
{
    BOOL _isExpanded; // +0x8
    BOOL _isLoading; // +0x9
    BOOL _isUserToggling; // +0xa
    unsigned int _poiTextShowTime; // +0xc
    NSString * _title; // +0x10
    NSString * _sessionId; // +0x18
    long long _taskStartIndex; // +0x20
    double _maxHeight; // +0x28
    double _maxWidth; // +0x30
    double _processListHeight; // +0x38
    double _callUserViewHeight; // +0x40
    double _subTitleViewHeight; // +0x48
    id <CBTAsstBoardWeAppFoldableProcessViewModelUIDelegate> _uiDelegate; // +0x50
    NSMutableArray * _processItemContents; // +0x58
    CBTCallUserDisplayData * _currentCallUserDisplayData; // +0x60
    NSString * _currentSubTitle; // +0x68
    NSMutableArray * _processItems; // +0x70
    NSString * _currentTraceMsgid; // +0x78
    NSString * _currentAppId; // +0x80
    NSMutableArray * _svrIds; // +0x88
    AIWeAppProcessData * _curCallUserProcessData; // +0x90
    NSMutableSet * _reportedThinkTxtLinkAppIds; // +0x98
}
- (BOOL)hidesInMultiSelectMode;
- (BOOL)isThinkingProcessViewModel;
- (double)titleBarHeight;
- (double)processListTopSpacing;
- (double)callUserViewTopSpacing;
- (id)init;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)toggleExpanded;
- (void)pushAfterCallUserProcessData:(id)arg1;
- (void)pushProcessData:(id)arg1 svrId:(long long)arg2;
- (void)scanThinkTxtLinkExposureFromProcessData:(id)arg1;
- (void)pushPOIProcessData:(id)arg1;
- (id)agentInterruptSessionId;
- (void)stopProcess:(BOOL)arg1;
- (void)finishProcess;
- (void)finishProcessWithAnimationCompletion:(id /* block */)arg1;
- (void)clearProcessView;
- (void)handleCallUserLinkClicked:(id)arg1;
- (void)handleCallUserActionCompleted;
- (void)pushParamsAsProcessDataAfterAction;
- (id)parseCallUserContent:(id)arg1;
- (id)customLinkPattern;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isUserToggling;
- (void)setIsUserToggling:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)taskStartIndex;
- (void)setTaskStartIndex:(long long)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)processListHeight;
- (void)setProcessListHeight:(double)arg1;
- (double)callUserViewHeight;
- (void)setCallUserViewHeight:(double)arg1;
- (double)subTitleViewHeight;
- (void)setSubTitleViewHeight:(double)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (id)processItemContents;
- (void)setProcessItemContents:(id)arg1;
- (id)currentCallUserDisplayData;
- (void)setCurrentCallUserDisplayData:(id)arg1;
- (id)currentSubTitle;
- (void)setCurrentSubTitle:(id)arg1;
- (id)processItems;
- (void)setProcessItems:(id)arg1;
- (id)currentTraceMsgid;
- (void)setCurrentTraceMsgid:(id)arg1;
- (id)currentAppId;
- (void)setCurrentAppId:(id)arg1;
- (id)svrIds;
- (void)setSvrIds:(id)arg1;
- (id)curCallUserProcessData;
- (void)setCurCallUserProcessData:(id)arg1;
- (unsigned int)poiTextShowTime;
- (void)setPoiTextShowTime:(unsigned int)arg1;
- (id)reportedThinkTxtLinkAppIds;
- (void)setReportedThinkTxtLinkAppIds:(id)arg1;
- (void).cxx_destruct;
@end
