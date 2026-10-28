@interface MMFinderLiveStartParamsModel : NSObject
{
    BOOL _canUseCreateLivePageSimpleMode; // +0x8
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
    NSString * _finderUsername; // +0x38
    NSArray * _liveNoticeList; // +0x40
    MMFinderLiveContentVM * _recoverVM; // +0x48
    NSString * _realnameAuthUrl; // +0x50
    NSArray * _allTags; // +0x58
    FinderLiveTagInfo * _currentTag; // +0x60
    NSMutableArray * _visibilityFileList; // +0x68
    long long _redPacketChatroomSelectionStyle; // +0x70
    SpamRisk * _spamJumpInfo; // +0x78
    NSString * _anchorUsername; // +0x80
    FinderContactLiveInfo * _contactLiveInfo; // +0x88
    FinderLiveUserAttrUserSetting * _userSetting; // +0x90
    SongListInfo * _songListInfo; // +0x98
    LiveWeappJumpInfo * _weappJumpInfo; // +0xa0
    FinderLivePromotionEntrance * _promotionEntrance; // +0xa8
    LiveRoomImg * _liveRoomImages; // +0xb0
    WCFinderStarterLiveViewModel * _starterViewModel; // +0xb8
    FinderJumpInfo * _creatorCenterEntrance; // +0xc0
    FinderJumpInfo * _creatorCenterEntrance2; // +0xc8
    FinderLiveErrorPage * _createLiveErrorPage; // +0xd0
    FinderLiveModModifyLiveCoverImageResponse * _liveCoverImgModifyInfo; // +0xd8
    NSData * _createLiveToken; // +0xe0
    FinderLiveStickerBubble * _stickerTextTemplatesEntities; // +0xe8
    FinderLiveStickerFont * _stickerTextTemplateFontsEntities; // +0xf0
    MMLiveBeautyResourcesDescriptor * _beautyResourcesDescriptor; // +0xf8
    NSArray * _resourcePackages; // +0x100
    FinderLiveGuideInfo * _liveGuideInfo; // +0x108
    WCFinderCreateLivePrepareResponseModel * _responseModel; // +0x110
    long long _createLivePageMode; // +0x118
    PageModePoiTopicControlInfo * _pageModePoiTopicControlInfo; // +0x120
    FinderLiveNextLiveNotificationInfo * _nextLiveNoticeInfo; // +0x128
    FinderLiveAgreementInfo * _liveAgreementInfo; // +0x130
}
- (id)initWithPrepareResponseModel:(id)arg1;
- (id)liveModeControlInfoArray;
- (void)setLiveModeControlInfoArray:(id)arg1;
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
- (void).cxx_destruct;
@end
