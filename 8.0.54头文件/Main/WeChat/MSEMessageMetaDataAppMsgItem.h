@interface MSEMessageMetaDataAppMsgItem : NSObject <PBCoding>
{
    unsigned int _fileSize; // +0x8
    NSString * _toUsername; // +0x10
    NSString * _title; // +0x18
    NSString * _contentUrl; // +0x20
    NSString * _thumbUrl; // +0x28
    NSString * _fileName; // +0x30
    NSString * _fileMd5; // +0x38
}
+ (void)PBArrayAdd_toUsername;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileMd5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (void).cxx_destruct;
@end

