@interface WCFinderDataItemInnerModel : NSObject <PBCoding, WCTTableCoding>
{
    BOOL _isBlocked; // +0x8
    BOOL _hasShowPostFailTips; // +0x9
    BOOL _showOriginalTag; // +0xa
    BOOL _postWithMemberZoneLink; // +0xb
    unsigned int _funcFlag; // +0xc
    unsigned int _cardShowTime; // +0x10
    unsigned int _friendFavCount; // +0x14
    int _feedSource; // +0x18
    WCFinderPreviewEditVideoCompositionTask * _compositionTask; // +0x20
    WCFinderFeedVisibility * _feedVisibility; // +0x28
    NSString * _wxStatusIconId; // +0x30
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x38
    WCFinderGeneralReportModel * _generalReportModel; // +0x40
    OriginalSoundInfo * _originalSoundInfo; // +0x48
    unsigned long long _blockCgiFlag; // +0x50
    NSString * _innerRecommendReason; // +0x58
    FinderPlayHistoryInfo * _playHistoryInfo; // +0x60
    FinderPromotionJumpInfo * _finderPromotionJumpinfo; // +0x68
    WCFinderObjectHighlightInfo * _highlightInfo; // +0x70
    unsigned long long _validTimeForCacheFeed; // +0x78
    WCFinderFeedBindEventInfo * _eventInfo; // +0x80
    FinderModFeedInfo * _modfeedInfo; // +0x88
    FinderSimpleTopicInfo * _simpleTopicInfo; // +0x90
    double _shareCoverTime; // +0x98
    unsigned long long _triggerBeginPostTimeStamp; // +0xa0
    FinderMusicRealtimeInfo * _musicRealtimeInfo; // +0xa8
    FinderObjectWordingInfo * _asyncRecommendInfo; // +0xb0
    unsigned long long _postFlag; // +0xb8
    WCFinderIpRegionInfo * _ipRegionInfo; // +0xc0
    FinderEnhanceTypeList * _enhanceConfiguration; // +0xc8
    FinderCollectionInfo * _collectionInfo; // +0xd0
    FinderObjectExtend * _objectExtend; // +0xd8
    unsigned long long _postFromScene; // +0xe0
    NSString * _compositionTaskId; // +0xe8
    VideoEncodeTask * _encodeTask; // +0xf0
    FinderFlowCardRecommendReason * _flowCardRecommandReasonInfo; // +0xf8
    unsigned long long _likeStateFetchTimeStamp; // +0x100
    unsigned long long _compressCount; // +0x108
    NSString * _joinLiveColumnId; // +0x110
    FinderAudienceReserveLiveNotification * _reserveLiveNotificationInfo; // +0x118
    FinderOriginalDesc * _originalDesc; // +0x120
    unsigned long long _postSubType; // +0x128
    FinderPostTraceInfo * _postTraceInfo; // +0x130
    unsigned long long _enterScene; // +0x138
    unsigned long long _sourceEnterScene; // +0x140
    FinderObjectMemberInfo * _objectMemberInfo; // +0x148
    NSString * _postClientId; // +0x150
    long long _lastPostConfirmTimeStamp; // +0x158
    NSMutableArray * _lotteryAttendTypeList; // +0x160
    NSString * _routeTraceKey; // +0x168
    long long _lastErrorCode; // +0x170
    long long _globalFavFlag; // +0x178
    FinderObjectOriginalInfo * _originalInfo; // +0x180
    unsigned long long _tagType; // +0x188
    NSString * _tagSecKey; // +0x190
    JumpListenInfo * _jumpListenInfo; // +0x198
    unsigned long long _uploadStatus; // +0x1a0
    MMListenAudioMixFeedItem * _audioMixFeedItem; // +0x1a8
    FinderNewLifeDesc * _finderNewLifeDesc; // +0x1b0
    WCFinderMemberShipQAItem * _finderMemberShipQAItem; // +0x1b8
    FinderMemberData * _finderMemberData; // +0x1c0
    NSString * _gameClientParams; // +0x1c8
    double _compressDuration; // +0x1d0
    WCFinderPostCompressMetrics * _postCompressMetrics; // +0x1d8
}
+ (void)PBArrayAdd_wxStatusIconId;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_placeHolderInfo;
+ (void)PBArrayAdd_isBlocked;
+ (void)PBArrayAdd_generalReportModel;
+ (void)PBArrayAdd_originalSoundInfo;
+ (void)PBArrayAdd_blockCgiFlag;
+ (void)PBArrayAdd_innerRecommendReason;
+ (void)PBArrayAdd_musicRealtimeInfo;
+ (void)PBArrayAdd_playHistoryInfo;
+ (void)PBArrayAdd_finderPromotionJumpinfo;
+ (void)PBArrayAdd_showOriginalTag;
+ (void)PBArrayAdd_postFlag;
+ (void)PBArrayAdd_ipRegionInfo;
+ (void)PBArrayAdd_friendFavCount;
+ (void)PBArrayAdd_objectExtend;
+ (void)PBArrayAdd_compositionTaskId;
+ (void)PBArrayAdd_postFromScene;
+ (void)PBArrayAdd_flowCardRecommandReasonInfo;
+ (void)PBArrayAdd_likeStateFetchTimeStamp;
+ (void)PBArrayAdd_compressCount;
+ (void)PBArrayAdd_compressDuration;
+ (void)PBArrayAdd_originalDesc;
+ (void)PBArrayAdd_cardShowTime;
+ (void)PBArrayAdd_validTimeForCacheFeed;
+ (void)PBArrayAdd_eventInfo;
+ (void)PBArrayAdd_reserveLiveNotificationInfo;
+ (void)PBArrayAdd_postSubType;
+ (void)PBArrayAdd_postTraceInfo;
+ (void)PBArrayAdd_enterScene;
+ (void)PBArrayAdd_objectMemberInfo;
+ (void)PBArrayAdd_finderNewLifeDesc;
+ (void)PBArrayAdd_postClientId;
+ (void)PBArrayAdd_lastPostConfirmTimeStamp;
+ (void)PBArrayAdd_lastErrorCode;
+ (void)PBArrayAdd_finderMemberShipQAItem;
+ (void)PBArrayAdd_routeTraceKey;
+ (void)PBArrayAdd_postWithMemberZoneLink;
+ (void)PBArrayAdd_globalFavFlag;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_finderMemberData;
+ (void)PBArrayAdd_tagType;
+ (void)PBArrayAdd_tagSecKey;
+ (void)PBArrayAdd_sourceEnterScene;
+ (void)PBArrayAdd_feedSource;
+ (void)PBArrayAdd_modfeedInfo;
+ (void)PBArrayAdd_simpleTopicInfo;
+ (void)PBArrayAdd_shareCoverTime;
+ (void)PBArrayAdd_triggerBeginPostTimeStamp;
+ (void)PBArrayAdd_hasShowPostFailTips;
+ (void)PBArrayAdd_uploadStatus;
+ (void)PBArrayAdd_audioMixFeedItem;
+ (void)PBArrayAdd_feedVisibility;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (void)backfillReportInfoFromOld:(id)arg1 newModel:(id)arg2;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (BOOL)useBrandIdentityToShowFirstComment;
- (void)setCompositionTask:(id)arg1;
- (id)compositionTask;
- (void)setEncodeTask:(id)arg1;
- (id)internalClickCopyMsg;
- (id)description;
- (id)objectExtend;
- (void)setCompressDuration:(double)arg1;
- (id)generalReportModel;
- (id)feedVisibility;
- (void)setFeedVisibility:(id)arg1;
- (id)wxStatusIconId;
- (void)setWxStatusIconId:(id)arg1;
- (unsigned int)funcFlag;
- (void)setFuncFlag:(unsigned int)arg1;
- (unsigned int)cardShowTime;
- (void)setCardShowTime:(unsigned int)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)arg1;
- (void)setGeneralReportModel:(id)arg1;
- (id)originalSoundInfo;
- (void)setOriginalSoundInfo:(id)arg1;
- (unsigned long long)blockCgiFlag;
- (void)setBlockCgiFlag:(unsigned long long)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (id)playHistoryInfo;
- (void)setPlayHistoryInfo:(id)arg1;
- (id)finderPromotionJumpinfo;
- (void)setFinderPromotionJumpinfo:(id)arg1;
- (id)highlightInfo;
- (void)setHighlightInfo:(id)arg1;
- (unsigned long long)validTimeForCacheFeed;
- (void)setValidTimeForCacheFeed:(unsigned long long)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)modfeedInfo;
- (void)setModfeedInfo:(id)arg1;
- (id)simpleTopicInfo;
- (void)setSimpleTopicInfo:(id)arg1;
- (double)shareCoverTime;
- (void)setShareCoverTime:(double)arg1;
- (unsigned long long)triggerBeginPostTimeStamp;
- (void)setTriggerBeginPostTimeStamp:(unsigned long long)arg1;
- (BOOL)hasShowPostFailTips;
- (void)setHasShowPostFailTips:(BOOL)arg1;
- (id)musicRealtimeInfo;
- (void)setMusicRealtimeInfo:(id)arg1;
- (id)asyncRecommendInfo;
- (void)setAsyncRecommendInfo:(id)arg1;
- (BOOL)showOriginalTag;
- (void)setShowOriginalTag:(BOOL)arg1;
- (unsigned long long)postFlag;
- (void)setPostFlag:(unsigned long long)arg1;
- (id)ipRegionInfo;
- (void)setIpRegionInfo:(id)arg1;
- (id)enhanceConfiguration;
- (void)setEnhanceConfiguration:(id)arg1;
- (unsigned int)friendFavCount;
- (void)setFriendFavCount:(unsigned int)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (void)setObjectExtend:(id)arg1;
- (unsigned long long)postFromScene;
- (void)setPostFromScene:(unsigned long long)arg1;
- (int)feedSource;
- (void)setFeedSource:(int)arg1;
- (id)compositionTaskId;
- (void)setCompositionTaskId:(id)arg1;
- (id)encodeTask;
- (id)flowCardRecommandReasonInfo;
- (void)setFlowCardRecommandReasonInfo:(id)arg1;
- (unsigned long long)likeStateFetchTimeStamp;
- (void)setLikeStateFetchTimeStamp:(unsigned long long)arg1;
- (unsigned long long)compressCount;
- (void)setCompressCount:(unsigned long long)arg1;
- (id)joinLiveColumnId;
- (void)setJoinLiveColumnId:(id)arg1;
- (id)reserveLiveNotificationInfo;
- (void)setReserveLiveNotificationInfo:(id)arg1;
- (id)originalDesc;
- (void)setOriginalDesc:(id)arg1;
- (unsigned long long)postSubType;
- (void)setPostSubType:(unsigned long long)arg1;
- (id)postTraceInfo;
- (void)setPostTraceInfo:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)sourceEnterScene;
- (void)setSourceEnterScene:(unsigned long long)arg1;
- (id)objectMemberInfo;
- (void)setObjectMemberInfo:(id)arg1;
- (id)postClientId;
- (void)setPostClientId:(id)arg1;
- (long long)lastPostConfirmTimeStamp;
- (void)setLastPostConfirmTimeStamp:(long long)arg1;
- (id)lotteryAttendTypeList;
- (void)setLotteryAttendTypeList:(id)arg1;
- (id)routeTraceKey;
- (void)setRouteTraceKey:(id)arg1;
- (long long)lastErrorCode;
- (void)setLastErrorCode:(long long)arg1;
- (BOOL)postWithMemberZoneLink;
- (void)setPostWithMemberZoneLink:(BOOL)arg1;
- (long long)globalFavFlag;
- (void)setGlobalFavFlag:(long long)arg1;
- (id)originalInfo;
- (void)setOriginalInfo:(id)arg1;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (id)tagSecKey;
- (void)setTagSecKey:(id)arg1;
- (id)jumpListenInfo;
- (void)setJumpListenInfo:(id)arg1;
- (unsigned long long)uploadStatus;
- (void)setUploadStatus:(unsigned long long)arg1;
- (id)audioMixFeedItem;
- (void)setAudioMixFeedItem:(id)arg1;
- (id)finderNewLifeDesc;
- (void)setFinderNewLifeDesc:(id)arg1;
- (id)finderMemberShipQAItem;
- (void)setFinderMemberShipQAItem:(id)arg1;
- (id)finderMemberData;
- (void)setFinderMemberData:(id)arg1;
- (id)gameClientParams;
- (void)setGameClientParams:(id)arg1;
- (double)compressDuration;
- (id)postCompressMetrics;
- (void)setPostCompressMetrics:(id)arg1;
- (void).cxx_destruct;
@end
