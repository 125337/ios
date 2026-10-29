@interface MSEFavFileTask : NSObject <PBCoding>
{
    NSString * fileName; // +0x8
    unsigned long long fileSize; // +0x10
    NSString * md5; // +0x18
}
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_md5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end

