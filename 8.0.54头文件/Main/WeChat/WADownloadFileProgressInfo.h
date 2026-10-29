@interface WADownloadFileProgressInfo : NSObject
{
    long long _totalBytesWritten; // +0x8
    long long _totalBytesExpectedToWrite; // +0x10
}
- (long long)totalBytesWritten;
- (void)setTotalBytesWritten:(long long)arg1;
- (long long)totalBytesExpectedToWrite;
- (void)setTotalBytesExpectedToWrite:(long long)arg1;
@end

