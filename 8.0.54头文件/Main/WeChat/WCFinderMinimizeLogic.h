@interface WCFinderMinimizeLogic : NSObject <WCFinderFeedListVCFocusExt>
{
    NSString * _bizKey; // +0x8
    BOOL _floattingViewDisplaying; // +0x10
    BOOL _pageVCDisplayed; // +0x11
    BOOL _isPlayWhenEnter; // +0x12
    BOOL _isNeedMinimizeAnim; // +0x13
    MMUIViewController * _vc; // +0x18
    id <WCFinderMinimizeDelegate> _vcDelegate; // +0x20
    MinimizeTaskData * _taskData; // +0x28
    unsigned long long _cacheTimePoint; // +0x30
    WCFinderMinimizePlayCtrl * _playCtrl; // +0x38
    WCFinderMinimizePlayInfo * _playInfo; // +0x40
    MMUIViewController * _currentPageVC; // +0x48
    id <WCFinderMinimizeDelegate> _currentPageVCDelegate; // +0x50
    unsigned long long _createTime; // +0x58
    unsigned long long _closeTime; // +0x60
    unsigned long long _startPlayTime; // +0x68
    NSString * _floatId; // +0x70
    NSDictionary * _reportUDFKV; // +0x78
    WCFinderContextIdToken * _contextToken; // +0x80
    NSString * _extraInfo; // +0x88
}
- (void)dealloc;
- (BOOL)hiddenFloatingView;
- (id)bizName;
- (id)bizKey;
- (void)setBizKey:(id)arg1;
- (void)setVc:(id)arg1;
- (id)description;
- (void)installPlayCtrl:(id)arg1;
- (void)onFinderFeedListFocusChanged:(id)arg1 contentVM:(id)arg2;
- (id)vc;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (unsigned long long)cacheTimePoint;
- (void)setCacheTimePoint:(unsigned long long)arg1;
- (BOOL)floattingViewDisplaying;
- (void)setFloattingViewDisplaying:(BOOL)arg1;
- (BOOL)pageVCDisplayed;
- (void)setPageVCDisplayed:(BOOL)arg1;
- (BOOL)isPlayWhenEnter;
- (void)setIsPlayWhenEnter:(BOOL)arg1;
- (id)playCtrl;
- (void)setPlayCtrl:(id)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (BOOL)isNeedMinimizeAnim;
- (void)setIsNeedMinimizeAnim:(BOOL)arg1;
- (id)currentPageVC;
- (void)setCurrentPageVC:(id)arg1;
- (id)currentPageVCDelegate;
- (void)setCurrentPageVCDelegate:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)closeTime;
- (void)setCloseTime:(unsigned long long)arg1;
- (unsigned long long)startPlayTime;
- (void)setStartPlayTime:(unsigned long long)arg1;
- (id)floatId;
- (void)setFloatId:(id)arg1;
- (id)reportUDFKV;
- (void)setReportUDFKV:(id)arg1;
- (id)contextToken;
- (void)setContextToken:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

