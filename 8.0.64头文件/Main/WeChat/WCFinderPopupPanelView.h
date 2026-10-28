@interface WCFinderPopupPanelView : MMUIView
{
    BOOL _willCheckSlideReport; // +0x8
    id <WCFinderPopupPanelViewProtocol> _delegate; // +0x10
    WCFinderRedDotCtrlInfo * _cacheCtrlInfo; // +0x18
    long long _currentIndex; // +0x20
    WCFinderPopupPanelReportModel * _reportModel; // +0x28
    long long _tabType; // +0x30
    FinderPopupShowInfo * _popupShowInfo; // +0x38
    WCFinderPopupTipsView * _tipsView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)triggerReportActionByActionType:(unsigned long long)arg1 unexpReasonType:(unsigned long long)arg2;
- (id)getCurrentCgiEventEid;
- (id)genReportDicInfo;
- (void)setUpWithPopupShowInfo:(id)arg1;
- (void)beginShow;
- (id)getBindFeedId;
- (BOOL)isShowing;
- (void)reportSlideUpwardsReport;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cacheCtrlInfo;
- (void)setCacheCtrlInfo:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (BOOL)willCheckSlideReport;
- (void)setWillCheckSlideReport:(BOOL)arg1;
- (id)popupShowInfo;
- (void)setPopupShowInfo:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end
