@interface ZipDownLoadFileResponse : NSObject
{
    BOOL _complete; // +0x8
    NSArray * _fileList; // +0x10
}
- (id)fileList;
- (void)setFileList:(id)arg1;
- (BOOL)complete;
- (void)setComplete:(BOOL)arg1;
- (void).cxx_destruct;
@end
