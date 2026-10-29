@interface WCFinderPostSessionModel : NSObject <WCTColumnCoding, PBCoding>
{
    BOOL _referencePostAutoPlay; // +0x8
    BOOL _isInFinderMainScene; // +0x9
    BOOL _isSearchMusic; // +0xa
    BOOL _isBeauty; // +0xb
    BOOL _isDurationCut; // +0xc
    BOOL _newSelectOnPostPage; // +0xd
    BOOL _isPostByPreUpload; // +0xe
    BOOL _isRealName; // +0xf
    BOOL _wxPayAuthorization; // +0x10
    BOOL _isContactLogout; // +0x11
    BOOL _hasClickLongDescTextView; // +0x12
    BOOL _hasCleanUpLongDesc; // +0x13
    BOOL _hasClickShortDescTextView; // +0x14
    BOOL _hasCleanUpShortDesc; // +0x15
    BOOL _joinEvent; // +0x16
    BOOL _isUploadDraft; // +0x17
    BOOL _hasUseSpecialCover; // +0x18
    BOOL _hasUploadModifyCover; // +0x19
    BOOL _hasUploadModifyShareCover; // +0x1a
    BOOL _notCheckLongVideoEncode; // +0x1b
    BOOL _syncPostLoading; // +0x1c
    BOOL _forbidSaveDraft; // +0x1d
    BOOL _showPostVideoToCommentAreaSwitch; // +0x1e
    BOOL _needPostFollowFeedVideoComment; // +0x1f
    BOOL _isRealShootContent; // +0x20
    BOOL _reportSkipManadatoryDeclareReason; // +0x21
    BOOL _alreadyCheckOriginal; // +0x22
    int _postCommentScene; // +0x24
    int _profileEnterType; // +0x28
    int _userPrepareScene; // +0x2c
    int _videoSourceType; // +0x30
    int _postFromDraft; // +0x34
    int _isSlowMotion; // +0x38
    int _postState; // +0x3c
    int _postEduShow; // +0x40
    int _useSWTranscoding; // +0x44
    int _useHWTranscoding; // +0x48
    int _enterBackgroundOnPostPage; // +0x4c
    int _memberAQOprType; // +0x50
    int _imageCount; // +0x54
    int _livePhotoCount; // +0x58
    int _likeEasterEggEmoticonSetterScene; // +0x5c
    WCFinderDataItem * _dataItem; // +0x60
    WCFinderJumpInfo * _postDataItemJumpInfo; // +0x68
    NSString * _sessionId; // +0x70
    NSString * _clickTemplateTaskID; // +0x78
    NSString * _shootEntrySvrExtInfo; // +0x80
    WCFinderPostSourceInfo * _sourceInfo; // +0x88
    WCFinderTemplateCreationInfo * _tmplCreationInfo; // +0x90
    unsigned long long _referenceVideoReportState; // +0x98
    NSString * _referenceVideoFeedId; // +0xa0
    NSString * _enterContextId; // +0xa8
    unsigned long long _shareScene; // +0xb0
    long long _enterChildScene; // +0xb8
    unsigned long long _createScene; // +0xc0
    unsigned long long _exitVCNumber; // +0xc8
    long long _enterTakeVideoMs; // +0xd0
    long long _enterEditVideoMs; // +0xd8
    long long _exitMs; // +0xe0
    long long _videoDurationMs; // +0xe8
    unsigned long long _videoEmojiNum; // +0xf0
    unsigned long long _videoTextNum; // +0xf8
    NSString * _videoMusicID; // +0x100
    unsigned long long _videoMusicIndex; // +0x108
    double _originalDuration; // +0x110
    double _targetDuration; // +0x118
    unsigned long long _MentionUsercnt; // +0x120
    unsigned long long _ClickMentionCnt; // +0x128
    unsigned long long _MentionCnt; // +0x130
    unsigned long long _MentionRepeatCnt; // +0x138
    NSString * _LbsAddressString; // +0x140
    NSData * _finderSecretData; // +0x148
    NSString * _recordInfo; // +0x150
    long long _videoSubType; // +0x158
    NSString * _postId; // +0x160
    NSString * _editId; // +0x168
    unsigned long long _remuxType; // +0x170
    NSString * _originFormat; // +0x178
    NSString * _compressFormat; // +0x180
    unsigned long long _cdnTimeMs; // +0x188
    NSMutableDictionary * _cdnTimeMsDetails; // +0x190
    unsigned long long _editTimeMs; // +0x198
    unsigned long long _postPageTimeMs; // +0x1a0
    unsigned long long _realWaitCDNDuration; // +0x1a8
    NSString * _longVideoId; // +0x1b0
    double _longVideoIdDuration; // +0x1b8
    double _fileSize; // +0x1c0
    double _longVideoFileSize; // +0x1c8
    unsigned long long _postPatMusicType; // +0x1d0
    unsigned long long _soundTrackType; // +0x1d8
    MMBGMSelectedMusicResult * _selectedMusicInfo; // +0x1e0
    NSString * _followSoundFeedId; // +0x1e8
    NSString * _followTemplateFeedId; // +0x1f0
    NSString * _followTopicFeedId; // +0x1f8
    NSString * _followMusicFeedId; // +0x200
    RecommendedMusicInfo * _patMusicInfo; // +0x208
    NSMutableArray * _patMusicIds; // +0x210
    long long _materialVideoCount; // +0x218
    long long _materialImageCount; // +0x220
    long long _recommendLbsIndex; // +0x228
    long long _postFeedStayTLDuration; // +0x230
    unsigned long long _originalSwitchStatus; // +0x238
    unsigned long long _originalDisableReason; // +0x240
    NSString * _memberAQProviderUsername; // +0x248
    long long _preUploadCDNStrategy; // +0x250
    FinderMusicReportInfo * _shootMusicReportInfo; // +0x258
    FinderMusicReportInfo * _editMusicReportInfo; // +0x260
    FinderMusicReportInfo * _imageMusicReportInfo; // +0x268
    unsigned long long _modifyDetailFlag; // +0x270
    EffectCreateContextInfo * _effectCreateContextInfo; // +0x278
    long long _enterPostTimeStamp; // +0x280
    NSString * _universalLink; // +0x288
    NSString * _businessType; // +0x290
    NSString * _appId; // +0x298
    WCFinderEventModel * _event; // +0x2a0
    NSString * _eventVisitId; // +0x2a8
    WCFinderSearchEventRequestParams * _eventRequestParams; // +0x2b0
    NSString * _draftId; // +0x2b8
    unsigned long long _draftType; // +0x2c0
    NSString * _localDraftId; // +0x2c8
    NSDictionary * _oneClickFilmReportingParams; // +0x2d0
    FinderMJPublisherInfo * _mjPublisherInfo; // +0x2d8
    NSString * _switchClubUsername; // +0x2e0
    WCFinderJumpInfo * _jumpInfo; // +0x2e8
    unsigned long long _forbidPostFlag; // +0x2f0
    FinderPostNewLifeInfo * _postNewLifeInfo; // +0x2f8
    NewLifeConnectPostPassthroughInfo * _postNewLifeConnectInfo; // +0x300
    long long _reportBusinessType; // +0x308
    FinderPostAttachExtInfo * _attachExtInfo; // +0x310
    NSString * _postTips; // +0x318
    NSString * _linkTips; // +0x320
    UIImage * _specialCoverImage; // +0x328
    UIImage * _specialFullCoverImage; // +0x330
    NSMutableArray * _coverEditTexts; // +0x338
    NSMutableArray * _shareEditTexts; // +0x340
    NSArray * _editTextWidgets; // +0x348
    NSArray * _shareTextWidgets; // +0x350
    NSString * _postBtnTitle; // +0x358
    WCFinderJumpInfo * _postJumpInfo; // +0x360
    NSString * _jsapiKVReportInfo; // +0x368
    NSString * _originHighlightTopic; // +0x370
    NSString * _followFeedTemplateId; // +0x378
    NSString * _mjComposingTimelineJsonString; // +0x380
    WCFinderInspirationSquareInfo * _inspirationSquareInfo; // +0x388
    NSData * _mjComposingTimelineData; // +0x390
    WCFinderOriginMediaUploadSession * _originVideoUploadSession; // +0x398
    WCEditVideoInformation * _uploadVideoInfomation; // +0x3a0
    NSData * _captionReportData; // +0x3a8
    CEmoticonWrap * _likeEasterEggEmoticon; // +0x3b0
    WCFinderPostStaticSnapshot * _directUploadStaticSnapshot; // +0x3b8
    WCFinderPostDirectUploadDecision * _directUploadDecision; // +0x3c0
}
+ (id)generatePostId;
+ (id)generatePostIdWithTimestampMs:(unsigned long long)arg1;
+ (void)PBArrayAdd_dataItem;
+ (void)PBArrayAdd_videoSourceType;
+ (void)PBArrayAdd_postFromDraft;
+ (void)PBArrayAdd_enterTakeVideoMs;
+ (void)PBArrayAdd_enterEditVideoMs;
+ (void)PBArrayAdd_exitMs;
+ (void)PBArrayAdd_videoDurationMs;
+ (void)PBArrayAdd_videoEmojiNum;
+ (void)PBArrayAdd_videoTextNum;
+ (void)PBArrayAdd_videoMusicID;
+ (void)PBArrayAdd_videoMusicIndex;
+ (void)PBArrayAdd_isSearchMusic;
+ (void)PBArrayAdd_isBeauty;
+ (void)PBArrayAdd_isDurationCut;
+ (void)PBArrayAdd_originalDuration;
+ (void)PBArrayAdd_targetDuration;
+ (void)PBArrayAdd_isSlowMotion;
+ (void)PBArrayAdd_MentionUsercnt;
+ (void)PBArrayAdd_ClickMentionCnt;
+ (void)PBArrayAdd_MentionCnt;
+ (void)PBArrayAdd_MentionRepeatCnt;
+ (void)PBArrayAdd_exitVCNumber;
+ (void)PBArrayAdd_postState;
+ (void)PBArrayAdd_postEduShow;
+ (void)PBArrayAdd_LbsAddressString;
+ (void)PBArrayAdd_recordInfo;
+ (void)PBArrayAdd_videoSubType;
+ (void)PBArrayAdd_postId;
+ (void)PBArrayAdd_editId;
+ (void)PBArrayAdd_remuxType;
+ (void)PBArrayAdd_originFormat;
+ (void)PBArrayAdd_compressFormat;
+ (void)PBArrayAdd_cdnTimeMs;
+ (void)PBArrayAdd_editTimeMs;
+ (void)PBArrayAdd_longVideoId;
+ (void)PBArrayAdd_longVideoIdDuration;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_longVideoFileSize;
+ (void)PBArrayAdd_soundTrackType;
+ (void)PBArrayAdd_followSoundFeedId;
+ (void)PBArrayAdd_event;
+ (void)PBArrayAdd_useSWTranscoding;
+ (void)PBArrayAdd_draftId;
+ (void)PBArrayAdd_draftType;
+ (void)PBArrayAdd_useHWTranscoding;
+ (void)PBArrayAdd_jumpInfo;
+ (void)PBArrayAdd_isUploadDraft;
+ (void)PBArrayAdd_postPageTimeMs;
+ (void)PBArrayAdd_realWaitCDNDuration;
+ (void)PBArrayAdd_newSelectOnPostPage;
+ (void)PBArrayAdd_isPostByPreUpload;
+ (void)PBArrayAdd_jsapiKVReportInfo;
+ (void)PBArrayAdd_enterBackgroundOnPostPage;
+ (void)PBArrayAdd_recommendLbsIndex;
+ (void)PBArrayAdd_isRealName;
+ (void)PBArrayAdd_wxPayAuthorization;
+ (void)PBArrayAdd_isContactLogout;
+ (void)PBArrayAdd_postFeedStayTLDuration;
+ (void)PBArrayAdd_originalSwitchStatus;
+ (void)PBArrayAdd_originalDisableReason;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_shootEntrySvrExtInfo;
+ (void)PBArrayAdd_memberAQOprType;
+ (void)PBArrayAdd_memberAQProviderUsername;
+ (void)PBArrayAdd_enterChildScene;
+ (void)PBArrayAdd_reportBusinessType;
+ (void)PBArrayAdd_postCommentScene;
+ (void)PBArrayAdd_showPostVideoToCommentAreaSwitch;
+ (void)PBArrayAdd_followFeedTemplateId;
+ (void)PBArrayAdd_needPostFollowFeedVideoComment;
+ (void)PBArrayAdd_followTemplateFeedId;
+ (void)PBArrayAdd_followMusicFeedId;
+ (void)PBArrayAdd_shareScene;
+ (void)PBArrayAdd_isInFinderMainScene;
+ (void)PBArrayAdd_sourceInfo;
+ (void)PBArrayAdd_mjPublisherInfo;
+ (void)PBArrayAdd_postNewLifeInfo;
+ (void)PBArrayAdd_shootMusicReportInfo;
+ (void)PBArrayAdd_editMusicReportInfo;
+ (void)PBArrayAdd_modifyDetailFlag;
+ (void)PBArrayAdd_finderSecretData;
+ (void)PBArrayAdd_postNewLifeConnectInfo;
+ (void)PBArrayAdd_localDraftId;
+ (void)PBArrayAdd_imageMusicReportInfo;
+ (void)PBArrayAdd_likeEasterEggEmoticon;
+ (void)PBArrayAdd_likeEasterEggEmoticonSetterScene;
+ (void)PBArrayAdd_alreadyCheckOriginal;
+ (void)PBArrayAdd_tmplCreationInfo;
+ (void)PBArrayAdd_effectCreateContextInfo;
+ (void)PBArrayAdd_inspirationSquareInfo;
+ (void)PBArrayAdd_originVideoUploadSession;
+ (void)PBArrayAdd_clickTemplateTaskID;
+ (void)PBArrayAdd_referencePostAutoPlay;
+ (void)PBArrayAdd_enterContextId;
+ (void)PBArrayAdd_referenceVideoFeedId;
+ (void)PBArrayAdd_referenceVideoReportState;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (BOOL)isFromRedPacketScene:(unsigned long long)arg1;
- (void)fillClientDraftExtInfo:(id)arg1 draft:(id)arg2 dataItem:(id)arg3;
- (void)applyClientDraftExtInfo:(id)arg1 draft:(id)arg2 dataItem:(id)arg3;
- (id)getPBPropertyTable;
- (id)initWithDataItem:(id)arg1;
- (BOOL)shouldDirectUpload;
- (id)sessionId;
- (id)init;
- (void)updateMusicSoundType;
- (id)archivedWCTValue;
- (id)getFollowRefCommentFeedAuthorNickName;
- (void)asyncGetFollowRefCommentFeedAuthorNickNameWithCompletion:(id /* block */)arg1;
- (id)genFollowRefCommentFeedId;
- (void)resetAllFollowFeedId;
- (BOOL)shouldWaitForPostLoading;
- (BOOL)postFromRedPacketMiniAppEntrance;
- (id)genPBGeneralReportInfo;
- (int)genFollowRefCommentType;
- (int)targetCommentScene;
- (unsigned long long)reportEnterScene;
- (id)eventVisitId;
- (unsigned long long)textLength;
- (unsigned long long)postAssetsType;
- (BOOL)hasAddPOI;
- (id)tag;
- (BOOL)isHaveCover;
- (unsigned long long)postPatMusicType;
- (id)getOriginFormatDic;
- (float)originBitrate;
- (float)originWidth;
- (float)originHeight;
- (float)originAudioBitrate;
- (float)originVideoFrameRate;
- (BOOL)isClubContact;
- (BOOL)canShowPostVideoToCommentArea;
- (BOOL)checkHighlightTopic;
- (BOOL)checkUsePatMusic;
- (long long)enterSceneInt;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)sourceEnterScene;
- (void)setSourceEnterScene:(unsigned long long)arg1;
- (unsigned long long)lbsFlagType;
- (unsigned long long)authIconType;
- (BOOL)hasOriginalStatementEntry;
- (long long)postFeedCountInt;
- (BOOL)useVideoTemplateInfo;
- (long long)videoPlayDurationInt;
- (long long)fansCountInt;
- (id)genOriginalReportPostInfo;
- (long long)getKaraEditTimeMs;
- (float)getKaraFileSize;
- (long long)getStayPostPageDuration;
- (void)asyncCheckOriginVideoUploadEnableWithCompletion:(id /* block */)arg1;
- (id)generateMJPublisherReportingParams;
- (void)updateMJPublisherInfoWithContext:(id)arg1;
- (int)videoSourceType;
- (BOOL)isDraftScene;
- (BOOL)isMembershipScene;
- (BOOL)isModFeedScene;
- (BOOL)shouldSkipManadatoryDeclare;
- (BOOL)isSkipMandatoryDeclareForTemplate;
- (BOOL)isSkipMandatoryDeclareForConfigEnterScene;
- (BOOL)isSkipMandatoryDeclareForPhotoFeed;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)postDataItemJumpInfo;
- (void)setPostDataItemJumpInfo:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)clickTemplateTaskID;
- (void)setClickTemplateTaskID:(id)arg1;
- (id)shootEntrySvrExtInfo;
- (void)setShootEntrySvrExtInfo:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)tmplCreationInfo;
- (void)setTmplCreationInfo:(id)arg1;
- (BOOL)referencePostAutoPlay;
- (void)setReferencePostAutoPlay:(BOOL)arg1;
- (unsigned long long)referenceVideoReportState;
- (void)setReferenceVideoReportState:(unsigned long long)arg1;
- (id)referenceVideoFeedId;
- (void)setReferenceVideoFeedId:(id)arg1;
- (BOOL)isInFinderMainScene;
- (void)setIsInFinderMainScene:(BOOL)arg1;
- (int)postCommentScene;
- (void)setPostCommentScene:(int)arg1;
- (id)enterContextId;
- (void)setEnterContextId:(id)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (long long)enterChildScene;
- (void)setEnterChildScene:(long long)arg1;
- (int)profileEnterType;
- (void)setProfileEnterType:(int)arg1;
- (int)userPrepareScene;
- (void)setUserPrepareScene:(int)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (unsigned long long)exitVCNumber;
- (void)setExitVCNumber:(unsigned long long)arg1;
- (void)setVideoSourceType:(int)arg1;
- (int)postFromDraft;
- (void)setPostFromDraft:(int)arg1;
- (long long)enterTakeVideoMs;
- (void)setEnterTakeVideoMs:(long long)arg1;
- (long long)enterEditVideoMs;
- (void)setEnterEditVideoMs:(long long)arg1;
- (long long)exitMs;
- (void)setExitMs:(long long)arg1;
- (long long)videoDurationMs;
- (void)setVideoDurationMs:(long long)arg1;
- (unsigned long long)videoEmojiNum;
- (void)setVideoEmojiNum:(unsigned long long)arg1;
- (unsigned long long)videoTextNum;
- (void)setVideoTextNum:(unsigned long long)arg1;
- (id)videoMusicID;
- (void)setVideoMusicID:(id)arg1;
- (unsigned long long)videoMusicIndex;
- (void)setVideoMusicIndex:(unsigned long long)arg1;
- (BOOL)isSearchMusic;
- (void)setIsSearchMusic:(BOOL)arg1;
- (BOOL)isBeauty;
- (void)setIsBeauty:(BOOL)arg1;
- (BOOL)isDurationCut;
- (void)setIsDurationCut:(BOOL)arg1;
- (double)originalDuration;
- (void)setOriginalDuration:(double)arg1;
- (double)targetDuration;
- (void)setTargetDuration:(double)arg1;
- (int)isSlowMotion;
- (void)setIsSlowMotion:(int)arg1;
- (unsigned long long)MentionUsercnt;
- (void)setMentionUsercnt:(unsigned long long)arg1;
- (unsigned long long)ClickMentionCnt;
- (void)setClickMentionCnt:(unsigned long long)arg1;
- (unsigned long long)MentionCnt;
- (void)setMentionCnt:(unsigned long long)arg1;
- (unsigned long long)MentionRepeatCnt;
- (void)setMentionRepeatCnt:(unsigned long long)arg1;
- (int)postState;
- (void)setPostState:(int)arg1;
- (int)postEduShow;
- (void)setPostEduShow:(int)arg1;
- (id)LbsAddressString;
- (void)setLbsAddressString:(id)arg1;
- (id)finderSecretData;
- (void)setFinderSecretData:(id)arg1;
- (id)recordInfo;
- (void)setRecordInfo:(id)arg1;
- (long long)videoSubType;
- (void)setVideoSubType:(long long)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)editId;
- (void)setEditId:(id)arg1;
- (unsigned long long)remuxType;
- (void)setRemuxType:(unsigned long long)arg1;
- (id)originFormat;
- (void)setOriginFormat:(id)arg1;
- (id)compressFormat;
- (void)setCompressFormat:(id)arg1;
- (unsigned long long)cdnTimeMs;
- (void)setCdnTimeMs:(unsigned long long)arg1;
- (id)cdnTimeMsDetails;
- (void)setCdnTimeMsDetails:(id)arg1;
- (unsigned long long)editTimeMs;
- (void)setEditTimeMs:(unsigned long long)arg1;
- (unsigned long long)postPageTimeMs;
- (void)setPostPageTimeMs:(unsigned long long)arg1;
- (unsigned long long)realWaitCDNDuration;
- (void)setRealWaitCDNDuration:(unsigned long long)arg1;
- (int)useSWTranscoding;
- (void)setUseSWTranscoding:(int)arg1;
- (int)useHWTranscoding;
- (void)setUseHWTranscoding:(int)arg1;
- (id)longVideoId;
- (void)setLongVideoId:(id)arg1;
- (double)longVideoIdDuration;
- (void)setLongVideoIdDuration:(double)arg1;
- (double)fileSize;
- (void)setFileSize:(double)arg1;
- (double)longVideoFileSize;
- (void)setLongVideoFileSize:(double)arg1;
- (void)setPostPatMusicType:(unsigned long long)arg1;
- (unsigned long long)soundTrackType;
- (void)setSoundTrackType:(unsigned long long)arg1;
- (id)selectedMusicInfo;
- (void)setSelectedMusicInfo:(id)arg1;
- (id)followSoundFeedId;
- (void)setFollowSoundFeedId:(id)arg1;
- (id)followTemplateFeedId;
- (void)setFollowTemplateFeedId:(id)arg1;
- (id)followTopicFeedId;
- (void)setFollowTopicFeedId:(id)arg1;
- (id)followMusicFeedId;
- (void)setFollowMusicFeedId:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (id)patMusicIds;
- (void)setPatMusicIds:(id)arg1;
- (BOOL)newSelectOnPostPage;
- (void)setNewSelectOnPostPage:(BOOL)arg1;
- (long long)materialVideoCount;
- (void)setMaterialVideoCount:(long long)arg1;
- (long long)materialImageCount;
- (void)setMaterialImageCount:(long long)arg1;
- (BOOL)isPostByPreUpload;
- (void)setIsPostByPreUpload:(BOOL)arg1;
- (int)enterBackgroundOnPostPage;
- (void)setEnterBackgroundOnPostPage:(int)arg1;
- (long long)recommendLbsIndex;
- (void)setRecommendLbsIndex:(long long)arg1;
- (BOOL)isRealName;
- (void)setIsRealName:(BOOL)arg1;
- (BOOL)wxPayAuthorization;
- (void)setWxPayAuthorization:(BOOL)arg1;
- (BOOL)isContactLogout;
- (void)setIsContactLogout:(BOOL)arg1;
- (long long)postFeedStayTLDuration;
- (void)setPostFeedStayTLDuration:(long long)arg1;
- (unsigned long long)originalSwitchStatus;
- (void)setOriginalSwitchStatus:(unsigned long long)arg1;
- (unsigned long long)originalDisableReason;
- (void)setOriginalDisableReason:(unsigned long long)arg1;
- (int)memberAQOprType;
- (void)setMemberAQOprType:(int)arg1;
- (id)memberAQProviderUsername;
- (void)setMemberAQProviderUsername:(id)arg1;
- (long long)preUploadCDNStrategy;
- (void)setPreUploadCDNStrategy:(long long)arg1;
- (id)shootMusicReportInfo;
- (void)setShootMusicReportInfo:(id)arg1;
- (id)editMusicReportInfo;
- (void)setEditMusicReportInfo:(id)arg1;
- (id)imageMusicReportInfo;
- (void)setImageMusicReportInfo:(id)arg1;
- (unsigned long long)modifyDetailFlag;
- (void)setModifyDetailFlag:(unsigned long long)arg1;
- (id)effectCreateContextInfo;
- (void)setEffectCreateContextInfo:(id)arg1;
- (BOOL)hasClickLongDescTextView;
- (void)setHasClickLongDescTextView:(BOOL)arg1;
- (BOOL)hasCleanUpLongDesc;
- (void)setHasCleanUpLongDesc:(BOOL)arg1;
- (BOOL)hasClickShortDescTextView;
- (void)setHasClickShortDescTextView:(BOOL)arg1;
- (BOOL)hasCleanUpShortDesc;
- (void)setHasCleanUpShortDesc:(BOOL)arg1;
- (long long)enterPostTimeStamp;
- (void)setEnterPostTimeStamp:(long long)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)businessType;
- (void)setBusinessType:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void)setEventVisitId:(id)arg1;
- (BOOL)joinEvent;
- (void)setJoinEvent:(BOOL)arg1;
- (id)eventRequestParams;
- (void)setEventRequestParams:(id)arg1;
- (id)draftId;
- (void)setDraftId:(id)arg1;
- (unsigned long long)draftType;
- (void)setDraftType:(unsigned long long)arg1;
- (BOOL)isUploadDraft;
- (void)setIsUploadDraft:(BOOL)arg1;
- (id)localDraftId;
- (void)setLocalDraftId:(id)arg1;
- (id)oneClickFilmReportingParams;
- (void)setOneClickFilmReportingParams:(id)arg1;
- (id)mjPublisherInfo;
- (void)setMjPublisherInfo:(id)arg1;
- (id)switchClubUsername;
- (void)setSwitchClubUsername:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (unsigned long long)forbidPostFlag;
- (void)setForbidPostFlag:(unsigned long long)arg1;
- (id)postNewLifeInfo;
- (void)setPostNewLifeInfo:(id)arg1;
- (id)postNewLifeConnectInfo;
- (void)setPostNewLifeConnectInfo:(id)arg1;
- (long long)reportBusinessType;
- (void)setReportBusinessType:(long long)arg1;
- (id)attachExtInfo;
- (void)setAttachExtInfo:(id)arg1;
- (id)postTips;
- (void)setPostTips:(id)arg1;
- (id)linkTips;
- (void)setLinkTips:(id)arg1;
- (id)specialCoverImage;
- (void)setSpecialCoverImage:(id)arg1;
- (id)specialFullCoverImage;
- (void)setSpecialFullCoverImage:(id)arg1;
- (BOOL)hasUseSpecialCover;
- (void)setHasUseSpecialCover:(BOOL)arg1;
- (BOOL)hasUploadModifyCover;
- (void)setHasUploadModifyCover:(BOOL)arg1;
- (BOOL)hasUploadModifyShareCover;
- (void)setHasUploadModifyShareCover:(BOOL)arg1;
- (BOOL)notCheckLongVideoEncode;
- (void)setNotCheckLongVideoEncode:(BOOL)arg1;
- (id)coverEditTexts;
- (void)setCoverEditTexts:(id)arg1;
- (id)shareEditTexts;
- (void)setShareEditTexts:(id)arg1;
- (id)editTextWidgets;
- (void)setEditTextWidgets:(id)arg1;
- (id)shareTextWidgets;
- (void)setShareTextWidgets:(id)arg1;
- (id)postBtnTitle;
- (void)setPostBtnTitle:(id)arg1;
- (id)postJumpInfo;
- (void)setPostJumpInfo:(id)arg1;
- (BOOL)syncPostLoading;
- (void)setSyncPostLoading:(BOOL)arg1;
- (BOOL)forbidSaveDraft;
- (void)setForbidSaveDraft:(BOOL)arg1;
- (id)jsapiKVReportInfo;
- (void)setJsapiKVReportInfo:(id)arg1;
- (id)originHighlightTopic;
- (void)setOriginHighlightTopic:(id)arg1;
- (BOOL)showPostVideoToCommentAreaSwitch;
- (void)setShowPostVideoToCommentAreaSwitch:(BOOL)arg1;
- (id)followFeedTemplateId;
- (void)setFollowFeedTemplateId:(id)arg1;
- (BOOL)needPostFollowFeedVideoComment;
- (void)setNeedPostFollowFeedVideoComment:(BOOL)arg1;
- (id)mjComposingTimelineJsonString;
- (void)setMjComposingTimelineJsonString:(id)arg1;
- (id)inspirationSquareInfo;
- (void)setInspirationSquareInfo:(id)arg1;
- (id)mjComposingTimelineData;
- (void)setMjComposingTimelineData:(id)arg1;
- (id)originVideoUploadSession;
- (void)setOriginVideoUploadSession:(id)arg1;
- (id)uploadVideoInfomation;
- (void)setUploadVideoInfomation:(id)arg1;
- (BOOL)isRealShootContent;
- (void)setIsRealShootContent:(BOOL)arg1;
- (id)captionReportData;
- (void)setCaptionReportData:(id)arg1;
- (int)imageCount;
- (void)setImageCount:(int)arg1;
- (int)livePhotoCount;
- (void)setLivePhotoCount:(int)arg1;
- (BOOL)reportSkipManadatoryDeclareReason;
- (void)setReportSkipManadatoryDeclareReason:(BOOL)arg1;
- (id)likeEasterEggEmoticon;
- (void)setLikeEasterEggEmoticon:(id)arg1;
- (int)likeEasterEggEmoticonSetterScene;
- (void)setLikeEasterEggEmoticonSetterScene:(int)arg1;
- (BOOL)alreadyCheckOriginal;
- (void)setAlreadyCheckOriginal:(BOOL)arg1;
- (id)directUploadStaticSnapshot;
- (void)setDirectUploadStaticSnapshot:(id)arg1;
- (id)directUploadDecision;
- (void)setDirectUploadDecision:(id)arg1;
- (void).cxx_destruct;
@end
