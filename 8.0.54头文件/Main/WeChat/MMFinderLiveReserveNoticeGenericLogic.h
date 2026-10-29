@interface MMFinderLiveReserveNoticeGenericLogic : NSObject <WCActionSheetDelegate>
{
    unsigned int _scene; // +0x8
    int _reportScene; // +0xc
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x18
    MMUIViewController * _vc; // +0x20
    WCFinderContact * _contact; // +0x28
    WCLiveActionSheet * _actionSheet; // +0x30
    WCFinderBaseCgi * _reserveNoticeCGI; // +0x38
}
- (void)process:(id)arg1 handler:(id)arg2 vc:(id)arg3 contact:(id)arg4 reportScene:(int)arg5 scene:(unsigned int)arg6;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)handleSubscribeAction:(BOOL)arg1 isFromDetailView:(BOOL)arg2;
- (void)showActionSheetForUnReserve;
- (void)subscribeNotice:(BOOL)arg1 isFromDetailView:(BOOL)arg2;
- (void)changeNoticeStatus;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)ticketHandle;
- (void)setTicketHandle:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)reserveNoticeCGI;
- (void)setReserveNoticeCGI:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (void).cxx_destruct;
@end

