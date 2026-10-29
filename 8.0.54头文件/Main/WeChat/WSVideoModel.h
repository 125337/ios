@interface WSVideoModel : WCPlayerHttpMediaWrap <NSCopying>
{
    BOOL _hasReorderUrl; // +0x8
    BOOL _isGoodLook; // +0x9
    BOOL _ifExpandCommentView; // +0xa
    BOOL _needEducate; // +0xb
    BOOL _videoApiFailHasRetryOnce; // +0xc
    BOOL _hasRetryToUpdateVideoApiOrCdnUrl; // +0xd
    BOOL _startByAutoPlay; // +0xe
    BOOL _bForbidOperate; // +0xf
    BOOL _bForbidFeedBack; // +0x10
    BOOL _bForbidFeedBackBySvr; // +0x11
    BOOL _isVideoVoted; // +0x12
    BOOL _hasShowAttachView; // +0x13
    BOOL _hasTriggerRecommendInsert; // +0x14
    unsigned int _videoApiExpireTime; // +0x18
    unsigned int _fileSize; // +0x1c
    unsigned int _pxWidth; // +0x20
    unsigned int _pxHeight; // +0x24
    unsigned int _uiUrlType; // +0x28
    unsigned int _bitRate; // +0x2c
    unsigned int _cdnScene; // +0x30
    unsigned int _cdnSourceType; // +0x34
    unsigned int _duration; // +0x38
    unsigned int _playCount; // +0x3c
    unsigned int _category; // +0x40
    unsigned int _realShareCategory; // +0x44
    unsigned int _resultType; // +0x48
    unsigned int _type; // +0x4c
    unsigned int _itemType; // +0x50
    unsigned int _globalColikeCnt; // +0x54
    unsigned int _externalVideo; // +0x58
    int _eUrlStatus; // +0x5c
    unsigned int _replayCount; // +0x60
    unsigned int _pauseCount; // +0x64
    unsigned int _videoVotes; // +0x68
    unsigned int _friendVotes; // +0x6c
    unsigned int _videoVoteSthreshold; // +0x70
    unsigned int _friendVoteSthreshold; // +0x74
    unsigned int _switchFlag; // +0x78
    unsigned int _videoSecondType; // +0x7c
    unsigned int _insertPos; // +0x80
    unsigned int _requestDuration; // +0x84
    unsigned int _requestPercent; // +0x88
    NSString * _vid; // +0x90
    NSString * _title; // +0x98
    NSString * _titleUrl; // +0xa0
    NSString * _desc; // +0xa8
    NSString * _docUrl; // +0xb0
    NSString * _docId; // +0xb8
    NSString * _videoPlatform; // +0xc0
    NSString * _videoApi; // +0xc8
    NSString * _thumbUrl; // +0xd0
    NSArray * _arrVideoUrl; // +0xd8
    NSString * _shareString; // +0xe0
    NSString * _videoChannelTitle; // +0xe8
    NSString * _sourceImgUrl; // +0xf0
    NSString * _source; // +0xf8
    NSString * _sourceUrl; // +0x100
    NSString * _bizUserName; // +0x108
    long long _sourceJumpType; // +0x110
    NSString * _shareUrl; // +0x118
    NSString * _shareTitle; // +0x120
    NSString * _shareDesc; // +0x128
    NSString * _shareImgUrl; // +0x130
    NSString * _strPlayCount; // +0x138
    NSString * _expand; // +0x140
    NSString * _searchId; // +0x148
    NSString * _openId; // +0x150
    NSString * _sessionId; // +0x158
    NSString * _itemExpand; // +0x160
    NSMutableArray * _extParams; // +0x168
    NSString * _byPass; // +0x170
    NSArray * _arrTagInfo; // +0x178
    double _cacheForTitleHeight; // +0x180
    NSString * _bigThumbUrl; // +0x188
    NSString * _smallThumbUrl; // +0x190
    unsigned long long _ui64PlayStartTime; // +0x198
    unsigned long long _ui64PlayEndTime; // +0x1a0
    NSArray * _arrFeedBack; // +0x1a8
    NSDictionary * _mainFeedBack; // +0x1b0
    NSArray * _arrLikeFriends; // +0x1b8
    NSString * _originVideoId; // +0x1c0
    WSVideoModel * _attachVideoModel; // +0x1c8
}
+ (id)GetMainFeedBackButtonDic:(id)arg1;
+ (id)GetValidFeedBackArray:(id)arg1;
+ (id)ParseFromNewDictionary:(id)arg1;
+ (id)parseFromWCVideoFlowInfo:(id)arg1;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromXMLString:(id)arg1;
+ (id)containerFromJSON:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)doCopyFromVideoModel:(id)arg1;
- (void)adjustUrlIfNeeded;
- (void)compatShareModel;
- (void)compatPagingModel;
- (BOOL)canAutoPlay;
- (id)getWSVideoUrl;
- (void)mergeVideoApiAttrFromVideoModel:(id)arg1;
- (BOOL)shouldRecommendVideoInsert;
- (void)triggeredRecommendInsert;
- (void)setIsGoodLook:(BOOL)arg1;
- (BOOL)isGoodLookOpen;
- (BOOL)isMiniVideo;
- (void)setMiniVideo:(BOOL)arg1;
- (void)onOperateVote:(BOOL)arg1;
- (id)transStringForCount:(unsigned int)arg1;
- (BOOL)isLikeInfoValid;
- (unsigned int)getVoteDisplayLogType;
- (id)getVoteDisplayFriendUsrList;
- (id)parseToWCVideoFlowInfo;
- (id)toXML;
- (id)generateJSONForArrTagInfo;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleUrl;
- (void)setTitleUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)docUrl;
- (void)setDocUrl:(id)arg1;
- (id)docId;
- (void)setDocId:(id)arg1;
- (id)videoPlatform;
- (void)setVideoPlatform:(id)arg1;
- (id)videoApi;
- (void)setVideoApi:(id)arg1;
- (unsigned int)videoApiExpireTime;
- (void)setVideoApiExpireTime:(unsigned int)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)arrVideoUrl;
- (void)setArrVideoUrl:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (unsigned int)pxWidth;
- (void)setPxWidth:(unsigned int)arg1;
- (unsigned int)pxHeight;
- (void)setPxHeight:(unsigned int)arg1;
- (unsigned int)uiUrlType;
- (void)setUiUrlType:(unsigned int)arg1;
- (unsigned int)bitRate;
- (void)setBitRate:(unsigned int)arg1;
- (unsigned int)cdnScene;
- (void)setCdnScene:(unsigned int)arg1;
- (unsigned int)cdnSourceType;
- (void)setCdnSourceType:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)shareString;
- (void)setShareString:(id)arg1;
- (id)videoChannelTitle;
- (void)setVideoChannelTitle:(id)arg1;
- (id)sourceImgUrl;
- (void)setSourceImgUrl:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (long long)sourceJumpType;
- (void)setSourceJumpType:(long long)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)shareDesc;
- (void)setShareDesc:(id)arg1;
- (id)shareImgUrl;
- (void)setShareImgUrl:(id)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (id)strPlayCount;
- (void)setStrPlayCount:(id)arg1;
- (id)expand;
- (void)setExpand:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (unsigned int)category;
- (void)setCategory:(unsigned int)arg1;
- (unsigned int)realShareCategory;
- (void)setRealShareCategory:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)resultType;
- (void)setResultType:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)itemExpand;
- (void)setItemExpand:(id)arg1;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (BOOL)isGoodLook;
- (BOOL)ifExpandCommentView;
- (void)setIfExpandCommentView:(BOOL)arg1;
- (BOOL)needEducate;
- (void)setNeedEducate:(BOOL)arg1;
- (unsigned int)globalColikeCnt;
- (void)setGlobalColikeCnt:(unsigned int)arg1;
- (BOOL)videoApiFailHasRetryOnce;
- (void)setVideoApiFailHasRetryOnce:(BOOL)arg1;
- (BOOL)hasRetryToUpdateVideoApiOrCdnUrl;
- (void)setHasRetryToUpdateVideoApiOrCdnUrl:(BOOL)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)byPass;
- (void)setByPass:(id)arg1;
- (unsigned int)externalVideo;
- (void)setExternalVideo:(unsigned int)arg1;
- (id)arrTagInfo;
- (void)setArrTagInfo:(id)arg1;
- (double)cacheForTitleHeight;
- (void)setCacheForTitleHeight:(double)arg1;
- (int)eUrlStatus;
- (void)setEUrlStatus:(int)arg1;
- (id)bigThumbUrl;
- (void)setBigThumbUrl:(id)arg1;
- (id)smallThumbUrl;
- (void)setSmallThumbUrl:(id)arg1;
- (BOOL)startByAutoPlay;
- (void)setStartByAutoPlay:(BOOL)arg1;
- (unsigned long long)ui64PlayStartTime;
- (void)setUi64PlayStartTime:(unsigned long long)arg1;
- (unsigned long long)ui64PlayEndTime;
- (void)setUi64PlayEndTime:(unsigned long long)arg1;
- (unsigned int)replayCount;
- (void)setReplayCount:(unsigned int)arg1;
- (unsigned int)pauseCount;
- (void)setPauseCount:(unsigned int)arg1;
- (BOOL)bForbidOperate;
- (void)setBForbidOperate:(BOOL)arg1;
- (BOOL)bForbidFeedBack;
- (void)setBForbidFeedBack:(BOOL)arg1;
- (BOOL)bForbidFeedBackBySvr;
- (void)setBForbidFeedBackBySvr:(BOOL)arg1;
- (id)arrFeedBack;
- (void)setArrFeedBack:(id)arg1;
- (id)mainFeedBack;
- (void)setMainFeedBack:(id)arg1;
- (unsigned int)videoVotes;
- (void)setVideoVotes:(unsigned int)arg1;
- (unsigned int)friendVotes;
- (void)setFriendVotes:(unsigned int)arg1;
- (unsigned int)videoVoteSthreshold;
- (void)setVideoVoteSthreshold:(unsigned int)arg1;
- (unsigned int)friendVoteSthreshold;
- (void)setFriendVoteSthreshold:(unsigned int)arg1;
- (BOOL)isVideoVoted;
- (void)setIsVideoVoted:(BOOL)arg1;
- (id)arrLikeFriends;
- (void)setArrLikeFriends:(id)arg1;
- (unsigned int)switchFlag;
- (void)setSwitchFlag:(unsigned int)arg1;
- (unsigned int)videoSecondType;
- (void)setVideoSecondType:(unsigned int)arg1;
- (id)originVideoId;
- (void)setOriginVideoId:(id)arg1;
- (unsigned int)insertPos;
- (void)setInsertPos:(unsigned int)arg1;
- (unsigned int)requestDuration;
- (void)setRequestDuration:(unsigned int)arg1;
- (unsigned int)requestPercent;
- (void)setRequestPercent:(unsigned int)arg1;
- (id)attachVideoModel;
- (void)setAttachVideoModel:(id)arg1;
- (BOOL)hasShowAttachView;
- (void)setHasShowAttachView:(BOOL)arg1;
- (BOOL)hasTriggerRecommendInsert;
- (void)setHasTriggerRecommendInsert:(BOOL)arg1;
- (void).cxx_destruct;
@end

