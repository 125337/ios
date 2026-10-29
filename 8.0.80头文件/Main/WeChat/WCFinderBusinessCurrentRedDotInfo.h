@interface WCFinderBusinessCurrentRedDotInfo : NSObject
{
    BOOL _hasRedDot; // +0x8
    BOOL _isIgnore; // +0x9
    NSString * _redDotTipsUuid; // +0x10
    unsigned long long _type; // +0x18
    unsigned long long _showType; // +0x20
    unsigned long long _localReceiveMsTimeStamp; // +0x28
    long long _count; // +0x30
    long long _exposeCount; // +0x38
    unsigned long long _firstExposeTime; // +0x40
    unsigned long long _lastExposeTimeStamp; // +0x48
    unsigned long long _lastEndExposeTimeStamp; // +0x50
}
- (id)genReportJson;
- (id)redDotTipsUuid;
- (void)setRedDotTipsUuid:(id)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (unsigned long long)localReceiveMsTimeStamp;
- (void)setLocalReceiveMsTimeStamp:(unsigned long long)arg1;
- (BOOL)isIgnore;
- (void)setIsIgnore:(BOOL)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (long long)exposeCount;
- (void)setExposeCount:(long long)arg1;
- (unsigned long long)firstExposeTime;
- (void)setFirstExposeTime:(unsigned long long)arg1;
- (unsigned long long)lastExposeTimeStamp;
- (void)setLastExposeTimeStamp:(unsigned long long)arg1;
- (unsigned long long)lastEndExposeTimeStamp;
- (void)setLastEndExposeTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
