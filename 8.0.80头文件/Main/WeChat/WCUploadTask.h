@interface WCUploadTask : NSObject <NSCoding>
{
    NSString * serverID; // +0x8
    NSString * clientID; // +0x10
    int type; // +0x18
    BOOL isPrivate; // +0x1c
    NSMutableArray * sharedGroupIDs; // +0x20
    BOOL isSyncToWeibo; // +0x28
    BOOL isSyncToFacebook; // +0x29
    BOOL isSyncToTwitter; // +0x2a
    BOOL isSyncToQZone; // +0x2b
    NSString * statisticsData; // +0x30
    WCLocationInfo * locationInfo; // +0x38
    SnsWeAppInfo * snsWeAppInfo; // +0x40
    NSString * linkUrl; // +0x48
    NSString * title; // +0x50
    NSString * desc; // +0x58
    NSString * contentDesc; // +0x60
    int contentDescShowType; // +0x68
    int contentDescScene; // +0x6c
    unsigned int contentAttributeBitSetFlag; // +0x70
    WCAppInfo * appInfo; // +0x78
    WCActionInfo * actionInfo; // +0x80
    WCMusicInfo * musicInfo; // +0x88
    WCStreamVideoInfo * streaVideoInfo; // +0x90
    WCWeAppInfo * weappInfo; // +0x98
    NSString * sourceUserName; // +0xa0
    NSString * sourceNickName; // +0xa8
    NSMutableArray * groupUserList; // +0xb0
    NSMutableArray * blackUserList; // +0xb8
    NSMutableArray * withUserList; // +0xc0
    NSMutableArray * mediaList; // +0xc8
    SnsObject * snsObj; // +0xd0
    WCDataItem * dataItem; // +0xd8
    NSDate * createTime; // +0xe0
    long long uploadResult; // +0xe8
    long long BGImgSetType; // +0xf0
    BOOL isUploadFailed; // +0xf8
    int postSource; // +0xfc
    NSString * twitterOAuthToken; // +0x100
    NSString * twitterOAuthTokenSecret; // +0x108
    BOOL isDeleted; // +0x110
    UserOpInfo * opInfo; // +0x118
    int sightFolded; // +0x120
    int showFlag; // +0x124
    WCNoteInfo * noteInfo; // +0x128
    WCVideoFlowInfo * videoFlowInfo; // +0x130
    WCAppMsgShareInfo * appMsgShareInfo; // +0x138
    WCGameShareCardInfo * gameShareCardInfo; // +0x140
    BOOL _isAskXiaoWei; // +0x148
    BOOL _isPending; // +0x149
    int _visibilityType; // +0x14c
    int _pendingBusinessType; // +0x150
    unsigned int _pendingTime; // +0x154
    int _sessionActionType; // +0x158
    NSMutableArray * togetherUserList; // +0x160
    long long uploadFailedCount; // +0x168
    WCStreamVideoInfo * streamVideoInfo; // +0x170
    NSString * shareOriginUrl; // +0x178
    NSString * shareOpenUrl; // +0x180
    NSString * jsAppId; // +0x188
    NSMutableDictionary * statParasDic; // +0x190
    NSString * statExtStr; // +0x198
    NSString * canvasInfoXml; // +0x1a0
    WCDataItem * _postedDataItem; // +0x1a8
    long long _publicBrandContactType; // +0x1b0
    long long _snsCoverOffset; // +0x1b8
    WCBgmInfo * _bgmInfo; // +0x1c0
    WCPhotoAccountReportInfo * _photoAccountReportInfo; // +0x1c8
    NSString * _clientCtxBuffer; // +0x1d0
    NSString * _publicFinderUserName; // +0x1d8
    NSString * _publicPhotoAccountUserName; // +0x1e0
    NSString * _publicPhotoAccountNickName; // +0x1e8
    WCMomentsTemplateInfo * _templateInfo; // +0x1f0
    EcsInfo * _ecsInfo; // +0x1f8
    NSMutableArray * _groupContactTags; // +0x200
    NSMutableArray * _blackContactTags; // +0x208
    NSMutableArray * _interactUserList; // +0x210
    NSString * _visibilityGroupName; // +0x218
    unsigned long long _tempUserCount; // +0x220
    unsigned long long _contactTagCount; // +0x228
    WCFinderShareToMomentsItem * _finderShareToMomentsItem; // +0x230
    WCFinderTopicShareItem * _finderTopicShareItem; // +0x238
    WCFinderContentColumnSharedItem * _finderContentColumnSharedItem; // +0x240
    WCBrandMpVideoItem * _brandMpVideoItem; // +0x248
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x250
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x258
    WCFinderShareItemContainer * _finderShareItem; // +0x260
    WCFinderCollectionShareItem * _finderCollectionShareItem; // +0x268
    MMMusicShareItem * _musicShareItem; // +0x270
    WCLiteAppInfo * _liteappInfo; // +0x278
    WCFinderThemeLiveStreamShareItem * _finderThemeLiveShareItem; // +0x280
    WCMomentsTigerInfo * _tigerInfo; // +0x288
    WCMomentsRabbitInfo * _rabbitInfo; // +0x290
    WCMomentsDragonInfo * _dragonInfo; // +0x298
    WCMomentsSpringFestivalInfo * _springFestivalInfo; // +0x2a0
    NSArray * _springFestivalKeywords; // +0x2a8
    WCSnsLikeEasterEggInfo * _likeEasterEggInfo; // +0x2b0
    TingShareListenItem * _tingListenItem; // +0x2b8
    TingShareCategoryItem * _tingCategoryItem; // +0x2c0
    TingShareChatRoomItem * _tingChatRoomItem; // +0x2c8
    TingShareLyricsItem * _tingLyricsItem; // +0x2d0
    NSString * _askXiaoWeiSessionId; // +0x2d8
    unsigned long long _askXiaoWeiEditId; // +0x2e0
    unsigned long long _askXiaoWeiVideoSourceType; // +0x2e8
    NSString * _pendingTaskId; // +0x2f0
    NSString * _sessionID; // +0x2f8
    WCTimelineExtBean * _extBean; // +0x300
    NSString * _postCycleId; // +0x308
    WCMomentsPostReportSession * _postReportSession; // +0x310
    id /* block */ _uploadTaskProgressBlock; // +0x318
    id /* block */ _askXiaoWeiCdnDoneBlock; // +0x320
    unsigned long long _postTipsViewType; // +0x328
    NSString * _RISKY_savedSightCompositeTaskId; // +0x330
    WCSightVideoCompositeTask * _cachedSightCompositeTask; // +0x338
}
+ (id)getBusinessTypeStr:(int)arg1;
+ (BOOL)isPendingBusinessValid:(int)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addThumbForPrevMedia:(id)arg1;
- (BOOL)isLocationValide;
- (id)extBean;
- (void)setPostReportSession:(id)arg1;
- (id)getFeedsExperiments;
- (id)RISKY_savedSightCompositeTaskId;
- (void)setCachedSightCompositeTask:(id)arg1 atIndex:(long long)arg2;
- (void)onSightVideoCompositeTaskProgress:(double)arg1;
- (void)onMediaUploadProgress:(id)arg1 progressModel:(id)arg2;
- (id)getCachedSightCompositeTaskAtIndex:(long long)arg1;
- (void)removeCachedSightCompositeTaskAtIndex:(long long)arg1;
- (void)updateUploadState:(long long)arg1;
- (void)setUploadFailedStatus:(BOOL)arg1;
- (id)description;
- (void)setDeleted;
- (void)setOriginal:(BOOL)arg1;
- (void)resetUnPending;
- (void)createPendingTempResourceFile;
- (void)clearPendingTempResourceFile;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (BOOL)isSyncToWeibo;
- (void)setIsSyncToWeibo:(BOOL)arg1;
- (BOOL)isSyncToFacebook;
- (void)setIsSyncToFacebook:(BOOL)arg1;
- (BOOL)isSyncToTwitter;
- (void)setIsSyncToTwitter:(BOOL)arg1;
- (BOOL)isSyncToQZone;
- (void)setIsSyncToQZone:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)withUserList;
- (void)setWithUserList:(id)arg1;
- (id)togetherUserList;
- (void)setTogetherUserList:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)snsObj;
- (void)setSnsObj:(id)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (long long)uploadResult;
- (void)setUploadResult:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (id)sourceNickName;
- (void)setSourceNickName:(id)arg1;
- (id)contentDesc;
- (void)setContentDesc:(id)arg1;
- (int)contentDescShowType;
- (void)setContentDescShowType:(int)arg1;
- (int)contentDescScene;
- (void)setContentDescScene:(int)arg1;
- (unsigned int)contentAttributeBitSetFlag;
- (void)setContentAttributeBitSetFlag:(unsigned int)arg1;
- (long long)BGImgSetType;
- (void)setBGImgSetType:(long long)arg1;
- (BOOL)isUploadFailed;
- (void)setIsUploadFailed:(BOOL)arg1;
- (long long)uploadFailedCount;
- (void)setUploadFailedCount:(long long)arg1;
- (id)sharedGroupIDs;
- (void)setSharedGroupIDs:(id)arg1;
- (int)postSource;
- (void)setPostSource:(int)arg1;
- (id)twitterOAuthToken;
- (void)setTwitterOAuthToken:(id)arg1;
- (id)twitterOAuthTokenSecret;
- (void)setTwitterOAuthTokenSecret:(id)arg1;
- (id)statisticsData;
- (void)setStatisticsData:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)weappInfo;
- (void)setWeappInfo:(id)arg1;
- (id)streamVideoInfo;
- (void)setStreamVideoInfo:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)blackUserList;
- (void)setBlackUserList:(id)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id)groupUserList;
- (void)setGroupUserList:(id)arg1;
- (id)shareOriginUrl;
- (void)setShareOriginUrl:(id)arg1;
- (id)shareOpenUrl;
- (void)setShareOpenUrl:(id)arg1;
- (id)jsAppId;
- (void)setJsAppId:(id)arg1;
- (id)statParasDic;
- (void)setStatParasDic:(id)arg1;
- (id)opInfo;
- (void)setOpInfo:(id)arg1;
- (id)statExtStr;
- (void)setStatExtStr:(id)arg1;
- (id)canvasInfoXml;
- (void)setCanvasInfoXml:(id)arg1;
- (int)sightFolded;
- (void)setSightFolded:(int)arg1;
- (int)showFlag;
- (void)setShowFlag:(int)arg1;
- (id)noteInfo;
- (void)setNoteInfo:(id)arg1;
- (id)videoFlowInfo;
- (void)setVideoFlowInfo:(id)arg1;
- (id)appMsgShareInfo;
- (void)setAppMsgShareInfo:(id)arg1;
- (id)snsWeAppInfo;
- (void)setSnsWeAppInfo:(id)arg1;
- (id)gameShareCardInfo;
- (void)setGameShareCardInfo:(id)arg1;
- (id)postedDataItem;
- (void)setPostedDataItem:(id)arg1;
- (long long)publicBrandContactType;
- (void)setPublicBrandContactType:(long long)arg1;
- (long long)snsCoverOffset;
- (void)setSnsCoverOffset:(long long)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)photoAccountReportInfo;
- (void)setPhotoAccountReportInfo:(id)arg1;
- (id)clientCtxBuffer;
- (void)setClientCtxBuffer:(id)arg1;
- (id)publicFinderUserName;
- (void)setPublicFinderUserName:(id)arg1;
- (id)publicPhotoAccountUserName;
- (void)setPublicPhotoAccountUserName:(id)arg1;
- (id)publicPhotoAccountNickName;
- (void)setPublicPhotoAccountNickName:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)ecsInfo;
- (void)setEcsInfo:(id)arg1;
- (id)groupContactTags;
- (void)setGroupContactTags:(id)arg1;
- (id)blackContactTags;
- (void)setBlackContactTags:(id)arg1;
- (id)interactUserList;
- (void)setInteractUserList:(id)arg1;
- (int)visibilityType;
- (void)setVisibilityType:(int)arg1;
- (id)visibilityGroupName;
- (void)setVisibilityGroupName:(id)arg1;
- (unsigned long long)tempUserCount;
- (void)setTempUserCount:(unsigned long long)arg1;
- (unsigned long long)contactTagCount;
- (void)setContactTagCount:(unsigned long long)arg1;
- (id)finderShareToMomentsItem;
- (void)setFinderShareToMomentsItem:(id)arg1;
- (id)finderTopicShareItem;
- (void)setFinderTopicShareItem:(id)arg1;
- (id)finderContentColumnSharedItem;
- (void)setFinderContentColumnSharedItem:(id)arg1;
- (id)brandMpVideoItem;
- (void)setBrandMpVideoItem:(id)arg1;
- (id)finderLongVideoShareItem;
- (void)setFinderLongVideoShareItem:(id)arg1;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (id)finderShareItem;
- (void)setFinderShareItem:(id)arg1;
- (id)finderCollectionShareItem;
- (void)setFinderCollectionShareItem:(id)arg1;
- (id)musicShareItem;
- (void)setMusicShareItem:(id)arg1;
- (id)liteappInfo;
- (void)setLiteappInfo:(id)arg1;
- (id)finderThemeLiveShareItem;
- (void)setFinderThemeLiveShareItem:(id)arg1;
- (id)tigerInfo;
- (void)setTigerInfo:(id)arg1;
- (id)rabbitInfo;
- (void)setRabbitInfo:(id)arg1;
- (id)dragonInfo;
- (void)setDragonInfo:(id)arg1;
- (id)springFestivalInfo;
- (void)setSpringFestivalInfo:(id)arg1;
- (id)springFestivalKeywords;
- (void)setSpringFestivalKeywords:(id)arg1;
- (id)likeEasterEggInfo;
- (void)setLikeEasterEggInfo:(id)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)tingChatRoomItem;
- (void)setTingChatRoomItem:(id)arg1;
- (id)tingLyricsItem;
- (void)setTingLyricsItem:(id)arg1;
- (BOOL)isAskXiaoWei;
- (void)setIsAskXiaoWei:(BOOL)arg1;
- (id)askXiaoWeiSessionId;
- (void)setAskXiaoWeiSessionId:(id)arg1;
- (unsigned long long)askXiaoWeiEditId;
- (void)setAskXiaoWeiEditId:(unsigned long long)arg1;
- (unsigned long long)askXiaoWeiVideoSourceType;
- (void)setAskXiaoWeiVideoSourceType:(unsigned long long)arg1;
- (BOOL)isPending;
- (void)setIsPending:(BOOL)arg1;
- (int)pendingBusinessType;
- (void)setPendingBusinessType:(int)arg1;
- (id)pendingTaskId;
- (void)setPendingTaskId:(id)arg1;
- (unsigned int)pendingTime;
- (void)setPendingTime:(unsigned int)arg1;
- (int)sessionActionType;
- (void)setSessionActionType:(int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void)setExtBean:(id)arg1;
- (id)postCycleId;
- (void)setPostCycleId:(id)arg1;
- (id)postReportSession;
- (id /* block */)uploadTaskProgressBlock;
- (void)setUploadTaskProgressBlock:(id /* block */)arg1;
- (id /* block */)askXiaoWeiCdnDoneBlock;
- (void)setAskXiaoWeiCdnDoneBlock:(id /* block */)arg1;
- (unsigned long long)postTipsViewType;
- (void)setPostTipsViewType:(unsigned long long)arg1;
- (void)setRISKY_savedSightCompositeTaskId:(id)arg1;
- (id)cachedSightCompositeTask;
- (void)setCachedSightCompositeTask:(id)arg1;
- (void).cxx_destruct;
@end
