@interface TextStatePublishReportObject : NSObject <PBCoding>
{
    BOOL _hasEditedSourceDescription; // +0x8
    BOOL _hasEditedSourceIcon; // +0x9
    BOOL _hasEditedSourceMedia; // +0xa
    BOOL _hasSelectPosition; // +0xb
    BOOL _hasSelectBlur; // +0xc
    BOOL _hasShownGuide; // +0xd
    BOOL _hasTapGuideKnowButton; // +0xe
    BOOL _enterPositionAuthorized; // +0xf
    BOOL _exitPositionAuthorized; // +0x10
    unsigned int _enterScene; // +0x14
    unsigned int _serverScene; // +0x18
    unsigned int _exitScene; // +0x1c
    unsigned int _mediaSource; // +0x20
    unsigned int _exceedMaxLengthToastCount; // +0x24
    unsigned int _emptyDescriptionToastCount; // +0x28
    unsigned int _customIconDescriptionExceedMaxLengthToastCount; // +0x2c
    unsigned int _selectIconCount; // +0x30
    unsigned int _tapTopicButtonCount; // +0x34
    unsigned int _tapTakeSightButtonCount; // +0x38
    unsigned int _tapMediaDeleteActionCount; // +0x3c
    unsigned int _tapMediaChangeActionCount; // +0x40
    unsigned int _tapMediaTakeSightActionCount; // +0x44
    unsigned int _tapMediaSelectFromAlbumActionCount; // +0x48
    unsigned int _tapPositionButtonCount; // +0x4c
    unsigned int _tapPositionLabelCount; // +0x50
    unsigned int _tapPrivacyButtonCount; // +0x54
    unsigned int _selectBlurCount; // +0x58
    unsigned int _deselectBlurCount; // +0x5c
    unsigned int _selectCustomIconCount; // +0x60
    unsigned int _tapEmoticonBoardOrSearchEmoticonCount; // +0x64
    unsigned int _tapEmoticonDeleteButtonCount; // +0x68
    unsigned int _tapEmoticonSearchTabItemCount; // +0x6c
    unsigned int _showCannotAddEmoticonAlertCount; // +0x70
    unsigned int _showCannotAddTextEmojiAlertCount; // +0x74
    unsigned int _enterInterfaceOrientation; // +0x78
    unsigned int _exitInterfaceOrientation; // +0x7c
    unsigned int _focusStatusOption; // +0x80
    unsigned int _qrCodeScene; // +0x84
    unsigned int _descriptionLength; // +0x88
    unsigned int _privacyOption; // +0x8c
    unsigned int _strictMode; // +0x90
    unsigned int _style; // +0x94
    unsigned int _tapCustomIconCount; // +0x98
    unsigned int _tapCustomIconSwitchCount; // +0x9c
    unsigned int _visibility; // +0xa0
    unsigned int _tagCount; // +0xa4
    unsigned int _tagUVCount; // +0xa8
    unsigned int _contactCount; // +0xac
    unsigned int _clickSelectPhotoPv; // +0xb0
    unsigned int _clickUnSelectPhotoPv; // +0xb4
    unsigned int _livePhotoLongPressPv; // +0xb8
    unsigned int _enterCoExistStatusCount; // +0xbc
    NSString * _sessionId; // +0xc0
    NSString * _passthroughIconId; // +0xc8
    long long _enterTime; // +0xd0
    NSMutableArray * _iconIdList; // +0xd8
    long long _exitTime; // +0xe0
    NSString * _topicId; // +0xe8
    NSString * _textStateId; // +0xf0
    long long _videoOriginLength; // +0xf8
    long long _videoCroppedLength; // +0x100
    long long _mediaSize; // +0x108
    NSString * _sourceId; // +0x110
    NSString * _sourceActivityId; // +0x118
    NSString * _sourceName; // +0x120
    NSString * _sourceIconURL; // +0x128
    long long _originMediaSize; // +0x130
    NSString * _originMediaMd5; // +0x138
    NSMutableArray * _finderPickerSessionIdList; // +0x140
    NSString * _weRunInfo; // +0x148
    NSString * _payInfo; // +0x150
    NSMutableArray * _selectedIconReportItemList; // +0x158
    NSString * _selectedEmoticonMd5; // +0x160
    NSString * _referenceUsername; // +0x168
    NSString * _referenceTextStateId; // +0x170
    NSString * _publishId; // +0x178
    NSString * _customIconDescription; // +0x180
    NSString * _recentUseIconListReportString; // +0x188
    NSString * _customRecommendIconListReportString; // +0x190
    NSString * _enterSceneInfo; // +0x198
}
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_enterScene;
+ (void)PBArrayAdd_enterTime;
+ (void)PBArrayAdd_iconIdList;
+ (void)PBArrayAdd_exitScene;
+ (void)PBArrayAdd_exitTime;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_videoOriginLength;
+ (void)PBArrayAdd_videoCroppedLength;
+ (void)PBArrayAdd_mediaSize;
+ (void)PBArrayAdd_mediaSource;
+ (void)PBArrayAdd_sourceId;
+ (void)PBArrayAdd_sourceActivityId;
+ (void)PBArrayAdd_sourceName;
+ (void)PBArrayAdd_sourceIconURL;
+ (void)PBArrayAdd_exceedMaxLengthToastCount;
+ (void)PBArrayAdd_emptyDescriptionToastCount;
+ (void)PBArrayAdd_selectIconCount;
+ (void)PBArrayAdd_tapTopicButtonCount;
+ (void)PBArrayAdd_tapTakeSightButtonCount;
+ (void)PBArrayAdd_tapMediaDeleteActionCount;
+ (void)PBArrayAdd_tapMediaChangeActionCount;
+ (void)PBArrayAdd_tapPositionButtonCount;
+ (void)PBArrayAdd_tapPositionLabelCount;
+ (void)PBArrayAdd_tapPrivacyButtonCount;
+ (void)PBArrayAdd_selectBlurCount;
+ (void)PBArrayAdd_deselectBlurCount;
+ (void)PBArrayAdd_descriptionLength;
+ (void)PBArrayAdd_hasEditedSourceDescription;
+ (void)PBArrayAdd_hasEditedSourceIcon;
+ (void)PBArrayAdd_hasEditedSourceMedia;
+ (void)PBArrayAdd_hasSelectPosition;
+ (void)PBArrayAdd_privacyOption;
+ (void)PBArrayAdd_hasSelectBlur;
+ (void)PBArrayAdd_publishId;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_selectCustomIconCount;
+ (void)PBArrayAdd_hasShownGuide;
+ (void)PBArrayAdd_hasTapGuideKnowButton;
+ (void)PBArrayAdd_strictMode;
+ (void)PBArrayAdd_tapMediaTakeSightActionCount;
+ (void)PBArrayAdd_tapMediaSelectFromAlbumActionCount;
+ (void)PBArrayAdd_referenceUsername;
+ (void)PBArrayAdd_referenceTextStateId;
+ (void)PBArrayAdd_originMediaSize;
+ (void)PBArrayAdd_originMediaMd5;
+ (void)PBArrayAdd_qrCodeScene;
+ (void)PBArrayAdd_tapEmoticonBoardOrSearchEmoticonCount;
+ (void)PBArrayAdd_tapEmoticonDeleteButtonCount;
+ (void)PBArrayAdd_tapEmoticonSearchTabItemCount;
+ (void)PBArrayAdd_showCannotAddEmoticonAlertCount;
+ (void)PBArrayAdd_showCannotAddTextEmojiAlertCount;
+ (void)PBArrayAdd_enterInterfaceOrientation;
+ (void)PBArrayAdd_exitInterfaceOrientation;
+ (void)PBArrayAdd_finderPickerSessionIdList;
+ (void)PBArrayAdd_weRunInfo;
+ (void)PBArrayAdd_focusStatusOption;
+ (void)PBArrayAdd_payInfo;
+ (void)PBArrayAdd_passthroughIconId;
+ (void)PBArrayAdd_style;
+ (void)PBArrayAdd_tapCustomIconCount;
+ (void)PBArrayAdd_tapCustomIconSwitchCount;
+ (void)PBArrayAdd_recentUseIconListReportString;
+ (void)PBArrayAdd_selectedIconReportItemList;
+ (void)PBArrayAdd_serverScene;
+ (void)PBArrayAdd_enterPositionAuthorized;
+ (void)PBArrayAdd_exitPositionAuthorized;
+ (void)PBArrayAdd_visibility;
+ (void)PBArrayAdd_clickSelectPhotoPv;
+ (void)PBArrayAdd_clickUnSelectPhotoPv;
+ (void)PBArrayAdd_livePhotoLongPressPv;
+ (void)PBArrayAdd_enterCoExistStatusCount;
+ (void)initialize;
+ (BOOL)isCurrentLandscape;
- (id)getPBPropertyTable;
- (id)init;
- (void)enterWithScene:(unsigned int)arg1;
- (void)setVideoOriginLength:(long long)arg1 videoCroppedLength:(long long)arg2;
- (void)setMediaSize:(long long)arg1 mediaSource:(unsigned int)arg2;
- (void)setOriginMediaSize:(long long)arg1 originMediaMd5:(id)arg2;
- (void)setSourceInfo:(id)arg1;
- (void)showExceedMaxLengthToast;
- (void)showEmptyDescriptionToast;
- (void)showCustomIconDescriptionExceedMaxLengthToast;
- (void)tapSelectIconButton;
- (void)selectIcon:(id)arg1 iconSelectFrom:(long long)arg2;
- (void)tapTopicButton;
- (void)tapTakeSightButton;
- (void)tapMediaDeleteAction;
- (void)tapMediaChangeAction;
- (void)tapMediaTakeSightAction;
- (void)tapMediaSelectFromAlbumAction;
- (void)tapPositionButton;
- (void)tapPositionLabel;
- (void)tapPrivacyButton;
- (void)selectBlur;
- (void)deselectBlur;
- (void)selectLive;
- (void)deSelectLive;
- (void)longPreesLive;
- (void)tapEmoticonBoardOrSearchEmoticon;
- (void)tapEmoticonDeleteButton;
- (void)tapEmoticonSearchTabItem;
- (void)showCannotAddEmoticonAlert;
- (void)showCannotAddTextEmojiAlert;
- (void)serverReturnWithId:(id)arg1 topicId:(id)arg2;
- (void)selectCustomIcon;
- (void)setExitInterfaceOrientation;
- (void)setFinderPickerSessionId:(id)arg1;
- (void)tapCustomIcon;
- (void)tapCustomIconSwitch;
- (void)setRecentUseIconList:(id)arg1;
- (void)setCustomRecommendIconList:(id)arg1;
- (void)exitWithScene:(unsigned int)arg1;
- (void)report;
- (unsigned int)getCoExistStatusCount;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)passthroughIconId;
- (void)setPassthroughIconId:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (unsigned int)serverScene;
- (void)setServerScene:(unsigned int)arg1;
- (long long)enterTime;
- (void)setEnterTime:(long long)arg1;
- (id)iconIdList;
- (void)setIconIdList:(id)arg1;
- (unsigned int)exitScene;
- (void)setExitScene:(unsigned int)arg1;
- (long long)exitTime;
- (void)setExitTime:(long long)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (long long)videoOriginLength;
- (void)setVideoOriginLength:(long long)arg1;
- (long long)videoCroppedLength;
- (void)setVideoCroppedLength:(long long)arg1;
- (long long)mediaSize;
- (void)setMediaSize:(long long)arg1;
- (unsigned int)mediaSource;
- (void)setMediaSource:(unsigned int)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)sourceActivityId;
- (void)setSourceActivityId:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceIconURL;
- (void)setSourceIconURL:(id)arg1;
- (unsigned int)exceedMaxLengthToastCount;
- (void)setExceedMaxLengthToastCount:(unsigned int)arg1;
- (unsigned int)emptyDescriptionToastCount;
- (void)setEmptyDescriptionToastCount:(unsigned int)arg1;
- (unsigned int)customIconDescriptionExceedMaxLengthToastCount;
- (void)setCustomIconDescriptionExceedMaxLengthToastCount:(unsigned int)arg1;
- (unsigned int)selectIconCount;
- (void)setSelectIconCount:(unsigned int)arg1;
- (unsigned int)tapTopicButtonCount;
- (void)setTapTopicButtonCount:(unsigned int)arg1;
- (unsigned int)tapTakeSightButtonCount;
- (void)setTapTakeSightButtonCount:(unsigned int)arg1;
- (unsigned int)tapMediaDeleteActionCount;
- (void)setTapMediaDeleteActionCount:(unsigned int)arg1;
- (unsigned int)tapMediaChangeActionCount;
- (void)setTapMediaChangeActionCount:(unsigned int)arg1;
- (unsigned int)tapMediaTakeSightActionCount;
- (void)setTapMediaTakeSightActionCount:(unsigned int)arg1;
- (unsigned int)tapMediaSelectFromAlbumActionCount;
- (void)setTapMediaSelectFromAlbumActionCount:(unsigned int)arg1;
- (unsigned int)tapPositionButtonCount;
- (void)setTapPositionButtonCount:(unsigned int)arg1;
- (unsigned int)tapPositionLabelCount;
- (void)setTapPositionLabelCount:(unsigned int)arg1;
- (unsigned int)tapPrivacyButtonCount;
- (void)setTapPrivacyButtonCount:(unsigned int)arg1;
- (unsigned int)selectBlurCount;
- (void)setSelectBlurCount:(unsigned int)arg1;
- (unsigned int)deselectBlurCount;
- (void)setDeselectBlurCount:(unsigned int)arg1;
- (unsigned int)selectCustomIconCount;
- (void)setSelectCustomIconCount:(unsigned int)arg1;
- (long long)originMediaSize;
- (void)setOriginMediaSize:(long long)arg1;
- (id)originMediaMd5;
- (void)setOriginMediaMd5:(id)arg1;
- (id)finderPickerSessionIdList;
- (void)setFinderPickerSessionIdList:(id)arg1;
- (unsigned int)tapEmoticonBoardOrSearchEmoticonCount;
- (void)setTapEmoticonBoardOrSearchEmoticonCount:(unsigned int)arg1;
- (unsigned int)tapEmoticonDeleteButtonCount;
- (void)setTapEmoticonDeleteButtonCount:(unsigned int)arg1;
- (unsigned int)tapEmoticonSearchTabItemCount;
- (void)setTapEmoticonSearchTabItemCount:(unsigned int)arg1;
- (unsigned int)showCannotAddEmoticonAlertCount;
- (void)setShowCannotAddEmoticonAlertCount:(unsigned int)arg1;
- (unsigned int)showCannotAddTextEmojiAlertCount;
- (void)setShowCannotAddTextEmojiAlertCount:(unsigned int)arg1;
- (unsigned int)enterInterfaceOrientation;
- (void)setEnterInterfaceOrientation:(unsigned int)arg1;
- (unsigned int)exitInterfaceOrientation;
- (void)setExitInterfaceOrientation:(unsigned int)arg1;
- (unsigned int)focusStatusOption;
- (void)setFocusStatusOption:(unsigned int)arg1;
- (unsigned int)qrCodeScene;
- (void)setQrCodeScene:(unsigned int)arg1;
- (id)weRunInfo;
- (void)setWeRunInfo:(id)arg1;
- (id)payInfo;
- (void)setPayInfo:(id)arg1;
- (unsigned int)descriptionLength;
- (void)setDescriptionLength:(unsigned int)arg1;
- (BOOL)hasEditedSourceDescription;
- (void)setHasEditedSourceDescription:(BOOL)arg1;
- (BOOL)hasEditedSourceIcon;
- (void)setHasEditedSourceIcon:(BOOL)arg1;
- (BOOL)hasEditedSourceMedia;
- (void)setHasEditedSourceMedia:(BOOL)arg1;
- (id)selectedIconReportItemList;
- (void)setSelectedIconReportItemList:(id)arg1;
- (id)selectedEmoticonMd5;
- (void)setSelectedEmoticonMd5:(id)arg1;
- (id)referenceUsername;
- (void)setReferenceUsername:(id)arg1;
- (id)referenceTextStateId;
- (void)setReferenceTextStateId:(id)arg1;
- (BOOL)hasSelectPosition;
- (void)setHasSelectPosition:(BOOL)arg1;
- (unsigned int)privacyOption;
- (void)setPrivacyOption:(unsigned int)arg1;
- (BOOL)hasSelectBlur;
- (void)setHasSelectBlur:(BOOL)arg1;
- (id)publishId;
- (void)setPublishId:(id)arg1;
- (id)customIconDescription;
- (void)setCustomIconDescription:(id)arg1;
- (BOOL)hasShownGuide;
- (void)setHasShownGuide:(BOOL)arg1;
- (BOOL)hasTapGuideKnowButton;
- (void)setHasTapGuideKnowButton:(BOOL)arg1;
- (unsigned int)strictMode;
- (void)setStrictMode:(unsigned int)arg1;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)tapCustomIconCount;
- (void)setTapCustomIconCount:(unsigned int)arg1;
- (unsigned int)tapCustomIconSwitchCount;
- (void)setTapCustomIconSwitchCount:(unsigned int)arg1;
- (id)recentUseIconListReportString;
- (void)setRecentUseIconListReportString:(id)arg1;
- (id)customRecommendIconListReportString;
- (void)setCustomRecommendIconListReportString:(id)arg1;
- (BOOL)enterPositionAuthorized;
- (void)setEnterPositionAuthorized:(BOOL)arg1;
- (BOOL)exitPositionAuthorized;
- (void)setExitPositionAuthorized:(BOOL)arg1;
- (unsigned int)visibility;
- (void)setVisibility:(unsigned int)arg1;
- (unsigned int)tagCount;
- (void)setTagCount:(unsigned int)arg1;
- (unsigned int)tagUVCount;
- (void)setTagUVCount:(unsigned int)arg1;
- (unsigned int)contactCount;
- (void)setContactCount:(unsigned int)arg1;
- (id)enterSceneInfo;
- (void)setEnterSceneInfo:(id)arg1;
- (unsigned int)clickSelectPhotoPv;
- (void)setClickSelectPhotoPv:(unsigned int)arg1;
- (unsigned int)clickUnSelectPhotoPv;
- (void)setClickUnSelectPhotoPv:(unsigned int)arg1;
- (unsigned int)livePhotoLongPressPv;
- (void)setLivePhotoLongPressPv:(unsigned int)arg1;
- (unsigned int)enterCoExistStatusCount;
- (void)setEnterCoExistStatusCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
