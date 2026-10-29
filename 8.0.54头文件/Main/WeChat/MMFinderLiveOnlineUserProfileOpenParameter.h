@interface MMFinderLiveOnlineUserProfileOpenParameter : MMObject
{
    BOOL _isOfflineOperation; // +0x8
    BOOL _isSendPrivateMsgEnable; // +0x9
    BOOL _isRewardEnable; // +0xa
    BOOL _isFinderLiveAliasRole; // +0xb
    BOOL _isSwitchLiveEnabled; // +0xc
    BOOL _isFromOnlineStateView; // +0xd
    BOOL _isCommentAssistant; // +0xe
    BOOL _isDarkMode; // +0xf
    BOOL _isNeedObserveDarkModeChange; // +0x10
    BOOL _userIsAnchor; // +0x11
    BOOL _isSelfConnectMicUser; // +0x12
    BOOL _showMicSeatSettingButton; // +0x13
    BOOL _showStopConnectMicButton; // +0x14
    BOOL _isOtherAnonymousUser; // +0x15
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    MMFinderLiveTask * _finderLiveTask; // +0x20
    FinderLiveContact * _liveContact; // +0x28
    WCFinderContact * _finderContact; // +0x30
    MMFinderLiveConnectMicUser * _micUserInfo; // +0x38
    FinderLiveBadgeInfo * _liveBadgeInfo; // +0x40
    unsigned long long _disableCommentDef; // +0x48
    double _highlightRectCornerRadius; // +0x50
    NSData * _liveContactExtInfo; // +0x58
    UIColor * _maskViewColor; // +0x60
    UIView * _parentView; // +0x68
    unsigned long long _openProfileScene; // +0x70
    unsigned long long _userLiveIdentity; // +0x78
    NSString * _finderUserName; // +0x80
    NSString * _locationText; // +0x88
    NSString * _genderText; // +0x90
    NSString * _liveMicId; // +0x98
    NSString * _commentMsgId; // +0xa0
    unsigned long long _commentMsgSeq; // +0xa8
    id /* block */ _complaintActionCallback; // +0xb0
    id /* block */ _kickoutActionCallback; // +0xb8
    id /* block */ _banCommentActionCallback; // +0xc0
    id /* block */ _noSenseBanCommentActionCallback; // +0xc8
    id /* block */ _sendPrivateMsgActionCallback; // +0xd0
    id /* block */ _followActionCallback; // +0xd8
    id /* block */ _openStreamProfileActionCallback; // +0xe0
    id /* block */ _openRewardGiftViewActionCallback; // +0xe8
    id /* block */ _modifyCommentAssistantRoleCallback; // +0xf0
    id /* block */ _viewDidOpenCallback; // +0xf8
    id /* block */ _viewDidDismissCallback; // +0x100
    id /* block */ _actionSheetCancelCallback; // +0x108
    id /* block */ _actionSheetWillDismissCallback; // +0x110
    id /* block */ _switchLiveRoomActionCallback; // +0x118
    id /* block */ _muteMicUserActionCallback; // +0x120
    id /* block */ _micSeatSettingActionCallback; // +0x128
    id /* block */ _maximizeOrMinimizeMicAudienceActionCallback; // +0x130
    id /* block */ _stopAudienceConnectMicActionCallback; // +0x138
    id /* block */ _viewWillDismissCallback; // +0x140
    unsigned long long _fallbackLiveID; // +0x148
    unsigned long long _fallbackObjectID; // +0x150
    CGRect _highlightRect; // +0x158
}
- (id)init;
- (BOOL)isFinderUser;
- (id)finderLiveTask;
- (void)clearCallBacks;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void)setFinderLiveTask:(id)arg1;
- (id)liveContact;
- (void)setLiveContact:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)micUserInfo;
- (void)setMicUserInfo:(id)arg1;
- (id)liveBadgeInfo;
- (void)setLiveBadgeInfo:(id)arg1;
- (BOOL)isOfflineOperation;
- (void)setIsOfflineOperation:(BOOL)arg1;
- (unsigned long long)disableCommentDef;
- (void)setDisableCommentDef:(unsigned long long)arg1;
- (BOOL)isSendPrivateMsgEnable;
- (void)setIsSendPrivateMsgEnable:(BOOL)arg1;
- (BOOL)isRewardEnable;
- (void)setIsRewardEnable:(BOOL)arg1;
- (BOOL)isFinderLiveAliasRole;
- (void)setIsFinderLiveAliasRole:(BOOL)arg1;
- (CGRect)highlightRect;
- (void)setHighlightRect:(CGRect)arg1;
- (double)highlightRectCornerRadius;
- (void)setHighlightRectCornerRadius:(double)arg1;
- (id)liveContactExtInfo;
- (void)setLiveContactExtInfo:(id)arg1;
- (id)maskViewColor;
- (void)setMaskViewColor:(id)arg1;
- (BOOL)isSwitchLiveEnabled;
- (void)setIsSwitchLiveEnabled:(BOOL)arg1;
- (BOOL)isFromOnlineStateView;
- (void)setIsFromOnlineStateView:(BOOL)arg1;
- (BOOL)isCommentAssistant;
- (void)setIsCommentAssistant:(BOOL)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg1;
- (BOOL)isNeedObserveDarkModeChange;
- (void)setIsNeedObserveDarkModeChange:(BOOL)arg1;
- (unsigned long long)openProfileScene;
- (void)setOpenProfileScene:(unsigned long long)arg1;
- (unsigned long long)userLiveIdentity;
- (void)setUserLiveIdentity:(unsigned long long)arg1;
- (BOOL)userIsAnchor;
- (void)setUserIsAnchor:(BOOL)arg1;
- (BOOL)isSelfConnectMicUser;
- (void)setIsSelfConnectMicUser:(BOOL)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (BOOL)showMicSeatSettingButton;
- (void)setShowMicSeatSettingButton:(BOOL)arg1;
- (BOOL)showStopConnectMicButton;
- (void)setShowStopConnectMicButton:(BOOL)arg1;
- (id)locationText;
- (void)setLocationText:(id)arg1;
- (id)genderText;
- (void)setGenderText:(id)arg1;
- (id)liveMicId;
- (void)setLiveMicId:(id)arg1;
- (id)commentMsgId;
- (void)setCommentMsgId:(id)arg1;
- (unsigned long long)commentMsgSeq;
- (void)setCommentMsgSeq:(unsigned long long)arg1;
- (id /* block */)complaintActionCallback;
- (void)setComplaintActionCallback:(id /* block */)arg1;
- (id /* block */)kickoutActionCallback;
- (void)setKickoutActionCallback:(id /* block */)arg1;
- (id /* block */)banCommentActionCallback;
- (void)setBanCommentActionCallback:(id /* block */)arg1;
- (id /* block */)noSenseBanCommentActionCallback;
- (void)setNoSenseBanCommentActionCallback:(id /* block */)arg1;
- (id /* block */)sendPrivateMsgActionCallback;
- (void)setSendPrivateMsgActionCallback:(id /* block */)arg1;
- (id /* block */)followActionCallback;
- (void)setFollowActionCallback:(id /* block */)arg1;
- (id /* block */)openStreamProfileActionCallback;
- (void)setOpenStreamProfileActionCallback:(id /* block */)arg1;
- (id /* block */)openRewardGiftViewActionCallback;
- (void)setOpenRewardGiftViewActionCallback:(id /* block */)arg1;
- (id /* block */)modifyCommentAssistantRoleCallback;
- (void)setModifyCommentAssistantRoleCallback:(id /* block */)arg1;
- (id /* block */)viewDidOpenCallback;
- (void)setViewDidOpenCallback:(id /* block */)arg1;
- (id /* block */)viewDidDismissCallback;
- (void)setViewDidDismissCallback:(id /* block */)arg1;
- (id /* block */)actionSheetCancelCallback;
- (void)setActionSheetCancelCallback:(id /* block */)arg1;
- (id /* block */)actionSheetWillDismissCallback;
- (void)setActionSheetWillDismissCallback:(id /* block */)arg1;
- (id /* block */)switchLiveRoomActionCallback;
- (void)setSwitchLiveRoomActionCallback:(id /* block */)arg1;
- (id /* block */)muteMicUserActionCallback;
- (void)setMuteMicUserActionCallback:(id /* block */)arg1;
- (id /* block */)micSeatSettingActionCallback;
- (void)setMicSeatSettingActionCallback:(id /* block */)arg1;
- (id /* block */)maximizeOrMinimizeMicAudienceActionCallback;
- (void)setMaximizeOrMinimizeMicAudienceActionCallback:(id /* block */)arg1;
- (id /* block */)stopAudienceConnectMicActionCallback;
- (void)setStopAudienceConnectMicActionCallback:(id /* block */)arg1;
- (id /* block */)viewWillDismissCallback;
- (void)setViewWillDismissCallback:(id /* block */)arg1;
- (unsigned long long)fallbackLiveID;
- (void)setFallbackLiveID:(unsigned long long)arg1;
- (unsigned long long)fallbackObjectID;
- (void)setFallbackObjectID:(unsigned long long)arg1;
- (BOOL)isOtherAnonymousUser;
- (void)setIsOtherAnonymousUser:(BOOL)arg1;
- (void).cxx_destruct;
@end

