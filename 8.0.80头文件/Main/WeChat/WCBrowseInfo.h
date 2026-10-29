@interface WCBrowseInfo : MMKvStatItem
{
    unsigned int _browseFeedCount; // +0x18
    unsigned int _commentOrLikeFeedCount; // +0x1c
    unsigned int _clickFeedCount; // +0x20
    unsigned int _clickAlbumCount; // +0x24
    unsigned int _postFeedCount; // +0x28
    unsigned int _exposeFeedCount; // +0x2c
    unsigned int _favFeedCount; // +0x30
    unsigned int _blackListFriendCount; // +0x34
    unsigned int _outsiderFriendCount; // +0x38
    unsigned int _browseNewFeedCount; // +0x3c
    unsigned int _hasNewSnsMsgWhenEntrance; // +0x40
    unsigned int _hasNewChatMsgWhenExit; // +0x44
    unsigned int _hasNewFeedInServer; // +0x48
    unsigned int _browseBrandUrlFeedCount; // +0x4c
    unsigned int _browseNotBrandUrlFeedCount; // +0x50
    unsigned int _browseTextFeedCount; // +0x54
    unsigned int _browseImageFeedCount; // +0x58
    unsigned int _browseSightFeedCount; // +0x5c
    unsigned int _browseAdFeedCount; // +0x60
    unsigned int _browseMusicFeedCount; // +0x64
    unsigned int _contactCount; // +0x68
    unsigned int _browseVideoFeedCount; // +0x6c
    unsigned int _clickBrandUrlFeedCount; // +0x70
    unsigned int _clickNotBrandUrlFeedCount; // +0x74
    unsigned int _clickImageFeedCount; // +0x78
    unsigned int _clickSightFeedCount; // +0x7c
    unsigned int _clickMusicFeedCount; // +0x80
    unsigned int _clickVideoFeedCount; // +0x84
    unsigned int _browseOtherFeedCount; // +0x88
    unsigned int _browseStreamVideoFeedCount; // +0x8c
    unsigned int _clickStreamVideoCount; // +0x90
    unsigned int _clickAdFeedCount; // +0x94
    unsigned int _backGroundTime; // +0x98
    unsigned int _browseTimeLineTime; // +0x9c
    unsigned int _browseMyAlbumTime; // +0xa0
    unsigned int _browseOtherAlbumTime; // +0xa4
    unsigned int _browseMessageListTime; // +0xa8
    unsigned int _browseNewPostTime; // +0xac
    unsigned int _browseFullScreenImageTime; // +0xb0
    unsigned int _browseFullScreenSightTime; // +0xb4
    unsigned int _browseMPArticleTime; // +0xb8
    unsigned int _browseExternalArticleTime; // +0xbc
    unsigned int _browseAdFullScreenImageTime; // +0xc0
    unsigned int _browseAdSightTime; // +0xc4
    unsigned int _browseAdDetailTime; // +0xc8
    unsigned int _browseAdFullScreenSightTime; // +0xcc
    unsigned int _browseAdLongVideoTime; // +0xd0
    unsigned int _browseForwardAdLongVideoTime; // +0xd4
    unsigned int _unreadLikeCount; // +0xd8
    unsigned int _unreadCommentCount; // +0xdc
    unsigned int _unreadMsgCount; // +0xe0
    unsigned int _browseAdCanvasPageTime; // +0xe4
    unsigned int _browseForwardAdCanvasTime; // +0xe8
    unsigned int _browseMusicPlayerFeedCount; // +0xec
    unsigned int _clickMusicPlayerFeedCount; // +0xf0
    unsigned int _browseFullScreenMusicPlayerTime; // +0xf4
    unsigned int _browseFinderFeedCount; // +0xf8
    unsigned int _browseFullScreenFinderFeedTime; // +0xfc
    unsigned int _clickFinderFeedCount; // +0x100
    unsigned int _browseTingAudioCardCount; // +0x104
    unsigned int _clickTingAudioCardCount; // +0x108
    unsigned int _browseTingListCardCount; // +0x10c
    unsigned int _clickTingListCardCount; // +0x110
    unsigned long long _browseTime; // +0x118
    NSString * _startBrowseSnsObjectId; // +0x120
    NSString * _endBrowseSnsObjectId; // +0x128
    NSString * _nextBrowseSnsObjectId; // +0x130
    unsigned long long _startBrowseTime; // +0x138
    NSMutableSet * _clickFeedId; // +0x140
    NSMutableSet * _exposeFeedId; // +0x148
    NSMutableSet * _favFeedId; // +0x150
    NSMutableSet * _clickAlbumUser; // +0x158
    NSMutableSet * _shareTimeLineFeedId; // +0x160
    NSMutableSet * _clickAvatarFeedId; // +0x168
    NSMutableSet * _clickNickNameFeedId; // +0x170
    NSMutableSet * _forwardToSingleChatFeedId; // +0x178
    NSMutableSet * _forwardToChatRoomFeedId; // +0x180
    NSMutableSet<MMKvStatIgnoreField> * _browseFeedId; // +0x188
    NSMutableSet<MMKvStatIgnoreField> * _commentOrLikeFeedId; // +0x190
    NSMutableSet<MMKvStatIgnoreField> * _blacklistUser; // +0x198
    NSMutableSet<MMKvStatIgnoreField> * _outsiderUser; // +0x1a0
    NSMutableSet<MMKvStatIgnoreField> * _browseNewFeedId; // +0x1a8
    NSString * _lastestUnreadFeedId; // +0x1b0
}
- (id)init;
- (void)resetStatus;
- (id)convertSetToString:(id)arg1;
- (void)prepareForSerialization;
- (id)genStatInfo;
- (unsigned long long)browseTime;
- (void)setBrowseTime:(unsigned long long)arg1;
- (unsigned int)browseFeedCount;
- (void)setBrowseFeedCount:(unsigned int)arg1;
- (unsigned int)commentOrLikeFeedCount;
- (void)setCommentOrLikeFeedCount:(unsigned int)arg1;
- (unsigned int)clickFeedCount;
- (void)setClickFeedCount:(unsigned int)arg1;
- (unsigned int)clickAlbumCount;
- (void)setClickAlbumCount:(unsigned int)arg1;
- (unsigned int)postFeedCount;
- (void)setPostFeedCount:(unsigned int)arg1;
- (unsigned int)exposeFeedCount;
- (void)setExposeFeedCount:(unsigned int)arg1;
- (unsigned int)favFeedCount;
- (void)setFavFeedCount:(unsigned int)arg1;
- (unsigned int)blackListFriendCount;
- (void)setBlackListFriendCount:(unsigned int)arg1;
- (unsigned int)outsiderFriendCount;
- (void)setOutsiderFriendCount:(unsigned int)arg1;
- (unsigned int)browseNewFeedCount;
- (void)setBrowseNewFeedCount:(unsigned int)arg1;
- (unsigned int)hasNewSnsMsgWhenEntrance;
- (void)setHasNewSnsMsgWhenEntrance:(unsigned int)arg1;
- (unsigned int)hasNewChatMsgWhenExit;
- (void)setHasNewChatMsgWhenExit:(unsigned int)arg1;
- (id)startBrowseSnsObjectId;
- (void)setStartBrowseSnsObjectId:(id)arg1;
- (id)endBrowseSnsObjectId;
- (void)setEndBrowseSnsObjectId:(id)arg1;
- (id)nextBrowseSnsObjectId;
- (void)setNextBrowseSnsObjectId:(id)arg1;
- (unsigned int)hasNewFeedInServer;
- (void)setHasNewFeedInServer:(unsigned int)arg1;
- (unsigned int)browseBrandUrlFeedCount;
- (void)setBrowseBrandUrlFeedCount:(unsigned int)arg1;
- (unsigned int)browseNotBrandUrlFeedCount;
- (void)setBrowseNotBrandUrlFeedCount:(unsigned int)arg1;
- (unsigned int)browseTextFeedCount;
- (void)setBrowseTextFeedCount:(unsigned int)arg1;
- (unsigned int)browseImageFeedCount;
- (void)setBrowseImageFeedCount:(unsigned int)arg1;
- (unsigned int)browseSightFeedCount;
- (void)setBrowseSightFeedCount:(unsigned int)arg1;
- (unsigned int)browseAdFeedCount;
- (void)setBrowseAdFeedCount:(unsigned int)arg1;
- (unsigned int)browseMusicFeedCount;
- (void)setBrowseMusicFeedCount:(unsigned int)arg1;
- (unsigned int)contactCount;
- (void)setContactCount:(unsigned int)arg1;
- (unsigned int)browseVideoFeedCount;
- (void)setBrowseVideoFeedCount:(unsigned int)arg1;
- (unsigned int)clickBrandUrlFeedCount;
- (void)setClickBrandUrlFeedCount:(unsigned int)arg1;
- (unsigned int)clickNotBrandUrlFeedCount;
- (void)setClickNotBrandUrlFeedCount:(unsigned int)arg1;
- (unsigned int)clickImageFeedCount;
- (void)setClickImageFeedCount:(unsigned int)arg1;
- (unsigned int)clickSightFeedCount;
- (void)setClickSightFeedCount:(unsigned int)arg1;
- (unsigned int)clickMusicFeedCount;
- (void)setClickMusicFeedCount:(unsigned int)arg1;
- (unsigned int)clickVideoFeedCount;
- (void)setClickVideoFeedCount:(unsigned int)arg1;
- (unsigned int)browseOtherFeedCount;
- (void)setBrowseOtherFeedCount:(unsigned int)arg1;
- (unsigned int)browseStreamVideoFeedCount;
- (void)setBrowseStreamVideoFeedCount:(unsigned int)arg1;
- (unsigned int)clickStreamVideoCount;
- (void)setClickStreamVideoCount:(unsigned int)arg1;
- (unsigned int)clickAdFeedCount;
- (void)setClickAdFeedCount:(unsigned int)arg1;
- (unsigned int)backGroundTime;
- (void)setBackGroundTime:(unsigned int)arg1;
- (unsigned int)browseTimeLineTime;
- (void)setBrowseTimeLineTime:(unsigned int)arg1;
- (unsigned int)browseMyAlbumTime;
- (void)setBrowseMyAlbumTime:(unsigned int)arg1;
- (unsigned int)browseOtherAlbumTime;
- (void)setBrowseOtherAlbumTime:(unsigned int)arg1;
- (unsigned int)browseMessageListTime;
- (void)setBrowseMessageListTime:(unsigned int)arg1;
- (unsigned int)browseNewPostTime;
- (void)setBrowseNewPostTime:(unsigned int)arg1;
- (unsigned int)browseFullScreenImageTime;
- (void)setBrowseFullScreenImageTime:(unsigned int)arg1;
- (unsigned int)browseFullScreenSightTime;
- (void)setBrowseFullScreenSightTime:(unsigned int)arg1;
- (unsigned int)browseMPArticleTime;
- (void)setBrowseMPArticleTime:(unsigned int)arg1;
- (unsigned int)browseExternalArticleTime;
- (void)setBrowseExternalArticleTime:(unsigned int)arg1;
- (unsigned int)browseAdFullScreenImageTime;
- (void)setBrowseAdFullScreenImageTime:(unsigned int)arg1;
- (unsigned int)browseAdSightTime;
- (void)setBrowseAdSightTime:(unsigned int)arg1;
- (unsigned int)browseAdDetailTime;
- (void)setBrowseAdDetailTime:(unsigned int)arg1;
- (unsigned int)browseAdFullScreenSightTime;
- (void)setBrowseAdFullScreenSightTime:(unsigned int)arg1;
- (unsigned int)browseAdLongVideoTime;
- (void)setBrowseAdLongVideoTime:(unsigned int)arg1;
- (unsigned int)browseForwardAdLongVideoTime;
- (void)setBrowseForwardAdLongVideoTime:(unsigned int)arg1;
- (unsigned long long)startBrowseTime;
- (void)setStartBrowseTime:(unsigned long long)arg1;
- (id)clickFeedId;
- (void)setClickFeedId:(id)arg1;
- (id)exposeFeedId;
- (void)setExposeFeedId:(id)arg1;
- (id)favFeedId;
- (void)setFavFeedId:(id)arg1;
- (id)clickAlbumUser;
- (void)setClickAlbumUser:(id)arg1;
- (id)shareTimeLineFeedId;
- (void)setShareTimeLineFeedId:(id)arg1;
- (id)clickAvatarFeedId;
- (void)setClickAvatarFeedId:(id)arg1;
- (id)clickNickNameFeedId;
- (void)setClickNickNameFeedId:(id)arg1;
- (id)forwardToSingleChatFeedId;
- (void)setForwardToSingleChatFeedId:(id)arg1;
- (id)forwardToChatRoomFeedId;
- (void)setForwardToChatRoomFeedId:(id)arg1;
- (id)browseFeedId;
- (void)setBrowseFeedId:(id)arg1;
- (id)commentOrLikeFeedId;
- (void)setCommentOrLikeFeedId:(id)arg1;
- (id)blacklistUser;
- (void)setBlacklistUser:(id)arg1;
- (id)outsiderUser;
- (void)setOutsiderUser:(id)arg1;
- (id)browseNewFeedId;
- (void)setBrowseNewFeedId:(id)arg1;
- (id)lastestUnreadFeedId;
- (void)setLastestUnreadFeedId:(id)arg1;
- (unsigned int)unreadLikeCount;
- (void)setUnreadLikeCount:(unsigned int)arg1;
- (unsigned int)unreadCommentCount;
- (void)setUnreadCommentCount:(unsigned int)arg1;
- (unsigned int)unreadMsgCount;
- (void)setUnreadMsgCount:(unsigned int)arg1;
- (unsigned int)browseAdCanvasPageTime;
- (void)setBrowseAdCanvasPageTime:(unsigned int)arg1;
- (unsigned int)browseForwardAdCanvasTime;
- (void)setBrowseForwardAdCanvasTime:(unsigned int)arg1;
- (unsigned int)browseMusicPlayerFeedCount;
- (void)setBrowseMusicPlayerFeedCount:(unsigned int)arg1;
- (unsigned int)clickMusicPlayerFeedCount;
- (void)setClickMusicPlayerFeedCount:(unsigned int)arg1;
- (unsigned int)browseFullScreenMusicPlayerTime;
- (void)setBrowseFullScreenMusicPlayerTime:(unsigned int)arg1;
- (unsigned int)browseFinderFeedCount;
- (void)setBrowseFinderFeedCount:(unsigned int)arg1;
- (unsigned int)browseFullScreenFinderFeedTime;
- (void)setBrowseFullScreenFinderFeedTime:(unsigned int)arg1;
- (unsigned int)clickFinderFeedCount;
- (void)setClickFinderFeedCount:(unsigned int)arg1;
- (unsigned int)browseTingAudioCardCount;
- (void)setBrowseTingAudioCardCount:(unsigned int)arg1;
- (unsigned int)clickTingAudioCardCount;
- (void)setClickTingAudioCardCount:(unsigned int)arg1;
- (unsigned int)browseTingListCardCount;
- (void)setBrowseTingListCardCount:(unsigned int)arg1;
- (unsigned int)clickTingListCardCount;
- (void)setClickTingListCardCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
