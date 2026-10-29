@interface WAUploadFileProgressInfo : NSObject
{
    long long _totalBytesSent; // +0x8
    long long _totalBytesExpectedToSend; // +0x10
}
- (long long)totalBytesSent;
- (void)setTotalBytesSent:(long long)arg1;
- (long long)totalBytesExpectedToSend;
- (void)setTotalBytesExpectedToSend:(long long)arg1;
@end

