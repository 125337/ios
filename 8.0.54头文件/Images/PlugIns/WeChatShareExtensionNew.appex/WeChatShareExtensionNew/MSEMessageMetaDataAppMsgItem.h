@interface MSEMessageMetaDataAppMsgItem : NSObject <PBCoding>
{
    unsigned int fileSize; // +0x8
    NSString * toUsername; // +0x10
    NSString * title; // +0x18
    NSString * contentUrl; // +0x20
    NSString * thumbUrl; // +0x28
    NSString * fileName; // +0x30
    NSString * fileMd5; // +0x38
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

