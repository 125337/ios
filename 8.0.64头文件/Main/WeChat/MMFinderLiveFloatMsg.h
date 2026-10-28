@interface MMFinderLiveFloatMsg : NSObject
{
    unsigned int _msgType; // +0x8
    unsigned int _usedCount; // +0xc
    unsigned int _sumCount; // +0x10
    unsigned int _priority; // +0x14
    MMFinderLiveFloatMsgDecorationInfo * _decorationInfo; // +0x18
    MMFinderLiveFreeFloatMsgConfig * _freeMsgConfig; // +0x20
}
+ (id)createFinderLiveFloatMsgWithPBFloatMsg:(id)arg1;
+ (unsigned int)transferLiveFloatMsgTypeToPBFloatMsgType:(unsigned int)arg1;
+ (unsigned int)transferPBFloatMsgTypeToFinderLiveFloatMsgType:(unsigned int)arg1;
- (BOOL)isLimitlessFloatMsg;
- (BOOL)hasReachUseLimit;
- (BOOL)increaseUsedCount;
- (id)guideWording;
- (id)getDecorationItemWithType:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)usedCount;
- (void)setUsedCount:(unsigned int)arg1;
- (unsigned int)sumCount;
- (void)setSumCount:(unsigned int)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (id)decorationInfo;
- (void)setDecorationInfo:(id)arg1;
- (id)freeMsgConfig;
- (void)setFreeMsgConfig:(id)arg1;
- (void).cxx_destruct;
@end
