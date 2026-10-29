@interface WCMomentsMenuActionReportForwardInfo : MMObject
{
    BOOL _isAppendix; // +0x8
    BOOL _isForwardSuccess; // +0x9
    long long _forwardType; // +0x10
    NSString * _toUsername; // +0x18
}
- (long long)forwardType;
- (void)setForwardType:(long long)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (BOOL)isAppendix;
- (void)setIsAppendix:(BOOL)arg1;
- (BOOL)isForwardSuccess;
- (void)setIsForwardSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

