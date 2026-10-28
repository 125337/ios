@interface MMFinderLiveReservedRecordViewModel : NSObject
{
    BOOL _isFetching; // +0x8
    BOOL _hasMoreData; // +0x9
    int _enterType; // +0xc
    int _reportScene; // +0x10
    unsigned int _reserveScene; // +0x14
    unsigned int _reservedNoticeTotalCount; // +0x18
    id <MMFinderLiveReservedRecordViewModelDelegate> _delegate; // +0x20
    NSMutableArray * _reservedRecordList; // +0x28
    NSData * _lastBuffer; // +0x30
    NSString * _promoterToken; // +0x38
    NSString * _refPageType; // +0x40
    unsigned long long _openScene; // +0x48
    id /* block */ _onCustomReportNoticeDisplay; // +0x50
    id /* block */ _onCustomReportNoticeClick; // +0x58
    id /* block */ _onCustomReportNoticeReserveClick; // +0x60
}
- (id)init;
- (void)resetAndFetchReservedRecordList;
- (void)fetchNextReservedRecordList;
- (void)didViewNoticeInfo:(id)arg1;
- (void)didChangeNoticeReservation:(id)arg1;
- (void)reserveNoticeInfo:(id)arg1 anchorContact:(id)arg2 notShowAlertView:(BOOL)arg3 successAlert:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)cancelReservingNoticeInfo:(id)arg1 completionHandler:(id /* block */)arg2 anchorContact:(id)arg3;
- (void)getConcertTicketReceiveStatusForNoticeInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getAudienceReserveLiveCGIExtentParamsForNoticeID:(id)arg1;
- (void)reserveNextLiveNotice:(id)arg1 anchorContact:(id)arg2 isReserve:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reservedRecordList;
- (void)setReservedRecordList:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (id)promoterToken;
- (void)setPromoterToken:(id)arg1;
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
- (id /* block */)onCustomReportNoticeDisplay;
- (void)setOnCustomReportNoticeDisplay:(id /* block */)arg1;
- (id /* block */)onCustomReportNoticeClick;
- (void)setOnCustomReportNoticeClick:(id /* block */)arg1;
- (id /* block */)onCustomReportNoticeReserveClick;
- (void)setOnCustomReportNoticeReserveClick:(id /* block */)arg1;
- (unsigned int)reservedNoticeTotalCount;
- (void)setReservedNoticeTotalCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
