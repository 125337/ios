@interface AppMsgLargeFileReportItem : NSObject
{
    NSString * _fileName; // +0x8
    NSString * _fileExtension; // +0x10
    unsigned long long _fileSize; // +0x18
    double _fileDuration; // +0x20
    long long _messageId; // +0x28
}
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileExtension;
- (void)setFileExtension:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (double)fileDuration;
- (void)setFileDuration:(double)arg1;
- (long long)messageId;
- (void)setMessageId:(long long)arg1;
- (void).cxx_destruct;
@end
