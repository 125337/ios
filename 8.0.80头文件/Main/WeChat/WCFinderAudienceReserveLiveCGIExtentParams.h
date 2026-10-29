@interface WCFinderAudienceReserveLiveCGIExtentParams : NSObject
{
    NSString * _clientInfoStr; // +0x8
    WCFinderAudienceReserveLiveClientInfo * _clientInfoModel; // +0x10
    NSString * _qrCodeURL; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    NSData * _liveCookies; // +0x28
    NSString * _gMsgID; // +0x30
    NSData * _noticeReserveExtInfo; // +0x38
}
- (id)clientInfoModel;
- (id)getClientInfo;
- (id)clientInfoStr;
- (void)setClientInfoStr:(id)arg1;
- (void)setClientInfoModel:(id)arg1;
- (id)qrCodeURL;
- (void)setQrCodeURL:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)gMsgID;
- (void)setGMsgID:(id)arg1;
- (id)noticeReserveExtInfo;
- (void)setNoticeReserveExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
