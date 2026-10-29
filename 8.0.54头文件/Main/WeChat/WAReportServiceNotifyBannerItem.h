@interface WAReportServiceNotifyBannerItem : WAReportBaseItem
{
    unsigned int _opType; // +0x8
    unsigned int _noticeType; // +0xc
    unsigned int _accountType; // +0x10
    unsigned long long _opTimestamp; // +0x18
    NSString * _serviceNotifyBannerUserName; // +0x20
    NSString * _msgId; // +0x28
    NSString * _content; // +0x30
    unsigned long long _noticeTimestamp; // +0x38
    NSString * _liveId; // +0x40
    NSString * _feedId; // +0x48
}
- (int)reportID;
- (id)reportString;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned long long)opTimestamp;
- (void)setOpTimestamp:(unsigned long long)arg1;
- (id)serviceNotifyBannerUserName;
- (void)setServiceNotifyBannerUserName:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)noticeTimestamp;
- (void)setNoticeTimestamp:(unsigned long long)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (unsigned int)accountType;
- (void)setAccountType:(unsigned int)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (void).cxx_destruct;
@end

