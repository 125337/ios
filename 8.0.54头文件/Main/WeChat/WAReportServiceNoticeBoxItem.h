@interface WAReportServiceNoticeBoxItem : WAReportBaseItem
{
    unsigned int _opType; // +0x8
    unsigned int _inBoxIndex; // +0xc
    unsigned int _isMuted; // +0x10
    unsigned int _firstExpose; // +0x14
    unsigned int _noticeType; // +0x18
    unsigned int _isRed; // +0x1c
    unsigned int _redCount; // +0x20
    unsigned int _accountType; // +0x24
    unsigned long long _opTimestamp; // +0x28
    NSString * _serviceNoticeBoxUserName; // +0x30
    NSString * _msgId; // +0x38
    NSString * _content; // +0x40
    unsigned long long _noticeTimestamp; // +0x48
    NSString * _templateID; // +0x50
    NSString * _liveId; // +0x58
    NSString * _feedId; // +0x60
}
- (int)reportID;
- (id)reportString;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned long long)opTimestamp;
- (void)setOpTimestamp:(unsigned long long)arg1;
- (id)serviceNoticeBoxUserName;
- (void)setServiceNoticeBoxUserName:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)noticeTimestamp;
- (void)setNoticeTimestamp:(unsigned long long)arg1;
- (unsigned int)inBoxIndex;
- (void)setInBoxIndex:(unsigned int)arg1;
- (unsigned int)isMuted;
- (void)setIsMuted:(unsigned int)arg1;
- (unsigned int)firstExpose;
- (void)setFirstExpose:(unsigned int)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (unsigned int)isRed;
- (void)setIsRed:(unsigned int)arg1;
- (unsigned int)redCount;
- (void)setRedCount:(unsigned int)arg1;
- (unsigned int)accountType;
- (void)setAccountType:(unsigned int)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (void).cxx_destruct;
@end

