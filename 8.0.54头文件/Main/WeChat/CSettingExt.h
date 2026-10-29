@interface CSettingExt : NSObject <NSCoding>
{
    unsigned int m_iPlayTipsCounter; // +0x8
    BOOL m_bAllowSearchAddressBook; // +0xc
    BOOL m_bHasConfirmSearchAddressBook; // +0xd
    BOOL m_bHasClickBindPhoneView; // +0xe
    BOOL m_bPitchShift; // +0xf
    int m_iPitchShift; // +0x10
    unsigned int m_iVideoCameraPos; // +0x14
    unsigned int m_iMatteCameraPos; // +0x18
    unsigned int m_iMatteFlashStatus; // +0x1c
    BOOL m_isLBSPromptNotShowAgain; // +0x20
    BOOL m_isShakePromptNotShowAgain; // +0x21
    BOOL m_isWXTalkPromptNotShowAgain; // +0x22
    BOOL m_isEditImagePromptNotShowAgain; // +0x23
    BOOL m_isTapToContactVeirfyBannerNotShowAgain; // +0x24
    BOOL m_isEmoticonPanelNewNotCausedByUpdate; // +0x25
    BOOL m_isExistNewBrandServiceTip; // +0x26
    BOOL m_isExistNewBrandSubscriptionTip; // +0x27
    BOOL m_bIsSyncPhoneContactsLogined; // +0x28
    unsigned long long m_uiCloudContactsAmount; // +0x30
    NSDate * m_LBSDataValidateTime; // +0x38
    BOOL m_isForceEarpieceMode; // +0x40
    BOOL m_hasShowQRCodeTip; // +0x41
    unsigned int m_uiLastDownloadEmojiArtTime; // +0x44
    unsigned int m_uiSyncAddressBookLocalMode; // +0x48
    BOOL m_bSavePhotoWhenTake; // +0x4c
    BOOL m_bUploadHDImage; // +0x4d
    unsigned int m_uiImageSourceType; // +0x50
    BOOL m_bReadMailShowDetail; // +0x54
    unsigned int m_uiMatteHistoryOrder; // +0x58
    BOOL m_bShowReaderSettingTip; // +0x5c
    BOOL m_bAlbumSyncMicroblog; // +0x5d
    unsigned int m_uiLbsOpCode; // +0x60
    BOOL m_hideWCTimelineEventNotification; // +0x64
    BOOL m_hiddenUpdateRemindFinder; // +0x65
    BOOL m_hiddenUpdateRemindNearybyLive; // +0x66
    BOOL m_hiddenUpdateRemindIndependentLive; // +0x67
    long long m_showIntroViewTimes; // +0x68
    BOOL m_bOpenRemoteControl; // +0x70
    BOOL m_bHasUseVideoVoip; // +0x71
    BOOL m_bHasUseWXTalk; // +0x72
    BOOL m_autoPlay; // +0x73
    unsigned int m_uiLastAlertVoipTime; // +0x74
    unsigned int m_uiLastAlertRemindTime; // +0x78
    BOOL m_bNoShowPushTip; // +0x7c
    BOOL m_bMusicCyclePlay; // +0x7d
    BOOL m_bMusicListPlay; // +0x7e
    BOOL m_bMusicOrderPlay; // +0x7f
    BOOL m_bMonitorMemory; // +0x80
    BOOL m_bFeatureLogViewInRealTime; // +0x81
    long long m_cameraFlashMode; // +0x88
    NSMutableDictionary * m_dicSetting; // +0x90
    BOOL m_bHaveCheckedSetPassword; // +0x98
    BOOL m_bShakeMusicOpen; // +0x99
    BOOL m_bMultiFavAddOpen; // +0x9a
    NSString * m_nsTransFromLang; // +0xa0
    NSString * m_nsTransToLang; // +0xa8
    NSString * m_nsImagePickerAlbum; // +0xb0
    BOOL m_bImagePickerForcedOldVersion; // +0xb8
    unsigned int m_playVoiceTimes; // +0xbc
    unsigned int m_lastBrandMsgSvrID; // +0xc0
    long long m_n64LastBrandMsgSvrID; // +0xc8
    BOOL m_bOverseasCardIsNoOpenProtocal; // +0xd0
    BOOL m_bTitOfflinePayShow; // +0xd1
    BOOL m_bShowShareLocationTip; // +0xd2
    BOOL m_bShowKeepSharingLocationTip; // +0xd3
    BOOL m_bFirstDeleteChatRoomThatNotSaveToContact; // +0xd4
    BOOL m_bShowTranslateIntroTip; // +0xd5
    BOOL m_bOpenVoicePrintPwd; // +0xd6
    BOOL m_bMyPackageShow; // +0xd7
    unsigned int m_uiLastGetCardCountTime; // +0xd8
    BOOL m_hasEnterCardList; // +0xdc
    BOOL m_hasShowMemberTipsView; // +0xdd
    BOOL m_hasEnterCardDetail; // +0xde
    BOOL m_hasShowCardNew; // +0xdf
    BOOL m_bShareCardShow; // +0xe0
    BOOL m_hasEnterShareCardList; // +0xe1
    BOOL m_hasShowShareCardNew; // +0xe2
    BOOL m_hasShowShareCardTipsBefore; // +0xe3
    unsigned int m_uiGetCardLayoutSceneBySvr; // +0xe4
    unsigned int m_uiLastClearShareCardTime; // +0xe8
    BOOL m_bShowAttatchmentTransferNew; // +0xec
    BOOL m_bShowAttachmentRedEnvelopesNew; // +0xed
    BOOL m_bShowAttatchmentServiceNew; // +0xee
    BOOL m_bHasShowMuteTips; // +0xef
    unsigned int m_uScrollTopTipShowCount; // +0xf0
    unsigned int m_curLockVersion; // +0xf4
    unsigned int m_patternLockLastBlockTime; // +0xf8
    unsigned int m_patternLockLastEnterTime; // +0xfc
    unsigned int m_patternLockVCLastEnterTime; // +0x100
    unsigned int m_patternLockLeftInputTime; // +0x104
    BOOL m_shakeToSight; // +0x108
    int m_sendPhotoOpFlow; // +0x10c
    BOOL m_bHasNotifyTouchIDAuth; // +0x110
    BOOL m_bTouchIDAuthSwitch; // +0x111
    int m_mailUnreadCountCache; // +0x114
    unsigned int m_uLastResourceUpdateTime; // +0x118
    int m_tencentMapRecommendCount; // +0x11c
    NSDate * m_dontDisturbTillDate; // +0x120
    unsigned int m_lastShareExtResourceCleanTime; // +0x128
    BOOL m_hasShowMusicEasterEggTip; // +0x12c
    BOOL m_hasFollowArrayUpToShowSecondPage; // +0x12d
    unsigned int m_playAllTipShowCountForGlobalSearchScene; // +0x130
    BOOL m_bShouldContactDBMigration; // +0x134
    unsigned int m_uLastWeAppSweepPkgTime; // +0x138
    BOOL m_isShakeMusicOverseaPromptNotShowAgain; // +0x13c
    unsigned long long m_uiRecentLimitFeedId; // +0x140
    NSString * searchWeAppPlaceHolder; // +0x148
    NSString * searchWeAppWordId; // +0x150
    NSString * searchWeAppPlaceHolderForMainFrameTaskBar; // +0x158
    NSString * searchWeAppWordIdForMainFrameTaskBar; // +0x160
    NSString * searchWeAppPlaceHolderForMainFrameMore; // +0x168
    NSString * searchWeAppWordIdForMainFrameMore; // +0x170
    BOOL m_isFaceRecogGuideVcNotShowAgain; // +0x178
    BOOL m_isFaceRecogReflectGuideVcNotShowAgain; // +0x179
    BOOL m_isCloseWeappTaskPreload; // +0x17a
    BOOL m_hasShowSwitchAccountTip; // +0x17b
    BOOL m_isOpenBrandTimelineAbtest; // +0x17c
    BOOL m_isOpenBrandHolderMassNum; // +0x17d
    BOOL m_isTimelineVideoSightAutoPlayEnable; // +0x17e
    BOOL m_hasNewYearShakeStatGPSInfo; // +0x17f
    BOOL _m_isScheduleTipsViewNotShowAgain; // +0x180
    BOOL _m_bIsUsingSystemFont; // +0x181
    BOOL _m_bIsNewFavUI; // +0x182
    BOOL _m_bHasNotifyWeSportEmptyCover; // +0x183
    BOOL _m_isShakeMusicOverseaPromptInShakeNotShowAgain; // +0x184
    BOOL _useSendButtonInApp; // +0x185
    unsigned int m_nextADLogReportTime; // +0x188
    unsigned int _m_uiFontSize; // +0x18c
    int _m_mulitSelectHeaderSwitch; // +0x190
    NSString * webviewTopSessionUrlStr; // +0x198
    NSString * webviewTopSessionTitle; // +0x1a0
    unsigned long long webViewSessionUrlRecordTimeStampInMs; // +0x1a8
    NSString * webviewSessionId; // +0x1b0
}
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)copyFromSettingExt:(id)arg1;
- (BOOL)isLBSFootstepShow;
- (void)setLBSFootstepShow:(BOOL)arg1;
- (void)updateLastAlertRemindTime:(unsigned int)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)getBoolForKey:(id)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (int)getInt32ForKey:(id)arg1;
- (id)theadSafeGetObject:(id)arg1;
- (void)theadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (void)theadSafeRemoveObjectForKey:(id)arg1;
- (id)getDicSetting;
- (void)setMyPackageShow:(BOOL)arg1;
- (void)setMyPackageHasShowNew:(BOOL)arg1;
- (void)setShareCardShow:(BOOL)arg1;
- (void)setShareCardHasShowNew:(BOOL)arg1;
- (void)setCardGetLayOutSceneBySvr:(unsigned int)arg1;
- (void)clearCardGetLayoutScene;
- (BOOL)useSendButtonInApp;
- (unsigned int)m_iPlayTipsCounter;
- (void)setM_iPlayTipsCounter:(unsigned int)arg1;
- (BOOL)m_bAllowSearchAddressBook;
- (void)setM_bAllowSearchAddressBook:(BOOL)arg1;
- (BOOL)m_bHasConfirmSearchAddressBook;
- (void)setM_bHasConfirmSearchAddressBook:(BOOL)arg1;
- (BOOL)m_bHasClickBindPhoneView;
- (void)setM_bHasClickBindPhoneView:(BOOL)arg1;
- (BOOL)m_bPitchShift;
- (void)setM_bPitchShift:(BOOL)arg1;
- (int)m_iPitchShift;
- (void)setM_iPitchShift:(int)arg1;
- (unsigned int)m_iVideoCameraPos;
- (void)setM_iVideoCameraPos:(unsigned int)arg1;
- (unsigned int)m_iMatteCameraPos;
- (void)setM_iMatteCameraPos:(unsigned int)arg1;
- (unsigned int)m_iMatteFlashStatus;
- (void)setM_iMatteFlashStatus:(unsigned int)arg1;
- (BOOL)m_isLBSPromptNotShowAgain;
- (void)setM_isLBSPromptNotShowAgain:(BOOL)arg1;
- (BOOL)m_isShakePromptNotShowAgain;
- (void)setM_isShakePromptNotShowAgain:(BOOL)arg1;
- (BOOL)m_isWXTalkPromptNotShowAgain;
- (void)setM_isWXTalkPromptNotShowAgain:(BOOL)arg1;
- (BOOL)m_isEditImagePromptNotShowAgain;
- (void)setM_isEditImagePromptNotShowAgain:(BOOL)arg1;
- (BOOL)m_isTapToContactVeirfyBannerNotShowAgain;
- (void)setM_isTapToContactVeirfyBannerNotShowAgain:(BOOL)arg1;
- (BOOL)m_isEmoticonPanelNewNotCausedByUpdate;
- (void)setM_isEmoticonPanelNewNotCausedByUpdate:(BOOL)arg1;
- (BOOL)m_isExistNewBrandServiceTip;
- (void)setM_isExistNewBrandServiceTip:(BOOL)arg1;
- (BOOL)m_isExistNewBrandSubscriptionTip;
- (void)setM_isExistNewBrandSubscriptionTip:(BOOL)arg1;
- (BOOL)m_bIsSyncPhoneContactsLogined;
- (void)setM_bIsSyncPhoneContactsLogined:(BOOL)arg1;
- (unsigned long long)m_uiCloudContactsAmount;
- (void)setM_uiCloudContactsAmount:(unsigned long long)arg1;
- (id)m_LBSDataValidateTime;
- (void)setM_LBSDataValidateTime:(id)arg1;
- (BOOL)m_isForceEarpieceMode;
- (void)setM_isForceEarpieceMode:(BOOL)arg1;
- (BOOL)m_hasShowQRCodeTip;
- (void)setM_hasShowQRCodeTip:(BOOL)arg1;
- (unsigned int)m_uiLastDownloadEmojiArtTime;
- (void)setM_uiLastDownloadEmojiArtTime:(unsigned int)arg1;
- (unsigned int)m_uiSyncAddressBookLocalMode;
- (void)setM_uiSyncAddressBookLocalMode:(unsigned int)arg1;
- (BOOL)m_bSavePhotoWhenTake;
- (void)setM_bSavePhotoWhenTake:(BOOL)arg1;
- (BOOL)m_bUploadHDImage;
- (void)setM_bUploadHDImage:(BOOL)arg1;
- (unsigned int)m_uiImageSourceType;
- (void)setM_uiImageSourceType:(unsigned int)arg1;
- (BOOL)m_bReadMailShowDetail;
- (void)setM_bReadMailShowDetail:(BOOL)arg1;
- (unsigned int)m_uiMatteHistoryOrder;
- (void)setM_uiMatteHistoryOrder:(unsigned int)arg1;
- (BOOL)m_bShowReaderSettingTip;
- (void)setM_bShowReaderSettingTip:(BOOL)arg1;
- (BOOL)m_bAlbumSyncMicroblog;
- (void)setM_bAlbumSyncMicroblog:(BOOL)arg1;
- (unsigned int)m_uiLbsOpCode;
- (void)setM_uiLbsOpCode:(unsigned int)arg1;
- (BOOL)m_hideWCTimelineEventNotification;
- (void)setM_hideWCTimelineEventNotification:(BOOL)arg1;
- (long long)m_showIntroViewTimes;
- (void)setM_showIntroViewTimes:(long long)arg1;
- (BOOL)m_bOpenRemoteControl;
- (void)setM_bOpenRemoteControl:(BOOL)arg1;
- (BOOL)m_bHasUseVideoVoip;
- (void)setM_bHasUseVideoVoip:(BOOL)arg1;
- (BOOL)m_bHasUseWXTalk;
- (void)setM_bHasUseWXTalk:(BOOL)arg1;
- (BOOL)m_autoPlay;
- (void)setM_autoPlay:(BOOL)arg1;
- (unsigned int)m_uiLastAlertVoipTime;
- (void)setM_uiLastAlertVoipTime:(unsigned int)arg1;
- (unsigned int)m_uiLastAlertRemindTime;
- (void)setM_uiLastAlertRemindTime:(unsigned int)arg1;
- (BOOL)m_bNoShowPushTip;
- (void)setM_bNoShowPushTip:(BOOL)arg1;
- (BOOL)m_bMusicCyclePlay;
- (void)setM_bMusicCyclePlay:(BOOL)arg1;
- (BOOL)m_bMusicListPlay;
- (void)setM_bMusicListPlay:(BOOL)arg1;
- (BOOL)m_bMusicOrderPlay;
- (void)setM_bMusicOrderPlay:(BOOL)arg1;
- (long long)m_cameraFlashMode;
- (void)setM_cameraFlashMode:(long long)arg1;
- (BOOL)m_bHaveCheckedSetPassword;
- (void)setM_bHaveCheckedSetPassword:(BOOL)arg1;
- (BOOL)m_bShakeMusicOpen;
- (void)setM_bShakeMusicOpen:(BOOL)arg1;
- (BOOL)m_bMultiFavAddOpen;
- (void)setM_bMultiFavAddOpen:(BOOL)arg1;
- (id)m_nsTransFromLang;
- (void)setM_nsTransFromLang:(id)arg1;
- (id)m_nsTransToLang;
- (void)setM_nsTransToLang:(id)arg1;
- (id)m_nsImagePickerAlbum;
- (void)setM_nsImagePickerAlbum:(id)arg1;
- (BOOL)m_bImagePickerForcedOldVersion;
- (void)setM_bImagePickerForcedOldVersion:(BOOL)arg1;
- (unsigned int)m_playVoiceTimes;
- (void)setM_playVoiceTimes:(unsigned int)arg1;
- (long long)m_n64LastBrandMsgSvrID;
- (void)setM_n64LastBrandMsgSvrID:(long long)arg1;
- (BOOL)m_bFeatureLogViewInRealTime;
- (void)setM_bFeatureLogViewInRealTime:(BOOL)arg1;
- (BOOL)m_bOverseasCardIsNoOpenProtocal;
- (void)setM_bOverseasCardIsNoOpenProtocal:(BOOL)arg1;
- (BOOL)m_bTitOfflinePayShow;
- (void)setM_bTitOfflinePayShow:(BOOL)arg1;
- (BOOL)m_bShowShareLocationTip;
- (void)setM_bShowShareLocationTip:(BOOL)arg1;
- (BOOL)m_bShowKeepSharingLocationTip;
- (void)setM_bShowKeepSharingLocationTip:(BOOL)arg1;
- (BOOL)m_bFirstDeleteChatRoomThatNotSaveToContact;
- (void)setM_bFirstDeleteChatRoomThatNotSaveToContact:(BOOL)arg1;
- (BOOL)m_bShowTranslateIntroTip;
- (void)setM_bShowTranslateIntroTip:(BOOL)arg1;
- (BOOL)m_bOpenVoicePrintPwd;
- (void)setM_bOpenVoicePrintPwd:(BOOL)arg1;
- (BOOL)m_bMyPackageShow;
- (void)setM_bMyPackageShow:(BOOL)arg1;
- (unsigned int)m_uiLastGetCardCountTime;
- (void)setM_uiLastGetCardCountTime:(unsigned int)arg1;
- (BOOL)m_hasEnterCardList;
- (void)setM_hasEnterCardList:(BOOL)arg1;
- (BOOL)m_hasShowMemberTipsView;
- (void)setM_hasShowMemberTipsView:(BOOL)arg1;
- (BOOL)m_hasEnterCardDetail;
- (void)setM_hasEnterCardDetail:(BOOL)arg1;
- (BOOL)m_hasShowCardNew;
- (void)setM_hasShowCardNew:(BOOL)arg1;
- (BOOL)m_bShareCardShow;
- (void)setM_bShareCardShow:(BOOL)arg1;
- (BOOL)m_hasEnterShareCardList;
- (void)setM_hasEnterShareCardList:(BOOL)arg1;
- (BOOL)m_hasShowShareCardNew;
- (void)setM_hasShowShareCardNew:(BOOL)arg1;
- (BOOL)m_hasShowShareCardTipsBefore;
- (void)setM_hasShowShareCardTipsBefore:(BOOL)arg1;
- (unsigned int)m_uiGetCardLayoutSceneBySvr;
- (void)setM_uiGetCardLayoutSceneBySvr:(unsigned int)arg1;
- (unsigned int)m_uiLastClearShareCardTime;
- (void)setM_uiLastClearShareCardTime:(unsigned int)arg1;
- (BOOL)m_bShowAttatchmentServiceNew;
- (void)setM_bShowAttatchmentServiceNew:(BOOL)arg1;
- (BOOL)m_bShowAttachmentRedEnvelopesNew;
- (void)setM_bShowAttachmentRedEnvelopesNew:(BOOL)arg1;
- (BOOL)m_bShowAttatchmentTransferNew;
- (void)setM_bShowAttatchmentTransferNew:(BOOL)arg1;
- (BOOL)m_bHasShowMuteTips;
- (void)setM_bHasShowMuteTips:(BOOL)arg1;
- (unsigned int)m_uScrollTopTipShowCount;
- (void)setM_uScrollTopTipShowCount:(unsigned int)arg1;
- (unsigned int)m_curLockVersion;
- (void)setM_curLockVersion:(unsigned int)arg1;
- (unsigned int)m_patternLockLastBlockTime;
- (void)setM_patternLockLastBlockTime:(unsigned int)arg1;
- (unsigned int)m_patternLockLastEnterTime;
- (void)setM_patternLockLastEnterTime:(unsigned int)arg1;
- (unsigned int)m_patternLockVCLastEnterTime;
- (void)setM_patternLockVCLastEnterTime:(unsigned int)arg1;
- (unsigned int)m_patternLockLeftInputTime;
- (void)setM_patternLockLeftInputTime:(unsigned int)arg1;
- (BOOL)m_shakeToSight;
- (void)setM_shakeToSight:(BOOL)arg1;
- (int)m_sendPhotoOpFlow;
- (void)setM_sendPhotoOpFlow:(int)arg1;
- (BOOL)m_bHasNotifyTouchIDAuth;
- (void)setM_bHasNotifyTouchIDAuth:(BOOL)arg1;
- (BOOL)m_bTouchIDAuthSwitch;
- (void)setM_bTouchIDAuthSwitch:(BOOL)arg1;
- (int)m_mailUnreadCountCache;
- (void)setM_mailUnreadCountCache:(int)arg1;
- (unsigned int)m_nextADLogReportTime;
- (void)setM_nextADLogReportTime:(unsigned int)arg1;
- (int)m_tencentMapRecommendCount;
- (void)setM_tencentMapRecommendCount:(int)arg1;
- (id)m_dontDisturbTillDate;
- (void)setM_dontDisturbTillDate:(id)arg1;
- (unsigned int)m_uLastResourceUpdateTime;
- (void)setM_uLastResourceUpdateTime:(unsigned int)arg1;
- (unsigned int)m_uLastWeAppSweepPkgTime;
- (void)setM_uLastWeAppSweepPkgTime:(unsigned int)arg1;
- (unsigned int)m_lastShareExtResourceCleanTime;
- (void)setM_lastShareExtResourceCleanTime:(unsigned int)arg1;
- (BOOL)m_hasShowMusicEasterEggTip;
- (void)setM_hasShowMusicEasterEggTip:(BOOL)arg1;
- (BOOL)m_hasFollowArrayUpToShowSecondPage;
- (void)setM_hasFollowArrayUpToShowSecondPage:(BOOL)arg1;
- (unsigned int)m_playAllTipShowCountForGlobalSearchScene;
- (void)setM_playAllTipShowCountForGlobalSearchScene:(unsigned int)arg1;
- (BOOL)m_hasNewYearShakeStatGPSInfo;
- (void)setM_hasNewYearShakeStatGPSInfo:(BOOL)arg1;
- (BOOL)m_bShouldContactDBMigration;
- (void)setM_bShouldContactDBMigration:(BOOL)arg1;
- (BOOL)m_isShakeMusicOverseaPromptNotShowAgain;
- (void)setM_isShakeMusicOverseaPromptNotShowAgain:(BOOL)arg1;
- (unsigned long long)m_uiRecentLimitFeedId;
- (void)setM_uiRecentLimitFeedId:(unsigned long long)arg1;
- (id)searchWeAppPlaceHolder;
- (void)setSearchWeAppPlaceHolder:(id)arg1;
- (id)searchWeAppPlaceHolderForMainFrameTaskBar;
- (void)setSearchWeAppPlaceHolderForMainFrameTaskBar:(id)arg1;
- (id)searchWeAppPlaceHolderForMainFrameMore;
- (void)setSearchWeAppPlaceHolderForMainFrameMore:(id)arg1;
- (id)searchWeAppWordId;
- (void)setSearchWeAppWordId:(id)arg1;
- (id)searchWeAppWordIdForMainFrameTaskBar;
- (void)setSearchWeAppWordIdForMainFrameTaskBar:(id)arg1;
- (id)searchWeAppWordIdForMainFrameMore;
- (void)setSearchWeAppWordIdForMainFrameMore:(id)arg1;
- (BOOL)m_isFaceRecogGuideVcNotShowAgain;
- (void)setM_isFaceRecogGuideVcNotShowAgain:(BOOL)arg1;
- (BOOL)m_isFaceRecogReflectGuideVcNotShowAgain;
- (void)setM_isFaceRecogReflectGuideVcNotShowAgain:(BOOL)arg1;
- (BOOL)m_isCloseWeappTaskPreload;
- (void)setM_isCloseWeappTaskPreload:(BOOL)arg1;
- (id)webviewTopSessionUrlStr;
- (void)setWebviewTopSessionUrlStr:(id)arg1;
- (id)webviewTopSessionTitle;
- (void)setWebviewTopSessionTitle:(id)arg1;
- (BOOL)m_hasShowSwitchAccountTip;
- (void)setM_hasShowSwitchAccountTip:(BOOL)arg1;
- (unsigned long long)webViewSessionUrlRecordTimeStampInMs;
- (void)setWebViewSessionUrlRecordTimeStampInMs:(unsigned long long)arg1;
- (id)webviewSessionId;
- (void)setWebviewSessionId:(id)arg1;
- (BOOL)m_isOpenBrandTimelineAbtest;
- (void)setM_isOpenBrandTimelineAbtest:(BOOL)arg1;
- (BOOL)m_isOpenBrandHolderMassNum;
- (void)setM_isOpenBrandHolderMassNum:(BOOL)arg1;
- (BOOL)m_isTimelineVideoSightAutoPlayEnable;
- (void)setM_isTimelineVideoSightAutoPlayEnable:(BOOL)arg1;
- (BOOL)m_hiddenUpdateRemindFinder;
- (void)setM_hiddenUpdateRemindFinder:(BOOL)arg1;
- (BOOL)m_hiddenUpdateRemindNearybyLive;
- (void)setM_hiddenUpdateRemindNearybyLive:(BOOL)arg1;
- (BOOL)m_hiddenUpdateRemindIndependentLive;
- (void)setM_hiddenUpdateRemindIndependentLive:(BOOL)arg1;
- (BOOL)m_isScheduleTipsViewNotShowAgain;
- (void)setM_isScheduleTipsViewNotShowAgain:(BOOL)arg1;
- (unsigned int)m_uiFontSize;
- (void)setM_uiFontSize:(unsigned int)arg1;
- (BOOL)m_bIsUsingSystemFont;
- (void)setM_bIsUsingSystemFont:(BOOL)arg1;
- (BOOL)m_bIsNewFavUI;
- (void)setM_bIsNewFavUI:(BOOL)arg1;
- (int)m_mulitSelectHeaderSwitch;
- (void)setM_mulitSelectHeaderSwitch:(int)arg1;
- (BOOL)m_bHasNotifyWeSportEmptyCover;
- (void)setM_bHasNotifyWeSportEmptyCover:(BOOL)arg1;
- (BOOL)m_isShakeMusicOverseaPromptInShakeNotShowAgain;
- (void)setM_isShakeMusicOverseaPromptInShakeNotShowAgain:(BOOL)arg1;
- (void)setUseSendButtonInApp:(BOOL)arg1;
- (void).cxx_destruct;
@end

