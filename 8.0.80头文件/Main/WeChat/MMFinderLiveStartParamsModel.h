@interface MMFinderLiveStartParamsModel : NSObject
{
    BOOL _canUseCreateLivePageSimpleMode; // +0x8
    BOOL _syndicateEnablePlatformSettlement; // +0x9
    unsigned int _userFlag; // +0xc
    unsigned int _liveGlobalFlag; // +0x10
    unsigned int _maxVisibilityChatroomCount; // +0x14
    unsigned int _maxVisibilityFriendContactCount; // +0x18
    unsigned int _maxRedPacketChatroomCount; // +0x1c
    unsigned int _shoppingNotAvailableFlag; // +0x20
    unsigned int _randomConnectMicWaitTime; // +0x24
    unsigned int _anchorPushMode; // +0x28
    int _startControllerSwitchFlag; // +0x2c
    NSArray * _liveModeControlInfoArray; // +0x30
    FinderLiveMicInfo * _liveMicInfo; // +0x38
    NSString * _finderUsername; // +0x40
    NSArray * _liveNoticeList; // +0x48
    MMFinderLiveContentVM * _recoverVM; // +0x50
    NSString * _realnameAuthUrl; // +0x58
    NSArray * _allTags; // +0x60
    FinderLiveTagInfo * _currentTag; // +0x68
    NSMutableArray * _visibilityFileList; // +0x70
    long long _redPacketChatroomSelectionStyle; // +0x78
    SpamRisk * _spamJumpInfo; // +0x80
    NSString * _anchorUsername; // +0x88
    FinderContactLiveInfo * _contactLiveInfo; // +0x90
    FinderLiveUserAttrUserSetting * _userSetting; // +0x98
    SongListInfo * _songListInfo; // +0xa0
    NewSongListInfo * _songListInfoNew; // +0xa8
    LiveWeappJumpInfo * _weappJumpInfo; // +0xb0
    FinderLivePromotionEntrance * _promotionEntrance; // +0xb8
    LiveRoomImg * _liveRoomImages; // +0xc0
    WCFinderStarterLiveViewModel * _starterViewModel; // +0xc8
    FinderJumpInfo * _creatorCenterEntrance; // +0xd0
    FinderJumpInfo * _creatorCenterEntrance2; // +0xd8
    FinderJumpInfo * _popularActivityEntrance; // +0xe0
    FinderLiveErrorPage * _createLiveErrorPage; // +0xe8
    FinderLiveModModifyLiveCoverImageResponse * _liveCoverImgModifyInfo; // +0xf0
    NSData * _createLiveToken; // +0xf8
    FinderLiveStickerBubble * _stickerTextTemplatesEntities; // +0x100
    FinderLiveStickerFont * _stickerTextTemplateFontsEntities; // +0x108
    MMLiveBeautyResourcesDescriptor * _beautyResourcesDescriptor; // +0x110
    NSArray * _resourcePackages; // +0x118
    FinderLiveGuideInfo * _liveGuideInfo; // +0x120
    WCFinderCreateLivePrepareResponseModel * _responseModel; // +0x128
    long long _createLivePageMode; // +0x130
    PageModePoiTopicControlInfo * _pageModePoiTopicControlInfo; // +0x138
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x140
    FinderLiveAgreementInfo * _liveAgreementInfo; // +0x148
    NSData * _createLivePrepareBuffer; // +0x150
    unsigned long long _syndicateMaximumParticipantsCount; // +0x158
    MMLiveSyndicateModel * _syndicateModel; // +0x160
    FinderLiveNetworkIdentityAuthParams * _networkIdentityAuthParams; // +0x168
}
- (id)initWithPrepareResponseModel:(id)arg1;
- (id)liveModeControlInfoArray;
- (void)setLiveModeControlInfoArray:(id)arg1;
- (id)liveMicInfo;
- (void)setLiveMicInfo:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)recoverVM;
- (void)setRecoverVM:(id)arg1;
- (unsigned int)userFlag;
- (void)setUserFlag:(unsigned int)arg1;
- (id)realnameAuthUrl;
- (void)setRealnameAuthUrl:(id)arg1;
- (unsigned int)liveGlobalFlag;
- (void)setLiveGlobalFlag:(unsigned int)arg1;
- (id)allTags;
- (void)setAllTags:(id)arg1;
- (id)currentTag;
- (void)setCurrentTag:(id)arg1;
- (id)visibilityFileList;
- (void)setVisibilityFileList:(id)arg1;
- (unsigned int)maxVisibilityChatroomCount;
- (void)setMaxVisibilityChatroomCount:(unsigned int)arg1;
- (unsigned int)maxVisibilityFriendContactCount;
- (void)setMaxVisibilityFriendContactCount:(unsigned int)arg1;
- (unsigned int)maxRedPacketChatroomCount;
- (void)setMaxRedPacketChatroomCount:(unsigned int)arg1;
- (long long)redPacketChatroomSelectionStyle;
- (void)setRedPacketChatroomSelectionStyle:(long long)arg1;
- (id)spamJumpInfo;
- (void)setSpamJumpInfo:(id)arg1;
- (unsigned int)shoppingNotAvailableFlag;
- (void)setShoppingNotAvailableFlag:(unsigned int)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (unsigned int)randomConnectMicWaitTime;
- (void)setRandomConnectMicWaitTime:(unsigned int)arg1;
- (id)contactLiveInfo;
- (void)setContactLiveInfo:(id)arg1;
- (id)userSetting;
- (void)setUserSetting:(id)arg1;
- (id)songListInfo;
- (void)setSongListInfo:(id)arg1;
- (id)songListInfoNew;
- (void)setSongListInfoNew:(id)arg1;
- (id)weappJumpInfo;
- (void)setWeappJumpInfo:(id)arg1;
- (id)promotionEntrance;
- (void)setPromotionEntrance:(id)arg1;
- (id)liveRoomImages;
- (void)setLiveRoomImages:(id)arg1;
- (id)starterViewModel;
- (void)setStarterViewModel:(id)arg1;
- (unsigned int)anchorPushMode;
- (void)setAnchorPushMode:(unsigned int)arg1;
- (id)creatorCenterEntrance;
- (void)setCreatorCenterEntrance:(id)arg1;
- (id)creatorCenterEntrance2;
- (void)setCreatorCenterEntrance2:(id)arg1;
- (id)popularActivityEntrance;
- (void)setPopularActivityEntrance:(id)arg1;
- (id)createLiveErrorPage;
- (void)setCreateLiveErrorPage:(id)arg1;
- (id)liveCoverImgModifyInfo;
- (void)setLiveCoverImgModifyInfo:(id)arg1;
- (id)createLiveToken;
- (void)setCreateLiveToken:(id)arg1;
- (id)stickerTextTemplatesEntities;
- (void)setStickerTextTemplatesEntities:(id)arg1;
- (id)stickerTextTemplateFontsEntities;
- (void)setStickerTextTemplateFontsEntities:(id)arg1;
- (id)beautyResourcesDescriptor;
- (void)setBeautyResourcesDescriptor:(id)arg1;
- (id)resourcePackages;
- (void)setResourcePackages:(id)arg1;
- (id)liveGuideInfo;
- (void)setLiveGuideInfo:(id)arg1;
- (id)responseModel;
- (void)setResponseModel:(id)arg1;
- (long long)createLivePageMode;
- (void)setCreateLivePageMode:(long long)arg1;
- (BOOL)canUseCreateLivePageSimpleMode;
- (void)setCanUseCreateLivePageSimpleMode:(BOOL)arg1;
- (id)pageModePoiTopicControlInfo;
- (void)setPageModePoiTopicControlInfo:(id)arg1;
- (id)nextLiveNoticeInfo;
- (void)setNextLiveNoticeInfo:(id)arg1;
- (id)liveAgreementInfo;
- (void)setLiveAgreementInfo:(id)arg1;
- (int)startControllerSwitchFlag;
- (void)setStartControllerSwitchFlag:(int)arg1;
- (id)createLivePrepareBuffer;
- (void)setCreateLivePrepareBuffer:(id)arg1;
- (unsigned long long)syndicateMaximumParticipantsCount;
- (void)setSyndicateMaximumParticipantsCount:(unsigned long long)arg1;
- (BOOL)syndicateEnablePlatformSettlement;
- (void)setSyndicateEnablePlatformSettlement:(BOOL)arg1;
- (id)syndicateModel;
- (void)setSyndicateModel:(id)arg1;
- (id)networkIdentityAuthParams;
- (void)setNetworkIdentityAuthParams:(id)arg1;
- (void).cxx_destruct;
@end
