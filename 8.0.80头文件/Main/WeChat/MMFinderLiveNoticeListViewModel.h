@interface MMFinderLiveNoticeListViewModel : NSObject <WCFinderLiveExt, MMFinderLiveCouponItemObserver>
{
    BOOL _isAuthoredByCurrentUser; // +0x8
    BOOL _syncLiveNoticeToIAM; // +0x9
    BOOL _isRequestingPreviousPage; // +0xa
    BOOL _isRequestingNextPage; // +0xb
    BOOL _blocksRequestingPages; // +0xc
    int _enterType; // +0x10
    int _reportScene; // +0x14
    unsigned int _reserveScene; // +0x18
    MMFinderLiveNoticeMoreViewItem * _morePreviousPageViewItem; // +0x20
    MMFinderLiveNoticeMoreViewItem * _moreNextPageViewItem; // +0x28
    WCFinderLiveAudienceNoticeReporter * _noticeReporter; // +0x30
    id <MMFinderLiveNoticeListViewModelDelegate> _delegate; // +0x38
    WCFinderContact * _finderContact; // +0x40
    NSString * _targetNoticeId; // +0x48
    NSString * _promoterToken; // +0x50
    NSString * _qrCodeURL; // +0x58
    NSString * _qrCodeTargetNoticeID; // +0x60
    NSString * _refPageType; // +0x68
    unsigned long long _openScene; // +0x70
    NSData * _liveCookies; // +0x78
    unsigned long long _refObjectId; // +0x80
    FinderLiveNoticeListInfo * _originalNoticeList; // +0x88
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x90
    NSArray * _viewItems; // +0x98
    id /* block */ _onCustomReportNoticeDisplay; // +0xa0
    id /* block */ _onCustomReportNoticeClick; // +0xa8
    id /* block */ _onCustomReportNoticeReserveClick; // +0xb0
    long long _noticeListReportSourceType; // +0xb8
    NSString * _contextFeedId; // +0xc0
    NSArray * _aggregateTypeArray; // +0xc8
    MMFinderLiveNoticeNextLiveNoticeViewItem * _nextLiveNoticeViewItem; // +0xd0
    NSArray * _infoViewItems; // +0xd8
    NSMutableSet * _exposedNoticeIdSet; // +0xe0
}
- (id)init;
- (id)initWithFinderContact:(id)arg1 isAuthoredByCurrentUser:(BOOL)arg2 aggregateType:(unsigned int)arg3;
- (id)initWithFinderContact:(id)arg1 isAuthoredByCurrentUser:(BOOL)arg2 aggregateTypeArray:(id)arg3 reserveScene:(unsigned int)arg4;
- (unsigned long long)totalNoticeCount;
- (unsigned long long)reservedNoticeCount;
- (id)viewItemForNoticeId:(id)arg1 indexPath:(id *)arg2;
- (void)reloadWithNoticeList:(id)arg1 nextLiveNoticeInfo:(id)arg2;
- (BOOL)canShowNextLiveNoticeInfo;
- (BOOL)hasReservedAllNormalNotice;
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
- (void)didChangeNoticeReservation:(id)arg1;
- (void)refreshCurrentPage;
- (void)refreshCurrentPageWithCompletionBlock:(id /* block */)arg1 nextLiveNoticeInfo:(id)arg2;
- (void)requestNextPage;
- (id)getLastNoticeInfo;
- (id)getFirstNoticeInfo;
- (void)requestNextPage:(BOOL)arg1 completionBlock:(id /* block */)arg2;
- (void)requestPreviousPage;
- (void)didReloadReserveStatus;
- (id)getAudienceReserveLiveCGIExtentParamsForNoticeID:(id)arg1 noticeScene:(long long)arg2;
- (void)modLiveNoticeTopStateWithNotice:(id)arg1 completeBlock:(id /* block */)arg2;
- (long long)reserveAllNoticeScene;
- (void)reserveNoticeInfo:(id)arg1 notShowAlertView:(BOOL)arg2 successAlert:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelReservingNoticeInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reserveAllNoticesWithCompletionHandler:(id /* block */)arg1;
- (void)cancelReservingAllNoticesWithCompletionHandler:(id /* block */)arg1;
- (void)reserveNextLiveNotice:(id)arg1 isReserve:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)getConcertTicketReceiveStatusForNoticeInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportShowExistingConcertTicketActionForNoticeInfo:(id)arg1;
- (id)noticeReporter;
- (long long)noticeScene;
- (id)reportCommentSceneString;
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
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)refPageType;
- (void)setRefPageType:(id)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (unsigned int)reserveScene;
- (void)setReserveScene:(unsigned int)arg1;
- (BOOL)syncLiveNoticeToIAM;
- (void)setSyncLiveNoticeToIAM:(BOOL)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)refObjectId;
- (void)setRefObjectId:(unsigned long long)arg1;
- (id)originalNoticeList;
- (void)setOriginalNoticeList:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
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
- (id /* block */)onCustomReportNoticeReserveClick;
- (void)setOnCustomReportNoticeReserveClick:(id /* block */)arg1;
- (long long)noticeListReportSourceType;
- (void)setNoticeListReportSourceType:(long long)arg1;
- (id)contextFeedId;
- (void)setContextFeedId:(id)arg1;
- (id)aggregateTypeArray;
- (void)setAggregateTypeArray:(id)arg1;
- (id)nextLiveNoticeViewItem;
- (void)setNextLiveNoticeViewItem:(id)arg1;
- (id)infoViewItems;
- (void)setInfoViewItems:(id)arg1;
- (id)exposedNoticeIdSet;
- (void)setExposedNoticeIdSet:(id)arg1;
- (void).cxx_destruct;
@end
