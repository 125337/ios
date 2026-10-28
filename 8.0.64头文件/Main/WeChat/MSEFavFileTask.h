@interface MSEFavFileTask : NSObject <PBCoding>
{
    unsigned int _fileSize; // +0x8
    NSString * _fileName; // +0x10
    NSString * _md5; // +0x18
}
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_md5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (void).cxx_destruct;
@end
