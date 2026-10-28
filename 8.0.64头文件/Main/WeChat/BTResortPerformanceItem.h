@interface BTResortPerformanceItem : NSObject
{
    unsigned int _msgListCount; // +0x8
    unsigned int _msgCheckCount; // +0xc
    unsigned int _digestUpdateCount; // +0x10
    unsigned int _msgUpdateCount; // +0x14
    unsigned long long _start; // +0x18
    unsigned long long _end; // +0x20
    unsigned long long _getMsgListStart; // +0x28
    unsigned long long _getMsgListEnd; // +0x30
    unsigned long long _sendCgiEnd; // +0x38
    unsigned long long _receiveCgiResp; // +0x40
    unsigned long long _updateConfigEnd; // +0x48
    unsigned long long _recycleRecCardStart; // +0x50
    unsigned long long _recycleRecCardEnd; // +0x58
    unsigned long long _resortMsgStart; // +0x60
    unsigned long long _resortMsgEnd; // +0x68
    unsigned long long _msgCheckStart; // +0x70
    unsigned long long _msgCheckEnd; // +0x78
    unsigned long long _digestUpdateStart; // +0x80
    unsigned long long _digestUpdateEnd; // +0x88
    unsigned long long _dataBaseUpdateStart; // +0x90
    unsigned long long _dataBaseUpdateEnd; // +0x98
    unsigned long long _recCardInsertStart; // +0xa0
    unsigned long long _recCardInsertEnd; // +0xa8
    unsigned long long _adPosAdjustStart; // +0xb0
    unsigned long long _adPosAdjustEnd; // +0xb8
}
- (void)printLog;
- (unsigned long long)start;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)end;
- (void)setEnd:(unsigned long long)arg1;
- (unsigned long long)getMsgListStart;
- (void)setGetMsgListStart:(unsigned long long)arg1;
- (unsigned long long)getMsgListEnd;
- (void)setGetMsgListEnd:(unsigned long long)arg1;
- (unsigned int)msgListCount;
- (void)setMsgListCount:(unsigned int)arg1;
- (unsigned long long)sendCgiEnd;
- (void)setSendCgiEnd:(unsigned long long)arg1;
- (unsigned long long)receiveCgiResp;
- (void)setReceiveCgiResp:(unsigned long long)arg1;
- (unsigned long long)updateConfigEnd;
- (void)setUpdateConfigEnd:(unsigned long long)arg1;
- (unsigned long long)recycleRecCardStart;
- (void)setRecycleRecCardStart:(unsigned long long)arg1;
- (unsigned long long)recycleRecCardEnd;
- (void)setRecycleRecCardEnd:(unsigned long long)arg1;
- (unsigned long long)resortMsgStart;
- (void)setResortMsgStart:(unsigned long long)arg1;
- (unsigned long long)resortMsgEnd;
- (void)setResortMsgEnd:(unsigned long long)arg1;
- (unsigned long long)msgCheckStart;
- (void)setMsgCheckStart:(unsigned long long)arg1;
- (unsigned long long)msgCheckEnd;
- (void)setMsgCheckEnd:(unsigned long long)arg1;
- (unsigned int)msgCheckCount;
- (void)setMsgCheckCount:(unsigned int)arg1;
- (unsigned long long)digestUpdateStart;
- (void)setDigestUpdateStart:(unsigned long long)arg1;
- (unsigned long long)digestUpdateEnd;
- (void)setDigestUpdateEnd:(unsigned long long)arg1;
- (unsigned int)digestUpdateCount;
- (void)setDigestUpdateCount:(unsigned int)arg1;
- (unsigned long long)dataBaseUpdateStart;
- (void)setDataBaseUpdateStart:(unsigned long long)arg1;
- (unsigned long long)dataBaseUpdateEnd;
- (void)setDataBaseUpdateEnd:(unsigned long long)arg1;
- (unsigned int)msgUpdateCount;
- (void)setMsgUpdateCount:(unsigned int)arg1;
- (unsigned long long)recCardInsertStart;
- (void)setRecCardInsertStart:(unsigned long long)arg1;
- (unsigned long long)recCardInsertEnd;
- (void)setRecCardInsertEnd:(unsigned long long)arg1;
- (unsigned long long)adPosAdjustStart;
- (void)setAdPosAdjustStart:(unsigned long long)arg1;
- (unsigned long long)adPosAdjustEnd;
- (void)setAdPosAdjustEnd:(unsigned long long)arg1;
@end
