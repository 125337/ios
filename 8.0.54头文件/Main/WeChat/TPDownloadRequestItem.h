@interface TPDownloadRequestItem : NSObject
{
    int _retryTimes; // +0x8
    int _type; // +0xc
    NSString * _urlStr; // +0x10
    double _failedTimeStamp; // +0x18
}
- (id)init;
- (id)urlStr;
- (void)setUrlStr:(id)arg1;
- (int)retryTimes;
- (void)setRetryTimes:(int)arg1;
- (double)failedTimeStamp;
- (void)setFailedTimeStamp:(double)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void).cxx_destruct;
@end

