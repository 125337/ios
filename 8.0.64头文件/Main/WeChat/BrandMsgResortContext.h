@interface BrandMsgResortContext : NSObject
{
    unsigned int _maxGroupId; // +0x8
    unsigned int _limitMaxWeight; // +0xc
    unsigned long long _limitMaxSequenceId; // +0x10
    NSMutableArray * _arrContextItem; // +0x18
}
- (id)init;
- (id)description;
- (unsigned int)maxGroupId;
- (void)setMaxGroupId:(unsigned int)arg1;
- (unsigned int)limitMaxWeight;
- (void)setLimitMaxWeight:(unsigned int)arg1;
- (unsigned long long)limitMaxSequenceId;
- (void)setLimitMaxSequenceId:(unsigned long long)arg1;
- (id)arrContextItem;
- (void)setArrContextItem:(id)arg1;
- (void).cxx_destruct;
@end
