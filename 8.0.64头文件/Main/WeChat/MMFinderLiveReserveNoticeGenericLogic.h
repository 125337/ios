@interface MMFinderLiveReserveNoticeGenericLogic : NSObject <WCActionSheetDelegate>
{
    BOOL _suppressSuccessToasts; // +0x8
    unsigned int _scene; // +0xc
    int _reportScene; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x20
    MMUIViewController * _vc; // +0x28
    WCFinderContact * _contact; // +0x30
    WCLiveActionSheet * _actionSheet; // +0x38
    WCFinderBaseCgi * _reserveNoticeCGI; // +0x40
}
- (void)process:(id)arg1 handler:(id)arg2 vc:(id)arg3 contact:(id)arg4 reportScene:(int)arg5 scene:(unsigned int)arg6 completionBlock:(id /* block */)arg7;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)handleSubscribeAction:(BOOL)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)showActionSheetForUnReserveWithCompletionBlock:(id /* block */)arg1;
- (void)subscribeNotice:(BOOL)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)changeNoticeStatus;
- (BOOL)suppressSuccessToasts;
- (void)setSuppressSuccessToasts:(BOOL)arg1;
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
