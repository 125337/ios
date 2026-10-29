@interface WCAdFinderLiveNoticeLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenFinderLiveNoticeViewDelegate>
{
    BOOL _isDetail; // +0x8
    WCAdFinderLiveNoticeInfo * _adFinderLiveNoticeInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdHalfScreenFinderLiveNoticeView * _reserveSuccessHalfScreenView; // +0x20
}
- (id)initWithFinderLiveNoticeInfo:(id)arg1 dataItem:(id)arg2 isDetail:(BOOL)arg3;
- (void)start;
- (void)doFinderLiveNoticeReserve;
- (void)showReserveSuccessView;
- (void)onConfirmButtonClick;
- (id)adFinderLiveNoticeInfo;
- (void)setAdFinderLiveNoticeInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (id)reserveSuccessHalfScreenView;
- (void)setReserveSuccessHalfScreenView:(id)arg1;
- (void).cxx_destruct;
@end

