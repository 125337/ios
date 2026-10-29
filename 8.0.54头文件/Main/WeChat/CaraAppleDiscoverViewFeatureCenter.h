@interface CaraAppleDiscoverViewFeatureCenter : NSObject <CaraNativeDiscoverViewFeatureCenterBase>
- (id)findFriendEntryViewController;
- (int)unreadAtDiscover;
- (BOOL)badgeAtDiscover;
- (int)unreadAtMomentsCell;
- (BOOL)badgeAtMomentsCell;
- (int)unreadAtTopStoriesCell;
- (BOOL)badgeAtTopStoriesCell;
- (BOOL)badgeAtChannelsCell;
- (int)unreadAtChannelsCell;
- (BOOL)badgeAtLiveCell;
- (int)unreadAtLiveCell;
- (id)anchorOfBadgeAtLiveCell;
- (id)titleOfBadgeAtLiveCell;
@end

