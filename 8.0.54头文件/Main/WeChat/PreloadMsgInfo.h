@interface PreloadMsgInfo : NSObject <NSCopying>
{
    unsigned int _createTime; // +0x8
    unsigned int _sequenceId; // +0xc
    unsigned int _localId; // +0x10
}
+ (id)infoWithMsgWrap:(id)arg1;
+ (id)infoWithCreateTime:(unsigned int)arg1 sequenceId:(unsigned int)arg2 localId:(unsigned int)arg3;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compareWithOtherMsgInfo:(id)arg1;
- (long long)compareWithCreateTime:(unsigned int)arg1 sequenceId:(unsigned int)arg2 localId:(unsigned int)arg3;
- (BOOL)isGreaterThan:(id)arg1;
- (BOOL)isGreaterThanOrEqualTo:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isSmallerThanOrEqualTo:(id)arg1;
- (BOOL)isSmallerThan:(id)arg1;
- (id)description;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)sequenceId;
- (void)setSequenceId:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
@end

