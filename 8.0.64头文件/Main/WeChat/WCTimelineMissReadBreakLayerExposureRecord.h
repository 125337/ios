@interface WCTimelineMissReadBreakLayerExposureRecord : MMObject
{
    BOOL _isGenNewBreakLayer; // +0x8
    unsigned int _exposureCount; // +0xc
    unsigned int _clickCount; // +0x10
    unsigned int _jumpBtnClickType; // +0x14
    unsigned int _missReadJumpBtnFirstExposureTime; // +0x18
    unsigned int _preCreateBreakLayerFeedCnt; // +0x1c
    unsigned int _preCreateBreakLayerWsFeedCnt; // +0x20
    NSString * _sessionId; // +0x28
    NSMutableArray * _newerFeedIds; // +0x30
    NSMutableArray * _exposureFeedIds; // +0x38
    unsigned long long _missReadRecordCount; // +0x40
    unsigned long long _jumpableMissReadRecordCount; // +0x48
    unsigned long long _jumpBtnRefItemID; // +0x50
    unsigned long long _jumpBtnId; // +0x58
    unsigned long long _jumpBreakLayerFeedCount; // +0x60
    unsigned long long _jumpBreakLayerWeishangFeedCount; // +0x68
    NSMutableArray * _jumpBreakLayerFeedIds; // +0x70
    unsigned long long _jumpBreakLayerdId; // +0x78
    unsigned long long _newBreakLayerID; // +0x80
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)newerFeedIds;
- (void)setNewerFeedIds:(id)arg1;
- (id)exposureFeedIds;
- (void)setExposureFeedIds:(id)arg1;
- (unsigned long long)missReadRecordCount;
- (void)setMissReadRecordCount:(unsigned long long)arg1;
- (unsigned long long)jumpableMissReadRecordCount;
- (void)setJumpableMissReadRecordCount:(unsigned long long)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned int)clickCount;
- (void)setClickCount:(unsigned int)arg1;
- (unsigned long long)jumpBtnRefItemID;
- (void)setJumpBtnRefItemID:(unsigned long long)arg1;
- (unsigned long long)jumpBtnId;
- (void)setJumpBtnId:(unsigned long long)arg1;
- (unsigned int)jumpBtnClickType;
- (void)setJumpBtnClickType:(unsigned int)arg1;
- (unsigned int)missReadJumpBtnFirstExposureTime;
- (void)setMissReadJumpBtnFirstExposureTime:(unsigned int)arg1;
- (unsigned long long)jumpBreakLayerFeedCount;
- (void)setJumpBreakLayerFeedCount:(unsigned long long)arg1;
- (unsigned long long)jumpBreakLayerWeishangFeedCount;
- (void)setJumpBreakLayerWeishangFeedCount:(unsigned long long)arg1;
- (id)jumpBreakLayerFeedIds;
- (void)setJumpBreakLayerFeedIds:(id)arg1;
- (unsigned long long)jumpBreakLayerdId;
- (void)setJumpBreakLayerdId:(unsigned long long)arg1;
- (BOOL)isGenNewBreakLayer;
- (void)setIsGenNewBreakLayer:(BOOL)arg1;
- (unsigned long long)newBreakLayerID;
- (void)setNewBreakLayerID:(unsigned long long)arg1;
- (unsigned int)preCreateBreakLayerFeedCnt;
- (void)setPreCreateBreakLayerFeedCnt:(unsigned int)arg1;
- (unsigned int)preCreateBreakLayerWsFeedCnt;
- (void)setPreCreateBreakLayerWsFeedCnt:(unsigned int)arg1;
- (void).cxx_destruct;
@end
