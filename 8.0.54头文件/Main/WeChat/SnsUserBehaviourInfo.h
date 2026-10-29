@interface SnsUserBehaviourInfo : NSObject <SnsRepotable>
{
    unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> _pageEnterTimeRecoredMap; // +0x8
    unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> _pageStayTimeRecoredMap; // +0x30
    BOOL _starCollectExposeFlag; // +0x58
    unsigned int _source; // +0x5c
    unsigned int _isFriend; // +0x60
    unsigned int _ownerSetting; // +0x64
    unsigned int _ownerPrivacySetting; // +0x68
    int _sessionid; // +0x6c
    unsigned int _albumEntrancePicCount; // +0x70
    unsigned int _albumExplodeFeedCount; // +0x74
    unsigned int _albumClickFeedCount; // +0x78
    unsigned int _albumClickFeedList; // +0x7c
    unsigned int _albumTimelineStayTime; // +0x80
    unsigned int _albumTimeDragCount; // +0x84
    unsigned int _likeBanner; // +0x88
    unsigned int _galleryBrowseFeedCount; // +0x8c
    unsigned int _galleryBrowsePictureCount; // +0x90
    unsigned int _galleryStayTime; // +0x94
    unsigned int _feedDetailPageBrowseFeedCount; // +0x98
    unsigned int _feedDetailPageBrowsePictureCount; // +0x9c
    unsigned int _feedDetailPageStayTime; // +0xa0
    unsigned int _totalStayTime; // +0xa4
    unsigned int _albumBannerFlag; // +0xa8
    unsigned int _signatureFlag; // +0xac
    unsigned int _togetherBrowseFeedCount; // +0xb0
    unsigned int _togetherBrowseTime; // +0xb4
    NSString * _ownerUsername; // +0xb8
    NSString * _albumClickFeedListStr; // +0xc0
    long long _togetherEntranceState; // +0xc8
    long long _browseSceneType; // +0xd0
    NSString * _albumSessionID; // +0xd8
    NSMutableSet * _explodeFeedCountSet; // +0xe0
    NSMutableSet * _clickFeedSet; // +0xe8
    NSMutableSet * _galleryBrowseFeedSet; // +0xf0
    NSMutableSet * _galleryBrowseMediaSet; // +0xf8
    NSMutableSet * _detailPageBrowsePicSet; // +0x100
    NSMutableSet * _togetherBrowseFeedIDSet; // +0x108
}
- (id)init;
- (void)incAlbumExplodeFeed:(id)arg1;
- (void)recordClickFeed:(id)arg1;
- (void)recordGallery:(id)arg1 mediaId:(id)arg2;
- (void)recordDetailPageBrowseMedia:(id)arg1;
- (void)incDetailPageBrowseFeedCount;
- (void)onSnsUserBehaviourPageAppear:(int)arg1;
- (void)onSnsUserBehaviourPageDisappear:(int)arg1;
- (void)recordTogetherBrowseFeedIDs:(id)arg1;
- (void)addTogetherBrowseTime:(double)arg1;
- (unsigned int)safeGetStayTimeOfPage:(int)arg1;
- (id)subSession;
- (unsigned int)protocolID;
- (void)doReport;
- (id)logStr;
- (id)ownerUsername;
- (void)setOwnerUsername:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned int)isFriend;
- (void)setIsFriend:(unsigned int)arg1;
- (unsigned int)ownerSetting;
- (void)setOwnerSetting:(unsigned int)arg1;
- (unsigned int)ownerPrivacySetting;
- (void)setOwnerPrivacySetting:(unsigned int)arg1;
- (int)sessionid;
- (void)setSessionid:(int)arg1;
- (unsigned int)albumEntrancePicCount;
- (void)setAlbumEntrancePicCount:(unsigned int)arg1;
- (unsigned int)albumExplodeFeedCount;
- (void)setAlbumExplodeFeedCount:(unsigned int)arg1;
- (unsigned int)albumClickFeedCount;
- (void)setAlbumClickFeedCount:(unsigned int)arg1;
- (unsigned int)albumClickFeedList;
- (void)setAlbumClickFeedList:(unsigned int)arg1;
- (unsigned int)albumTimelineStayTime;
- (void)setAlbumTimelineStayTime:(unsigned int)arg1;
- (unsigned int)albumTimeDragCount;
- (void)setAlbumTimeDragCount:(unsigned int)arg1;
- (unsigned int)likeBanner;
- (void)setLikeBanner:(unsigned int)arg1;
- (unsigned int)galleryBrowseFeedCount;
- (void)setGalleryBrowseFeedCount:(unsigned int)arg1;
- (unsigned int)galleryBrowsePictureCount;
- (void)setGalleryBrowsePictureCount:(unsigned int)arg1;
- (unsigned int)galleryStayTime;
- (void)setGalleryStayTime:(unsigned int)arg1;
- (unsigned int)feedDetailPageBrowseFeedCount;
- (void)setFeedDetailPageBrowseFeedCount:(unsigned int)arg1;
- (unsigned int)feedDetailPageBrowsePictureCount;
- (void)setFeedDetailPageBrowsePictureCount:(unsigned int)arg1;
- (unsigned int)feedDetailPageStayTime;
- (void)setFeedDetailPageStayTime:(unsigned int)arg1;
- (unsigned int)totalStayTime;
- (void)setTotalStayTime:(unsigned int)arg1;
- (id)albumClickFeedListStr;
- (void)setAlbumClickFeedListStr:(id)arg1;
- (unsigned int)albumBannerFlag;
- (void)setAlbumBannerFlag:(unsigned int)arg1;
- (unsigned int)signatureFlag;
- (void)setSignatureFlag:(unsigned int)arg1;
- (unsigned int)togetherBrowseFeedCount;
- (void)setTogetherBrowseFeedCount:(unsigned int)arg1;
- (unsigned int)togetherBrowseTime;
- (void)setTogetherBrowseTime:(unsigned int)arg1;
- (long long)togetherEntranceState;
- (void)setTogetherEntranceState:(long long)arg1;
- (long long)browseSceneType;
- (void)setBrowseSceneType:(long long)arg1;
- (id)albumSessionID;
- (void)setAlbumSessionID:(id)arg1;
- (BOOL)starCollectExposeFlag;
- (void)setStarCollectExposeFlag:(BOOL)arg1;
- (id)explodeFeedCountSet;
- (void)setExplodeFeedCountSet:(id)arg1;
- (id)clickFeedSet;
- (void)setClickFeedSet:(id)arg1;
- (id)galleryBrowseFeedSet;
- (void)setGalleryBrowseFeedSet:(id)arg1;
- (id)galleryBrowseMediaSet;
- (void)setGalleryBrowseMediaSet:(id)arg1;
- (id)detailPageBrowsePicSet;
- (void)setDetailPageBrowsePicSet:(id)arg1;
- (id)togetherBrowseFeedIDSet;
- (void)setTogetherBrowseFeedIDSet:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

