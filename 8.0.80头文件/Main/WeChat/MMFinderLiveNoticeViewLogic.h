@interface MMFinderLiveNoticeViewLogic : NSObject <MMFinderLiveNoticeDetailsViewControllerDelegate, WCFinderLiveNoticeViewDelegate>
{
    BOOL _isAuthorPerspective; // +0x8
    int _scene; // +0xc
    unsigned int _reserveScene; // +0x10
    id <MMFinderLiveNoticeViewLogicDelegate> _delegate; // +0x18
    FinderLiveNoticeInfo * _noticeInfo; // +0x20
    FinderLiveNoticeListInfo * _noticeList; // +0x28
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x30
    long long _sourceScene; // +0x38
    WCFinderContact * _anchorContact; // +0x40
    MMFinderLiveReserveNoticeLogic * _reserveNoticeLogic; // +0x48
}
- (id)initWithAnchorContact:(id)arg1 isAuthorPerspective:(BOOL)arg2 noticeInfo:(id)arg3 noticeList:(id)arg4 nextLiveNoticeInfo:(id)arg5;
- (void)dealloc;
- (void)fetchLiveNoticeListWithCompleteBlock:(id /* block */)arg1;
- (void)handleReserveAction;
- (void)handleNextLiveReserveAction;
- (void)realReserveNextLiveWithoutViewIsReserve:(BOOL)arg1;
- (id)anchorUserName;
- (id)reserveNoticeLogic;
- (void)onReserveLiveButtonClickedWithNoticeInfo:(id)arg1;
- (void)onShowMoreNoticesButtonClickedWithNoticeList:(id)arg1;
- (void)openNoticeListPageSheetWithNoticeListInfo:(id)arg1 anchorContact:(id)arg2;
- (id)getViewController;
- (void)reserveNextLiveNotice:(id)arg1 isReserve:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)realReserveNextLiveWithNoticeView:(id)arg1 isReserve:(BOOL)arg2;
- (void)modLiveNoticeTopStateWithNotice:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)createAndShowLiveNoticeQRCodeWithInfo:(id)arg1 anchorContact:(id)arg2;
- (void)showConcertTicketWithNoticeInfo:(id)arg1;
- (void)onClickFreeLiveNoticeView:(id)arg1;
- (void)onClickNeedPayLiveNoticeView:(id)arg1;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)didFinishModLiveNoticeFromViewController:(id)arg1 noticeInfo:(id)arg2;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)arg1;
- (void)onLiveNoticeViewNextLiveNoticesButtonClicked:(id)arg1;
- (void)onLiveNoticeViewTopNoticeButtonClicked:(id)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)onFinderLiveDidCreateNoticeInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)noticeList;
- (void)setNoticeList:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
- (BOOL)isAuthorPerspective;
- (void)setIsAuthorPerspective:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned int)reserveScene;
- (void)setReserveScene:(unsigned int)arg1;
- (long long)sourceScene;
- (void)setSourceScene:(long long)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (void)setReserveNoticeLogic:(id)arg1;
- (void).cxx_destruct;
@end
