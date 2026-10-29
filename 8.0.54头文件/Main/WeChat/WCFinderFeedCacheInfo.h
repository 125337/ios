@interface WCFinderFeedCacheInfo : NSObject <PBCoding>
{
    int _commentScene; // +0x8
    NSString * _tid; // +0x10
    unsigned long long _fileSize; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_commentScene;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

