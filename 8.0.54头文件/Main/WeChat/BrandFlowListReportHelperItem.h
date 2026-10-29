@interface BrandFlowListReportHelperItem : NSObject
{
    BOOL _hasNewMsgWhenClick; // +0x8
    unsigned int _enterScene; // +0xc
    unsigned int _newMsgContactCount; // +0x10
    unsigned int _enterPos; // +0x14
    NSString * _enterUserName; // +0x18
    unsigned long long _beginExposeTimeInMs; // +0x20
    unsigned long long _totalStayBackgroundTimeInMs; // +0x28
    unsigned long long _startEnterBackgroundTimeInMs; // +0x30
}
- (unsigned long long)currentStayTime;
- (void)resetStayTime;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (BOOL)hasNewMsgWhenClick;
- (void)setHasNewMsgWhenClick:(BOOL)arg1;
- (unsigned int)newMsgContactCount;
- (void)setNewMsgContactCount:(unsigned int)arg1;
- (unsigned int)enterPos;
- (void)setEnterPos:(unsigned int)arg1;
- (id)enterUserName;
- (void)setEnterUserName:(id)arg1;
- (unsigned long long)beginExposeTimeInMs;
- (void)setBeginExposeTimeInMs:(unsigned long long)arg1;
- (unsigned long long)totalStayBackgroundTimeInMs;
- (void)setTotalStayBackgroundTimeInMs:(unsigned long long)arg1;
- (unsigned long long)startEnterBackgroundTimeInMs;
- (void)setStartEnterBackgroundTimeInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

