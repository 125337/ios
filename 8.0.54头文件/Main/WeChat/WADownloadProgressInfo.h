@interface WADownloadProgressInfo : NSObject
{
    NSDate * _date; // +0x8
    long long _totalBytesWritten; // +0x10
}
- (id)date;
- (void)setDate:(id)arg1;
- (long long)totalBytesWritten;
- (void)setTotalBytesWritten:(long long)arg1;
- (void).cxx_destruct;
@end

