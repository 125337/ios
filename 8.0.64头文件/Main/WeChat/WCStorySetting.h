@interface WCStorySetting : MMObject <PBCoding>
{
    BOOL _hasClearCameraRedDot; // +0x8
    BOOL _hasShowCameraGuide; // +0x9
    BOOL _hasDragDownStoryTeachView; // +0xa
    BOOL _hasAutoPlayVideoFirst; // +0xb
    BOOL _hasTakePhotoAfterShowGuide; // +0xc
    BOOL _hasAlwaysShowFriendsStoryCellInTimeline; // +0xd
    BOOL _hasShowEntrance; // +0xe
    BOOL _hasClearAlbumRedDot; // +0xf
    BOOL _hasFirstPost; // +0x10
    BOOL _hasShowPrivateTips; // +0x11
    BOOL _friendVisitSwitchOn; // +0x12
    BOOL _hasShowCameraNewGuide; // +0x13
    BOOL _friendVisitUnreadCommentRedPointOn; // +0x14
    BOOL _hasReadFriendVisitVersionCameraRedPoint; // +0x15
    BOOL _newVersionFriendVisitSwitchOn; // +0x16
    unsigned int _canBubbleTipsShowedCount; // +0x18
    unsigned int _canCameraTipsShowedCount; // +0x1c
    unsigned int _dragDownStoryProfileCount; // +0x20
    unsigned int _showTimelineTipsCount; // +0x24
    unsigned long long _lastReadTimelineMaxTid; // +0x28
}
+ (void)PBArrayAdd_canBubbleTipsShowedCount;
+ (void)PBArrayAdd_hasClearCameraRedDot;
+ (void)PBArrayAdd_canCameraTipsShowedCount;
+ (void)PBArrayAdd_hasShowCameraGuide;
+ (void)PBArrayAdd_hasDragDownStoryTeachView;
+ (void)PBArrayAdd_hasAutoPlayVideoFirst;
+ (void)PBArrayAdd_dragDownStoryProfileCount;
+ (void)PBArrayAdd_hasTakePhotoAfterShowGuide;
+ (void)PBArrayAdd_hasAlwaysShowFriendsStoryCellInTimeline;
+ (void)PBArrayAdd_lastReadTimelineMaxTid;
+ (void)PBArrayAdd_hasShowEntrance;
+ (void)PBArrayAdd_hasClearAlbumRedDot;
+ (void)PBArrayAdd_hasFirstPost;
+ (void)PBArrayAdd_hasShowPrivateTips;
+ (void)PBArrayAdd_friendVisitSwitchOn;
+ (void)PBArrayAdd_showTimelineTipsCount;
+ (void)PBArrayAdd_hasShowCameraNewGuide;
+ (void)PBArrayAdd_friendVisitUnreadCommentRedPointOn;
+ (void)PBArrayAdd_hasReadFriendVisitVersionCameraRedPoint;
+ (void)PBArrayAdd_newVersionFriendVisitSwitchOn;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)canBubbleTipsShowedCount;
- (void)setCanBubbleTipsShowedCount:(unsigned int)arg1;
- (BOOL)hasClearCameraRedDot;
- (void)setHasClearCameraRedDot:(BOOL)arg1;
- (unsigned int)canCameraTipsShowedCount;
- (void)setCanCameraTipsShowedCount:(unsigned int)arg1;
- (BOOL)hasShowCameraGuide;
- (void)setHasShowCameraGuide:(BOOL)arg1;
- (BOOL)hasDragDownStoryTeachView;
- (void)setHasDragDownStoryTeachView:(BOOL)arg1;
- (BOOL)hasAutoPlayVideoFirst;
- (void)setHasAutoPlayVideoFirst:(BOOL)arg1;
- (unsigned int)dragDownStoryProfileCount;
- (void)setDragDownStoryProfileCount:(unsigned int)arg1;
- (BOOL)hasTakePhotoAfterShowGuide;
- (void)setHasTakePhotoAfterShowGuide:(BOOL)arg1;
- (BOOL)hasAlwaysShowFriendsStoryCellInTimeline;
- (void)setHasAlwaysShowFriendsStoryCellInTimeline:(BOOL)arg1;
- (unsigned long long)lastReadTimelineMaxTid;
- (void)setLastReadTimelineMaxTid:(unsigned long long)arg1;
- (BOOL)hasShowEntrance;
- (void)setHasShowEntrance:(BOOL)arg1;
- (BOOL)hasClearAlbumRedDot;
- (void)setHasClearAlbumRedDot:(BOOL)arg1;
- (BOOL)hasFirstPost;
- (void)setHasFirstPost:(BOOL)arg1;
- (BOOL)hasShowPrivateTips;
- (void)setHasShowPrivateTips:(BOOL)arg1;
- (BOOL)friendVisitSwitchOn;
- (void)setFriendVisitSwitchOn:(BOOL)arg1;
- (unsigned int)showTimelineTipsCount;
- (void)setShowTimelineTipsCount:(unsigned int)arg1;
- (BOOL)hasShowCameraNewGuide;
- (void)setHasShowCameraNewGuide:(BOOL)arg1;
- (BOOL)friendVisitUnreadCommentRedPointOn;
- (void)setFriendVisitUnreadCommentRedPointOn:(BOOL)arg1;
- (BOOL)hasReadFriendVisitVersionCameraRedPoint;
- (void)setHasReadFriendVisitVersionCameraRedPoint:(BOOL)arg1;
- (BOOL)newVersionFriendVisitSwitchOn;
- (void)setNewVersionFriendVisitSwitchOn:(BOOL)arg1;
@end
