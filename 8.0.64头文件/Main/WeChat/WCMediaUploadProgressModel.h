@interface WCMediaUploadProgressModel : NSObject
{
    double _progress; // +0x8
    unsigned long long _totalSize; // +0x10
    unsigned long long _uploadSize; // +0x18
}
- (double)progress;
- (void)setProgress:(double)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)uploadSize;
- (void)setUploadSize:(unsigned long long)arg1;
@end
