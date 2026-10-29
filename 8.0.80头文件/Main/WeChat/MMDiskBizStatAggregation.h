@interface MMDiskBizStatAggregation : NSObject <PBCoding>
{
    long long fileNum; // +0x8
    long long fileSize; // +0x10
}
+ (void)PBArrayAdd_fileNum;
+ (void)PBArrayAdd_fileSize;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)fileNum;
- (void)setFileNum:(long long)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (void)add:(id)arg1;
- (id)description;
- (id)init;
@end
