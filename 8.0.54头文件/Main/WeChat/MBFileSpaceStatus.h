@interface MBFileSpaceStatus : NSObject <PBCoding>
{
    unsigned long long _totalFileSize; // +0x8
    NSMutableDictionary * _dicBizItem; // +0x10
}
+ (void)PBArrayAdd_dicBizItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)updateTotalFileSize;
- (id)description;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (id)dicBizItem;
- (void)setDicBizItem:(id)arg1;
- (void).cxx_destruct;
@end

