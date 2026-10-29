@interface WCPayF2FReceiveDetailControlLogic : WCPayControlLogic <WCPayF2FReceiveDetailViewControllerDelegate, WCPayGetF2FReceiveDetailDataCgiDelegate, WCPayF2FDeleteRecordCgiDelegate, WCPayF2FReceiveHistoryViewControllerDelegate, WCPayF2FGetReceiveHistoryCgiDelegate, PBMessageObserverDelegate, IOplogExt, WCPayF2FAnnouncementCgiDelegate>
{
    BOOL _bIsBackFromRootDetailViewController; // +0x38
    BOOL _bNeedUpdateHistoryList; // +0x39
    BOOL _m_isSoundOn; // +0x3a
    unsigned long long _detailFromScene; // +0x40
    unsigned long long _jsApiFromTimeStamp; // +0x48
    WCPayGetF2FReceiveDetailDataCgi * _getReceiveDetailCgi; // +0x50
    WCPayF2FDeleteRecordCgi * _deleteRecordCgi; // +0x58
    WCPayF2FGetReceiveHistoryCgi * _getReceiveHistoryCgi; // +0x60
    WCPayF2FReceiveHistoryResponse * _curHistoryResp; // +0x68
    unsigned long long _lastHistoryReqTimeFormat; // +0x70
    unsigned long long _lastHistoryPreviousTimestamp; // +0x78
    unsigned long long _lastHistoryNewerTimestamp; // +0x80
    WCPayF2FAnnouncementCgi * _getAnnouncementCgi; // +0x88
}
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithTimeStamp:(unsigned long long)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)getF2FAnnouncement;
- (void)onWCPayF2FGetAnnouncement:(id)arg1;
- (unsigned long long)getCurrentDetailFromScene;
- (void)f2fReceiveDetailViewControllerBack;
- (void)f2fReceiveDetailViewControllerClickHistoryBtn;
- (void)f2fReceiveDetailViewControllerDidSelectRecord:(id)arg1;
- (void)f2fReceiveDetailViewControllerLoadMoreRecordWithLastRecord:(id)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveDetailViewControllerDeleteRecord:(id)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerBack;
- (void)f2fReceiveHistoryViewControllerClickItemWithTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerDidSelectTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerLoadMorePreviousItem:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)f2fReceiveHistoryViewControllerLoadMoreNewItem:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (void)getTodayReceiveDetailData;
- (void)getReceiveHistoryData;
- (void)sendReceiveHistoryRequestWithTimeStamp:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 chooseFlag:(unsigned long long)arg3 loadmoreDirection:(unsigned long long)arg4;
- (void)onGetWCF2FReceiveDetailDataCgiResp:(id)arg1;
- (void)onGetWCPayF2FDeleteRecordCgiResp:(id)arg1;
- (void)onGetF2FReceiveHistoryCgiResponse:(id)arg1;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(BOOL)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)handleSyncOplogFail;
- (void)handleSyncOplogSuccess;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)bIsBackFromRootDetailViewController;
- (void)setBIsBackFromRootDetailViewController:(BOOL)arg1;
- (unsigned long long)detailFromScene;
- (void)setDetailFromScene:(unsigned long long)arg1;
- (unsigned long long)jsApiFromTimeStamp;
- (void)setJsApiFromTimeStamp:(unsigned long long)arg1;
- (id)getReceiveDetailCgi;
- (void)setGetReceiveDetailCgi:(id)arg1;
- (id)deleteRecordCgi;
- (void)setDeleteRecordCgi:(id)arg1;
- (id)getReceiveHistoryCgi;
- (void)setGetReceiveHistoryCgi:(id)arg1;
- (id)curHistoryResp;
- (void)setCurHistoryResp:(id)arg1;
- (unsigned long long)lastHistoryReqTimeFormat;
- (void)setLastHistoryReqTimeFormat:(unsigned long long)arg1;
- (unsigned long long)lastHistoryPreviousTimestamp;
- (void)setLastHistoryPreviousTimestamp:(unsigned long long)arg1;
- (unsigned long long)lastHistoryNewerTimestamp;
- (void)setLastHistoryNewerTimestamp:(unsigned long long)arg1;
- (BOOL)bNeedUpdateHistoryList;
- (void)setBNeedUpdateHistoryList:(BOOL)arg1;
- (id)getAnnouncementCgi;
- (void)setGetAnnouncementCgi:(id)arg1;
- (BOOL)m_isSoundOn;
- (void)setM_isSoundOn:(BOOL)arg1;
- (void).cxx_destruct;
@end

