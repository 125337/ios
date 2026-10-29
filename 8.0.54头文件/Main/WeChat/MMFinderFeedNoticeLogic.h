@interface MMFinderFeedNoticeLogic : NSObject <WCActionSheetDelegate>
{
    MMFinderFeedNoticeModel * _model; // +0x8
    id <MMFinderFeedNoticeLogicDelegate> _delegate; // +0x10
}
- (id)initWithModel:(id)arg1 delegate:(id)arg2;
- (void)updateWithModel:(id)arg1;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2 needHalfScreen:(BOOL)arg3 isFromDetailView:(BOOL)arg4;
- (void)onFinderJumpInfoView:(id)arg1 finderUsername:(id)arg2 showLiveNoticeInfo:(id)arg3;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)showLiveNoticePageSheetFromJumpInfoView:(id)arg1 withFinderUsername:(id)arg2 noticeInfo:(id)arg3;
- (void)showNoticeDetailViewFromJumpInfoView:(id)arg1 withFinderUsername:(id)arg2 noticeInfo:(id)arg3;
- (void)audienceOperateNoticeWithNotice:(id)arg1 anchorContact:(id)arg2;
- (void)hideLiveAppointment;
- (void)updateNoticeDetailView:(id)arg1;
- (void)onClickFreeLiveNotice:(id)arg1 username:(id)arg2 isFromDetailView:(BOOL)arg3;
- (void)onClickNeedPayLiveNotice:(id)arg1 username:(id)arg2 needHalfScreen:(BOOL)arg3 isFromDetailView:(BOOL)arg4;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2 opType:(unsigned long long)arg3 notShowAlertView:(BOOL)arg4 isFromDetailView:(BOOL)arg5;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)arg1;
- (void)checkAndPresentLiveConcertTicketWithNoticeInfo:(id)arg1 reportingScene:(unsigned long long)arg2;
- (void)presentLiveConcertTicketForNoticeInfo:(id)arg1 reportingScene:(unsigned long long)arg2;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

