@interface WCFinderLongServiceEncodeCompletionParam : NSObject
{
    BOOL _isSkipEncode; // +0x8
    BOOL _isCancel; // +0x9
    NSString * _path; // +0x10
    double _timeDiff; // +0x18
    NSError * _error; // +0x20
    unsigned long long _retryType; // +0x28
}
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)isSkipEncode;
- (void)setIsSkipEncode:(BOOL)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (double)timeDiff;
- (void)setTimeDiff:(double)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (unsigned long long)retryType;
- (void)setRetryType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

