@interface BrandTimelineMsgDBResortItem : NSObject
{
    BOOL _bShowBigPic; // +0x8
    BOOL _bHasResorted; // +0x9
    BOOL _isDigestBold; // +0xa
    BOOL _reduceGroup; // +0xb
    unsigned int _groupId; // +0xc
    unsigned int _predict; // +0x10
    unsigned long long _seqId; // +0x18
    NSString * _digestInfoJson; // +0x20
    NSString * _digestStrategyInfo; // +0x28
    NSString * _recReason; // +0x30
    NSString * _resortBuffer; // +0x38
}
- (BOOL)isNeedUpdateResortDigestByDBMsg:(id)arg1;
- (BOOL)isStringIncludeNil:(id)arg1 equalToString:(id)arg2;
- (id)description;
- (unsigned long long)seqId;
- (void)setSeqId:(unsigned long long)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (unsigned int)predict;
- (void)setPredict:(unsigned int)arg1;
- (BOOL)bShowBigPic;
- (void)setBShowBigPic:(BOOL)arg1;
- (BOOL)bHasResorted;
- (void)setBHasResorted:(BOOL)arg1;
- (BOOL)isDigestBold;
- (void)setIsDigestBold:(BOOL)arg1;
- (id)digestInfoJson;
- (void)setDigestInfoJson:(id)arg1;
- (id)digestStrategyInfo;
- (void)setDigestStrategyInfo:(id)arg1;
- (BOOL)reduceGroup;
- (void)setReduceGroup:(BOOL)arg1;
- (id)recReason;
- (void)setRecReason:(id)arg1;
- (id)resortBuffer;
- (void)setResortBuffer:(id)arg1;
- (void).cxx_destruct;
@end
