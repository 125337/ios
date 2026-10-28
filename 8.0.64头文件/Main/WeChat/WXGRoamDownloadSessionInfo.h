@interface WXGRoamDownloadSessionInfo : NSObject
{
    NSString * _userName; // +0x8
    unsigned long long _sessionSize; // +0x10
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)sessionSize;
- (void)setSessionSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
