@interface MMFinderLiveStartParamsModel : NSObject
{
    unsigned int _userFlag; // +0x8
    unsigned int _liveGlobalFlag; // +0xc
    unsigned int _maxVisibilityChatroomCount; // +0x10
    unsigned int _maxVisibilityFriendContactCount; // +0x14
    unsigned int _maxRedPacketChatroomCount; // +0x18
    unsigned int _shoppingNotAvailableFlag; // +0x1c
    unsigned int _randomConnectMicWaitTime; // +0x20
    unsigned int _anchorPushMode; // +0x24
    NSArray * _liveModeControlInfoArray; // +0x28
    NSString * _finderUsername; // +0x30
    NSArray * _liveNoticeList; // +0x38
    MMFinderLiveContentVM * _recoverVM; // +0x40
    NSArray * _allTags; // +0x48
    FinderLiveTagInfo * _currentTag; // +0x50
    NSMutableArray * _visibilityFileList; // +0x58
    long long _redPacketChatroomSelectionStyle; // +0x60
    SpamRisk * _spamJumpInfo; // +0x68
    NSString * _anchorUsername; // +0x70
    FinderContactLiveInfo * _contactLiveInfo; // +0x78
    FinderLiveUserAttrUserSetting * _userSetting; // +0x80
    SongListInfo * _songListInfo; // +0x88
    LiveWeappJumpInfo * _weappJumpInfo; // +0x90
    FinderLivePromotionEntrance * _promotionEntrance; // +0x98
    LiveRoomImg * _liveRoomImages; // +0xa0
    WCFinderStarterLiveViewModel * _starterViewModel; // +0xa8
    FinderJumpInfo * _creatorCenterEntrance; // +0xb0
    FinderJumpInfo * _creatorCenterEntrance2; // +0xb8
    FinderLiveErrorPage * _createLiveErrorPage; // +0xc0
    FinderLiveModModifyLiveCoverImageResponse * _liveCoverImgModifyInfo; // +0xc8
    NSData * _createLiveToken; // +0xd0
    FinderLiveStickerBubble * _stickerTextTemplatesEntities; // +0xd8
    FinderLiveStickerFont * _stickerTextTemplateFontsEntities; // +0xe0
    MMLiveBeautyResourcesDescriptor * _beautyResourcesDescriptor; // +0xe8
    NSArray * _resourcePackages; // +0xf0
    FinderLiveGuideInfo * _liveGuideInfo; // +0xf8
    WCFinderCreateLivePrepareResponseModel * _responseModel; // +0x100
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
- (void).cxx_destruct;
@end

