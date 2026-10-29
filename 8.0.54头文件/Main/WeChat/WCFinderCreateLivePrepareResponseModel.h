@interface WCFinderCreateLivePrepareResponseModel : NSObject
{
    BOOL _enableDescExtend; // +0x8
    unsigned int _userFlag; // +0xc
    unsigned int _liveGlobalFlag; // +0x10
    unsigned int _maxVisibilityChatroomCount; // +0x14
    unsigned int _maxVisibilityFriendContactCount; // +0x18
    unsigned int _maxRedPacketChatroomCount; // +0x1c
    unsigned int _shoppingNotAvailableFlag; // +0x20
    unsigned int _randomConnectMicWaitTime; // +0x24
    unsigned int _anchorPushMode; // +0x28
    NSArray * _liveModeControlInfoArray; // +0x30
    FinderLiveMicInfo * _liveMicInfo; // +0x38
    NSArray * _liveNoticeList; // +0x40
    WCFinderDataItem * _recoverDataItem; // +0x48
    NSArray * _fullTagInfos; // +0x50
    FinderLiveTagInfo * _lastSelectTag; // +0x58
    NSMutableArray * _visibilityFileList; // +0x60
    long long _redPacketChatroomSelectionStyle; // +0x68
    SpamRisk * _spamRiskInfo; // +0x70
    NSString * _finderUsername; // +0x78
    FinderContactLiveInfo * _contactLiveInfo; // +0x80
    FinderLiveUserAttrUserSetting * _userSetting; // +0x88
    SongListInfo * _songListInfo; // +0x90
    LiveWeappJumpInfo * _weappJumpInfo; // +0x98
    LiveRoomImg * _liveRoomImages; // +0xa0
    FinderLivePromptInfo * _promptInfo; // +0xa8
    FinderJumpInfo * _opPromptInfo; // +0xb0
    FinderLivePromotionEntrance * _promotionEntrance; // +0xb8
    MMFinderLiveGestureCreateLivePrepareModel * _gestureModel; // +0xc0
    FinderJumpInfo * _creatorCenterEntrance; // +0xc8
    FinderJumpInfo * _creatorCenterEntrance2; // +0xd0
    FinderLiveModModifyLiveCoverImageResponse * _liveCoverImgModifyInfo; // +0xd8
    NSData * _createLiveToken; // +0xe0
    FinderLiveErrorPage * _createLiveErrorPage; // +0xe8
    FinderLiveStickerBubble * _stickerTextTemplatesEntities; // +0xf0
    FinderLiveStickerFont * _stickerTextTemplateFontsEntities; // +0xf8
    NSArray * _resourcePackages; // +0x100
    MMLiveBeautyResourcesDescriptor * _beautyResourcesDescriptor; // +0x108
    FinderJumpInfo * _applyEligibilityJumpInfo; // +0x110
    FinderLiveGuideInfo * _liveGuideInfo; // +0x118
    MMLiveKtvResourcesDescriptor * _ktvResourcesDescriptor; // +0x120
    FinderLiveKtvSettingsInfo * _ktvSettingsInfo; // +0x128
    unsigned long long _liveFunctionSwitchFlags; // +0x130
    FinderLiveAnchorQuestEntrance * _anchorQuestEntance; // +0x138
}
- (id)liveModeControlInfoArray;
- (void)setLiveModeControlInfoArray:(id)arg1;
- (id)liveMicInfo;
- (void)setLiveMicInfo:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)recoverDataItem;
- (void)setRecoverDataItem:(id)arg1;
- (unsigned int)userFlag;
- (void)setUserFlag:(unsigned int)arg1;
- (unsigned int)liveGlobalFlag;
- (void)setLiveGlobalFlag:(unsigned int)arg1;
- (id)fullTagInfos;
- (void)setFullTagInfos:(id)arg1;
- (id)lastSelectTag;
- (void)setLastSelectTag:(id)arg1;
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
- (id)spamRiskInfo;
- (void)setSpamRiskInfo:(id)arg1;
- (unsigned int)shoppingNotAvailableFlag;
- (void)setShoppingNotAvailableFlag:(unsigned int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
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
- (id)liveRoomImages;
- (void)setLiveRoomImages:(id)arg1;
- (id)promptInfo;
- (void)setPromptInfo:(id)arg1;
- (id)opPromptInfo;
- (void)setOpPromptInfo:(id)arg1;
- (id)promotionEntrance;
- (void)setPromotionEntrance:(id)arg1;
- (id)gestureModel;
- (void)setGestureModel:(id)arg1;
- (unsigned int)anchorPushMode;
- (void)setAnchorPushMode:(unsigned int)arg1;
- (id)creatorCenterEntrance;
- (void)setCreatorCenterEntrance:(id)arg1;
- (id)creatorCenterEntrance2;
- (void)setCreatorCenterEntrance2:(id)arg1;
- (id)liveCoverImgModifyInfo;
- (void)setLiveCoverImgModifyInfo:(id)arg1;
- (id)createLiveToken;
- (void)setCreateLiveToken:(id)arg1;
- (id)createLiveErrorPage;
- (void)setCreateLiveErrorPage:(id)arg1;
- (id)stickerTextTemplatesEntities;
- (void)setStickerTextTemplatesEntities:(id)arg1;
- (id)stickerTextTemplateFontsEntities;
- (void)setStickerTextTemplateFontsEntities:(id)arg1;
- (id)resourcePackages;
- (void)setResourcePackages:(id)arg1;
- (id)beautyResourcesDescriptor;
- (void)setBeautyResourcesDescriptor:(id)arg1;
- (id)applyEligibilityJumpInfo;
- (void)setApplyEligibilityJumpInfo:(id)arg1;
- (id)liveGuideInfo;
- (void)setLiveGuideInfo:(id)arg1;
- (id)ktvResourcesDescriptor;
- (void)setKtvResourcesDescriptor:(id)arg1;
- (id)ktvSettingsInfo;
- (void)setKtvSettingsInfo:(id)arg1;
- (unsigned long long)liveFunctionSwitchFlags;
- (void)setLiveFunctionSwitchFlags:(unsigned long long)arg1;
- (id)anchorQuestEntance;
- (void)setAnchorQuestEntance:(id)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (void).cxx_destruct;
@end

