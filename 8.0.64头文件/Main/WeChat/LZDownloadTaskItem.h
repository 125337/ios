@interface LZDownloadTaskItem : NSObject
{
    long long _seqNo; // +0x8
    NSString * _url; // +0x10
    long long _fileSize; // +0x18
    NSString * _savePath; // +0x20
    _NSRange _downloadRange; // +0x28
}
- (id)init;
- (long long)seqNo;
- (id)url;
- (void)setUrl:(id)arg1;
- (_NSRange)downloadRange;
- (void)setDownloadRange:(_NSRange)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (void).cxx_destruct;
@end
