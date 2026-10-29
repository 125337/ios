@interface MMFinderLiveNoticePromotePubbleActor : NSObject <WCActionSheetDelegate>
{
    BOOL _isLastReserved; // +0x8
    BOOL _isLastHasPay; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    WCFinderBaseCgi * _reserveNoticeCGI; // +0x20
    WCLiveActionSheet * _actionSheet; // +0x28
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0x30
    MMFinderLiveNoticePromotePubbleContentView * _pubbleView; // +0x38
    UIViewController * _viewController; // +0x40
}
- (id)liveTask;
- (void)dealloc;
- (id)onPromoteBubbleActionExtraInfo;
- (long long)actionTypeForPromoteReport;
- (void)updateLastReserveState;
- (id)standardReportDict;
- (void)onActionButtonClick:(BOOL)arg1;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)pushToMembershipIntroVC;
- (id)reserveNoticeLogic;
- (void)handleSubscribeAction:(BOOL)arg1 isFromDetailView:(BOOL)arg2;
- (void)showActionSheetForUnReserveFromDetailView:(BOOL)arg1;
- (unsigned long long)getChangeState;
- (id)getLiveCGIExtentParamsWithOptype:(unsigned long long)arg1 isFromDetailView:(BOOL)arg2;
- (void)subscribeNotice:(BOOL)arg1 isFromDetailView:(BOOL)arg2;
- (void)changeNoticeStatus:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportForSubscribeNotice:(unsigned long long)arg1 isFromDetailNotice:(BOOL)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)reserveNoticeCGI;
- (void)setReserveNoticeCGI:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (BOOL)isLastReserved;
- (void)setIsLastReserved:(BOOL)arg1;
- (BOOL)isLastHasPay;
- (void)setIsLastHasPay:(BOOL)arg1;
- (void)setReserveNoticeLogic:(id)arg1;
- (id)pubbleView;
- (void)setPubbleView:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
