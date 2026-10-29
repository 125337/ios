@interface WCTimelinePhotoAlbumUserActionReporter : NSObject
{
    SnsUserBehaviourInfo * _userBehaviourInfoSession; // +0x8
    SnsAlbumFeedBehaviour * _albumFeedBehaviourSession; // +0x10
}
+ (id)sharedInstanceWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (id)reporterKeyWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (void)beginBehaviourInfoSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (id)albumSessionIDWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (long long)browseSceneTypeWithHomepageType:(long long)arg1;
+ (long long)homepageTypeWithBrowseSceneType:(long long)arg1;
+ (void)endBehaviourInfoSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (id)getBehaviourInfoSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (void)beginAlbumFeedBehaviourSessionWithUsername:(id)arg1 homepageType:(long long)arg2 dataItem:(id)arg3 isDetailSession:(BOOL)arg4;
+ (void)endAlbumFeedBehaviourSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
+ (id)getAlbumFeedBehaviourSessionWithUsername:(id)arg1 homepageType:(long long)arg2;
- (id)userBehaviourInfoSession;
- (void)setUserBehaviourInfoSession:(id)arg1;
- (id)albumFeedBehaviourSession;
- (void)setAlbumFeedBehaviourSession:(id)arg1;
- (void).cxx_destruct;
@end

