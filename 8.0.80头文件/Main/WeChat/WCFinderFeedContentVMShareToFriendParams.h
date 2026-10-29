@interface WCFinderFeedContentVMShareToFriendParams : NSObject
{
    CContact * _fastForwardContact; // +0x8
    id <ForwardMessageLogicDelegate> _delegate; // +0x10
    long long _liveShareSceneIfLive; // +0x18
}
- (id)fastForwardContact;
- (void)setFastForwardContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)liveShareSceneIfLive;
- (void)setLiveShareSceneIfLive:(long long)arg1;
- (void).cxx_destruct;
@end
