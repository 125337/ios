@interface WCFinderDataItemInnerModel : NSObject <PBCoding, WCTTableCoding>
{
    BOOL _isBlocked; // +0x8
    BOOL _showOriginalTag; // +0x9
    BOOL _postWithMemberZoneLink; // +0xa
    unsigned int _funcFlag; // +0xc
    unsigned int _cardShowTime; // +0x10
    unsigned int _friendFavCount; // +0x14
    WCFinderPreviewEditVideoCompositionTask * _compositionTask; // +0x18
    NSString * _wxStatusIconId; // +0x20
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x28
    WCFinderGeneralReportModel * _generalReportModel; // +0x30
    OriginalSoundInfo * _originalSoundInfo; // +0x38
    unsigned long long _blockCgiFlag; // +0x40
    NSString * _innerRecommendReason; // +0x48
    FinderPlayHistoryInfo * _playHistoryInfo; // +0x50
    FinderPromotionJumpInfo * _finderPromotionJumpinfo; // +0x58
    WCFinderObjectHighlightInfo * _highlightInfo; // +0x60
    unsigned long long _validTimeForCacheFeed; // +0x68
    WCFinderFeedBindEventInfo * _eventInfo; // +0x70
    FinderModFeedInfo * _modfeedInfo; // +0x78
    FinderSimpleTopicInfo * _simpleTopicInfo; // +0x80
    double _shareCoverTime; // +0x88
    FinderMusicRealtimeInfo * _musicRealtimeInfo; // +0x90
    FinderObjectWordingInfo * _asyncRecommendInfo; // +0x98
    unsigned long long _postFlag; // +0xa0
    WCFinderIpRegionInfo * _ipRegionInfo; // +0xa8
    FinderEnhanceTypeList * _enhanceConfiguration; // +0xb0
    FinderCollectionInfo * _collectionInfo; // +0xb8
    FinderObjectExtend * _objectExtend; // +0xc0
    unsigned long long _postFromScene; // +0xc8
    unsigned long long _feedSource; // +0xd0
    NSString * _compositionTaskId; // +0xd8
    VideoEncodeTask * _encodeTask; // +0xe0
    FinderFlowCardRecommendReason * _flowCardRecommandReasonInfo; // +0xe8
    NSData * _sdkMediaFeature; // +0xf0
    unsigned long long _likeStateFetchTimeStamp; // +0xf8
    unsigned long long _compressCount; // +0x100
    NSString * _joinLiveColumnId; // +0x108
    FinderAudienceReserveLiveNotification * _reserveLiveNotificationInfo; // +0x110
    FinderOriginalDesc * _originalDesc; // +0x118
    unsigned long long _postSubType; // +0x120
    FinderPostTraceInfo * _postTraceInfo; // +0x128
    unsigned long long _enterScene; // +0x130
    unsigned long long _sourceEnterScene; // +0x138
    FinderObjectMemberInfo * _objectMemberInfo; // +0x140
    NSString * _postClientId; // +0x148
    long long _lastPostConfirmTimeStamp; // +0x150
    NSMutableArray * _lotteryAttendTypeList; // +0x158
    NSString * _routeTraceKey; // +0x160
    long long _lastErrorCode; // +0x168
    long long _globalFavFlag; // +0x170
    FinderObjectOriginalInfo * _originalInfo; // +0x178
    unsigned long long _tagType; // +0x180
    NSString * _tagSecKey; // +0x188
    FinderNewLifeDesc * _finderNewLifeDesc; // +0x190
    WCFinderMemberShipQAItem * _finderMemberShipQAItem; // +0x198
    FinderMemberData * _finderMemberData; // +0x1a0
    NSString * _gameClientParams; // +0x1a8
    double _compressDuration; // +0x1b0
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
+ (void)PBArrayAdd_sdkMediaFeature;
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
- (unsigned long long)feedSource;
- (void)setFeedSource:(unsigned long long)arg1;
- (id)compositionTaskId;
- (void)setCompositionTaskId:(id)arg1;
- (id)encodeTask;
- (id)flowCardRecommandReasonInfo;
- (void)setFlowCardRecommandReasonInfo:(id)arg1;
- (id)sdkMediaFeature;
- (void)setSdkMediaFeature:(id)arg1;
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
- (id)finderNewLifeDesc;
- (void)setFinderNewLifeDesc:(id)arg1;
- (id)finderMemberShipQAItem;
- (void)setFinderMemberShipQAItem:(id)arg1;
- (id)finderMemberData;
- (void)setFinderMemberData:(id)arg1;
- (id)gameClientParams;
- (void)setGameClientParams:(id)arg1;
- (double)compressDuration;
- (void).cxx_destruct;
@end

