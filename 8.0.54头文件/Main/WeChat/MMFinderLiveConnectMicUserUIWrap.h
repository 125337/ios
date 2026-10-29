@interface MMFinderLiveConnectMicUserUIWrap : NSObject
{
    BOOL _useVideo; // +0x8
    MMFinderLiveConnectMicUser * _userInfo; // +0x10
    UIView<MMFinderLiveConnectMicOperationViewBase> * _userView; // +0x18
    unsigned long long _index; // +0x20
    unsigned long long _totalCount; // +0x28
}
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)userView;
- (void)setUserView:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (BOOL)useVideo;
- (void)setUseVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end

