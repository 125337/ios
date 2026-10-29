@interface WCFinderWordingIconConfig : NSObject
{
    BOOL _isFromServer; // +0x8
    NSString * _feedSinglePeopleLike; // +0x10
    NSString * _feedMultiPeopleLiked; // +0x18
    NSString * _fullFeedMultiPeopleLiked; // +0x20
    NSString * _likeListTitle; // +0x28
    NSString * _mentionLikedFeed; // +0x30
    NSString * _mentionFriendLikedFeed; // +0x38
    NSString * _mentionLikedLikes; // +0x40
    NSString * _likeTips; // +0x48
    WCFinderLightDarkIconName * _likedFilledIcon; // +0x50
    WCFinderLightDarkIconName * _likedOutlinedIcon; // +0x58
    WCFinderLightDarkIconName * _likedGroupIcon; // +0x60
    WCFinderLightDarkIconName * _privateFilledIcon; // +0x68
    WCFinderLightDarkIconName * _privateOutlinedIcon; // +0x70
    WCFinderLightDarkIconName * _likedFilledFullPageIcon; // +0x78
    WCFinderLightDarkIconName * _hotLikeOffIcon; // +0x80
    NSMutableDictionary * _items; // +0x88
}
- (id)feedSinglePeopleLike;
- (void)setFeedSinglePeopleLike:(id)arg1;
- (id)feedMultiPeopleLiked;
- (void)setFeedMultiPeopleLiked:(id)arg1;
- (id)fullFeedMultiPeopleLiked;
- (void)setFullFeedMultiPeopleLiked:(id)arg1;
- (id)likeListTitle;
- (void)setLikeListTitle:(id)arg1;
- (id)mentionLikedFeed;
- (void)setMentionLikedFeed:(id)arg1;
- (id)mentionFriendLikedFeed;
- (void)setMentionFriendLikedFeed:(id)arg1;
- (id)mentionLikedLikes;
- (void)setMentionLikedLikes:(id)arg1;
- (id)likeTips;
- (void)setLikeTips:(id)arg1;
- (BOOL)isFromServer;
- (void)setIsFromServer:(BOOL)arg1;
- (id)likedFilledIcon;
- (void)setLikedFilledIcon:(id)arg1;
- (id)likedOutlinedIcon;
- (void)setLikedOutlinedIcon:(id)arg1;
- (id)likedGroupIcon;
- (void)setLikedGroupIcon:(id)arg1;
- (id)privateFilledIcon;
- (void)setPrivateFilledIcon:(id)arg1;
- (id)privateOutlinedIcon;
- (void)setPrivateOutlinedIcon:(id)arg1;
- (id)likedFilledFullPageIcon;
- (void)setLikedFilledFullPageIcon:(id)arg1;
- (id)hotLikeOffIcon;
- (void)setHotLikeOffIcon:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
