@interface MMFinderFeedNoticeModel : NSObject
{
    UIViewController * _findViewController; // +0x8
    UIView * _feedView; // +0x10
    NSMutableDictionary * _jumpInfoPanelDict; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x28
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x30
    WCFinderLiveAudienceNoticeReporter * _liveNoticeReporter; // +0x38
}
- (id)ticketHandle;
- (id)liveNoticeReporter;
- (id)getNotCreateTicketHandle;
- (id)findViewController;
- (void)setFindViewController:(id)arg1;
- (id)feedView;
- (void)setFeedView:(id)arg1;
- (id)jumpInfoPanelDict;
- (void)setJumpInfoPanelDict:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (void)setLiveNoticeReporter:(id)arg1;
- (void).cxx_destruct;
@end
