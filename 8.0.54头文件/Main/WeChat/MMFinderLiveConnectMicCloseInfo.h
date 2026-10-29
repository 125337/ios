@interface MMFinderLiveConnectMicCloseInfo : NSObject
{
    MMFinderLiveConnectMicUser * _userInfo; // +0x8
    unsigned long long _tryCloseCount; // +0x10
}
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)tryCloseCount;
- (void)setTryCloseCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

