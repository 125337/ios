@interface MMFinderLiveNoticeListViewModel : NSObject <WCFinderLiveExt, MMFinderLiveCouponItemObserver>
{
    BOOL _isAuthoredByCurrentUser; // +0x8
    BOOL _isRequestingPreviousPage; // +0x9
    BOOL _isRequestingNextPage; // +0xa
    BOOL _blocksRequestingPages; // +0xb
    unsigned int _enterType; // +0xc
    int _reportScene; // +0x10
    MMFinderLiveNoticeMoreViewItem * _morePreviousPageViewItem; // +0x18
    MMFinderLiveNoticeMoreViewItem * _moreNextPageViewItem; // +0x20
    WCFinderLiveAudienceNoticeReporter * _noticeReporter; // +0x28
    id <MMFinderLiveNoticeListViewModelDelegate> _delegate; // +0x30
    WCFinderContact * _finderContact; // +0x38
    NSString * _targetNoticeId; // +0x40
    NSString * _promoterToken; // +0x48
    NSString * _qrCodeURL; // +0x50
    NSString * _qrCodeTargetNoticeID; // +0x58
    NSString * _refPageType; // +0x60
    unsigned long long _openScene; // +0x68
    FinderLiveNoticeListInfo * _originalNoticeList; // +0x70
    NSArray * _viewItems; // +0x78
    id /* block */ _onCustomReportNoticeDisplay; // +0x80
    id /* block */ _onCustomReportNoticeClick; // +0x88
    NSArray * _aggregateTypeArray; // +0x90
    NSArray * _infoViewItems; // +0x98
    NSMutableSet * _exposedNoticeIdSet; // +0xa0
}
- (id)init;
- (id)initWithFinderContact:(id)arg1 isAuthoredByCurrentUser:(BOOL)arg2 aggregateType:(unsigned int)arg3;
- (id)initWithFinderContact:(id)arg1 isAuthoredByCurrentUser:(BOOL)arg2 aggregateTypeArray:(id)arg3;
- (unsigned long long)totalNoticeCount;
- (unsigned long long)reservedNoticeCount;
- (id)viewItemForNoticeId:(id)arg1 indexPath:(id *)arg2;
- (void)reloadWithNoticeList:(id)arg1;
- (void)appendNoticeList:(id)arg1;
- (void)prependNoticeList:(id)arg1;
- (void)removeNoticeInfo:(id)arg1;
- (void)reloadViewItems;
- (void)didReloadData;
- (void)batchUpdateDataWithInsertedIndexes:(id)arg1;
- (void)didBatchUpdateDataWithRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 updatedIndexes:(id)arg3;
- (void)updateMoreViewItems;
- (id)viewItemWithNoticeInfo:(id)arg1;
- (id)morePreviousPageViewItem;
- (id)moreNextPageViewItem;
- (void)didDisplayViewItem:(id)arg1;
- (void)didViewNoticeInfo:(id)arg1;
- (void)refreshCurrentPage;
- (void)requestNextPage;
- (id)getLastNoticeInfo;
- (id)getFirstNoticeInfo;
- (void)requestNextPage:(BOOL)arg1;
- (void)requestPreviousPage;
- (void)didReloadReserveStatus;
- (id)getAudienceReserveLiveCGIExtentParamsForNoticeID:(id)arg1;
- (void)reserveNoticeInfo:(id)arg1 notShowAlertView:(BOOL)arg2 successAlert:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelReservingNoticeInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reserveAllNoticesWithCompletionHandler:(id /* block */)arg1;
- (void)cancelReservingAllNoticesWithCompletionHandler:(id /* block */)arg1;
- (void)getConcertTicketReceiveStatusForNoticeInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportShowExistingConcertTicketActionForNoticeInfo:(id)arg1;
- (id)noticeReporter;
- (id)baseAudienceNoticeReportParams:(id)arg1;
- (void)reportDisplayingNoticeInfo:(id)arg1;
- (void)reportReservingNoticeInfo:(id)arg1;
- (void)reportCancellingReservingNoticeInfo:(id)arg1;
- (void)reportReservingAllNoticeInfosWithList:(id)arg1;
- (void)reportCancellingReservingAllNoticeInfosWithList:(id)arg1;
- (id)dataReportDictWithNoticeInfo:(id)arg1;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 hasPurchase:(BOOL)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (void)onCouponDidUpdate:(id)arg1;
- (BOOL)isMemberNoticeScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderContact;
- (BOOL)isAuthoredByCurrentUser;
- (id)targetNoticeId;
- (void)setTargetNoticeId:(id)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
- (id)qrCodeURL;
- (void)setQrCodeURL:(id)arg1;
- (id)qrCodeTargetNoticeID;
- (void)setQrCodeTargetNoticeID:(id)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)refPageType;
- (void)setRefPageType:(id)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (id)originalNoticeList;
- (void)setOriginalNoticeList:(id)arg1;
- (id)viewItems;
- (void)setViewItems:(id)arg1;
- (BOOL)isRequestingPreviousPage;
- (void)setIsRequestingPreviousPage:(BOOL)arg1;
- (BOOL)isRequestingNextPage;
- (void)setIsRequestingNextPage:(BOOL)arg1;
- (BOOL)blocksRequestingPages;
- (void)setBlocksRequestingPages:(BOOL)arg1;
- (id /* block */)onCustomReportNoticeDisplay;
- (void)setOnCustomReportNoticeDisplay:(id /* block */)arg1;
- (id /* block */)onCustomReportNoticeClick;
- (void)setOnCustomReportNoticeClick:(id /* block */)arg1;
- (id)aggregateTypeArray;
- (void)setAggregateTypeArray:(id)arg1;
- (id)infoViewItems;
- (void)setInfoViewItems:(id)arg1;
- (id)exposedNoticeIdSet;
- (void)setExposedNoticeIdSet:(id)arg1;
- (void).cxx_destruct;
@end

