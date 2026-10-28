@interface MMFinderLivePaidConnectMicUser : MMFinderLiveConnectMicUser
{
    BOOL _isOnline; // +0x168
    BOOL _expandContentIfNeeded; // +0x169
    unsigned long long _paidAmount; // +0x170
    NSString * _consultContent; // +0x178
}
+ (id)connectMicUserFromAudience:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)updateSDKUserId:(id)arg1;
- (void)updateConnecting:(BOOL)arg1;
- (void)updateConnectWaiting:(BOOL)arg1;
- (void)updateLocalCloseState:(unsigned long long)arg1;
- (BOOL)alreadyTimeout;
- (unsigned long long)paidAmount;
- (void)setPaidAmount:(unsigned long long)arg1;
- (id)consultContent;
- (void)setConsultContent:(id)arg1;
- (BOOL)isOnline;
- (void)setIsOnline:(BOOL)arg1;
- (BOOL)expandContentIfNeeded;
- (void)setExpandContentIfNeeded:(BOOL)arg1;
- (void).cxx_destruct;
@end
