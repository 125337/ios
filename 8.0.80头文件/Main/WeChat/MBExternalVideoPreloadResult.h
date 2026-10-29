@interface MBExternalVideoPreloadResult : NSObject
{
    BOOL _success; // +0x8
    BOOL _cached; // +0x9
    long long _errCode; // +0x10
    NSString * _errMsg; // +0x18
    long long _finishedSize; // +0x20
    long long _totalSize; // +0x28
}
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (BOOL)cached;
- (void)setCached:(BOOL)arg1;
- (long long)finishedSize;
- (void)setFinishedSize:(long long)arg1;
- (long long)totalSize;
- (void)setTotalSize:(long long)arg1;
- (void).cxx_destruct;
@end
