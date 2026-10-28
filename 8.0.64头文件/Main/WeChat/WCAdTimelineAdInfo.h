@interface WCAdTimelineAdInfo : NSObject
{
    BOOL _isExpired; // +0x8
    unsigned int _exposeCnt; // +0xc
    int _adPosAbs; // +0x10
    unsigned int _adPosRelative; // +0x14
    NSString * _traceId; // +0x18
    NSString * _aid; // +0x20
    NSString * _snsId; // +0x28
    unsigned long long _createTime; // +0x30
    NSString * _tid; // +0x38
    NSString * _uxInfo; // +0x40
    NSString * _aboveSnsId; // +0x48
    NSString * _belowSnsId; // +0x50
}
- (id)init;
- (id)description;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned int)exposeCnt;
- (void)setExposeCnt:(unsigned int)arg1;
- (int)adPosAbs;
- (void)setAdPosAbs:(int)arg1;
- (unsigned int)adPosRelative;
- (void)setAdPosRelative:(unsigned int)arg1;
- (BOOL)isExpired;
- (void)setIsExpired:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)aboveSnsId;
- (void)setAboveSnsId:(id)arg1;
- (id)belowSnsId;
- (void)setBelowSnsId:(id)arg1;
- (void).cxx_destruct;
@end
