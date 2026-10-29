@interface KvReportItem11404 : KvReportBaseItem
{
    unsigned int _scene; // +0x8
    unsigned int _newMsgCount; // +0xc
    unsigned int _topNewMsgCount; // +0x10
    unsigned int _newTopContactMsgCount; // +0x14
    unsigned int _newNotificationCount; // +0x18
    unsigned int _sessionId; // +0x1c
    unsigned int _enterTime; // +0x20
    unsigned int _source; // +0x24
    unsigned int _enterRedDotMid; // +0x28
    unsigned int _enterMainFrameBrandPos; // +0x2c
    unsigned int _enterRedDotMsgType; // +0x30
    unsigned int _hasRejectNotification; // +0x34
    unsigned int _msgType; // +0x38
    unsigned int _oftenBizCount; // +0x3c
    unsigned int _oftenBizGreenDotCount; // +0x40
    unsigned int _isHeadsetOn; // +0x44
    unsigned int _isDayMode; // +0x48
    unsigned int _exptType; // +0x4c
    unsigned int _moveBoxMsgTopRet; // +0x50
    unsigned int _renderMode; // +0x54
    unsigned int _dataMode; // +0x58
    unsigned int _exptShowFlag; // +0x5c
    unsigned int _isControlGroup; // +0x60
    NSString * _enterRedDotUserName; // +0x68
    NSString * _strategyInfo; // +0x70
    NSString * _digestBoldInfo; // +0x78
    unsigned long long _exposeId; // +0x80
    NSString * _finderFeedExportId; // +0x88
    NSString * _netType; // +0x90
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)newMsgCount;
- (void)setNewMsgCount:(unsigned int)arg1;
- (unsigned int)topNewMsgCount;
- (void)setTopNewMsgCount:(unsigned int)arg1;
- (unsigned int)newTopContactMsgCount;
- (void)setNewTopContactMsgCount:(unsigned int)arg1;
- (unsigned int)newNotificationCount;
- (void)setNewNotificationCount:(unsigned int)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (unsigned int)enterTime;
- (void)setEnterTime:(unsigned int)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)enterRedDotUserName;
- (void)setEnterRedDotUserName:(id)arg1;
- (unsigned int)enterRedDotMid;
- (void)setEnterRedDotMid:(unsigned int)arg1;
- (unsigned int)enterMainFrameBrandPos;
- (void)setEnterMainFrameBrandPos:(unsigned int)arg1;
- (unsigned int)enterRedDotMsgType;
- (void)setEnterRedDotMsgType:(unsigned int)arg1;
- (unsigned int)hasRejectNotification;
- (void)setHasRejectNotification:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)strategyInfo;
- (void)setStrategyInfo:(id)arg1;
- (id)digestBoldInfo;
- (void)setDigestBoldInfo:(id)arg1;
- (unsigned long long)exposeId;
- (void)setExposeId:(unsigned long long)arg1;
- (unsigned int)oftenBizCount;
- (void)setOftenBizCount:(unsigned int)arg1;
- (unsigned int)oftenBizGreenDotCount;
- (void)setOftenBizGreenDotCount:(unsigned int)arg1;
- (id)finderFeedExportId;
- (void)setFinderFeedExportId:(id)arg1;
- (id)netType;
- (void)setNetType:(id)arg1;
- (unsigned int)isHeadsetOn;
- (void)setIsHeadsetOn:(unsigned int)arg1;
- (unsigned int)isDayMode;
- (void)setIsDayMode:(unsigned int)arg1;
- (unsigned int)exptType;
- (void)setExptType:(unsigned int)arg1;
- (unsigned int)moveBoxMsgTopRet;
- (void)setMoveBoxMsgTopRet:(unsigned int)arg1;
- (unsigned int)renderMode;
- (void)setRenderMode:(unsigned int)arg1;
- (unsigned int)dataMode;
- (void)setDataMode:(unsigned int)arg1;
- (unsigned int)exptShowFlag;
- (void)setExptShowFlag:(unsigned int)arg1;
- (unsigned int)isControlGroup;
- (void)setIsControlGroup:(unsigned int)arg1;
- (void).cxx_destruct;
@end
