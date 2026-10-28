@interface GameHaowanContinueStatePbObj : MMObject <PBCoding>
{
    unsigned int _createTime; // +0x8
    unsigned int _retryCount; // +0xc
    NSObject<PBCoding> * _subState; // +0x10
}
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_subState;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (id)subState;
- (void)setSubState:(id)arg1;
- (void).cxx_destruct;
@end
