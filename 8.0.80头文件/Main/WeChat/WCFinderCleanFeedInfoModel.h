@interface WCFinderCleanFeedInfoModel : NSObject <PBCoding>
{
    long long _fileCreateTs; // +0x8
    long long _cleanTs; // +0x10
}
+ (void)PBArrayAdd_fileCreateTs;
+ (void)PBArrayAdd_cleanTs;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (long long)fileCreateTs;
- (void)setFileCreateTs:(long long)arg1;
- (long long)cleanTs;
- (void)setCleanTs:(long long)arg1;
@end
