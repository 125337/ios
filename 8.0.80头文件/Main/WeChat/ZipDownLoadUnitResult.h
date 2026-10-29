@interface ZipDownLoadUnitResult : NSObject
{
    NSString * _savePath; // +0x8
    NSString * _fileName; // +0x10
    NSString * _fileId; // +0x18
}
+ (id)initWithPath:(id)arg1 name:(id)arg2 fileId:(id)arg3;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (void).cxx_destruct;
@end
