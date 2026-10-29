@interface MMLiveInfoWrap : NSObject
{
    unsigned long long _liveId; // +0x8
    LiveSdkInfo * _liveSdkInfo; // +0x10
    LiveInfo * _liveInfo; // +0x18
    NSData * _liveCookies; // +0x20
    NSMutableArray * _currentRoomIds; // +0x28
    NSString * _latestLiveMicId; // +0x30
    MMLiveAnchorStatusItem * _anchorStatusItem; // +0x38
}
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)liveSdkInfo;
- (void)setLiveSdkInfo:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)currentRoomIds;
- (void)setCurrentRoomIds:(id)arg1;
- (id)latestLiveMicId;
- (void)setLatestLiveMicId:(id)arg1;
- (id)anchorStatusItem;
- (void)setAnchorStatusItem:(id)arg1;
- (void).cxx_destruct;
@end

