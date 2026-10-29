@interface VoIPMPScreenProjectUIController : NSObject <ilinkMultiSelectLogicDelegate, VoipmpCoreUIControllerBase, UIAdaptivePresentationControllerDelegate>
{
    BOOL _isIlinkMode; // +0x8
    BOOL _hasHandledInviteResult; // +0x9
    VoIPMPScreenProjectLifecycle * _lifecycle; // +0x10
    VoipmpCoreUIControllerCallback * _uiCallback; // +0x18
    NSArray * _currentTalkers; // +0x20
    NSString * _currentGroupId; // +0x28
    MMUINavigationController * _activeNavigationController; // +0x30
    ilinkMultiSelectLogic * _inviteSelectLogic; // +0x38
}
- (id)init;
- (void)setCallback:(id)arg1;
- (id)invitePresenterViewController;
- (id)currentVoipViewController;
- (id)existingContactsForTalkers:(id)arg1;
- (id)usernamesFromContacts:(id)arg1;
- (void)dismissInviteUIAnimated:(BOOL)arg1;
- (void)finishInviteSelectionWithMembers:(id)arg1 dismissUI:(BOOL)arg2;
- (void)onCancelInviteSelection;
- (void)launchContractPageAsync:(unsigned long long)arg1 talkers:(id)arg2 groupId:(id)arg3;
- (id)getViewController;
- (id)getAllMembersInVoipGroup;
- (BOOL)ilinkMultiSelectLogicShouldProceedWithInvite;
- (void)ilinkMultiSelectLogicAddMembers:(id)arg1 inviteId:(unsigned long long)arg2;
- (void)ilinkMultiSelectLogicDidSelectNormalContact:(id)arg1;
- (void)ilinkMultiSelectLogicDidCancel;
- (void)audioRouteToAsync:(unsigned long long)arg1 device:(id)arg2;
- (void)recordUpdateToAsync:(unsigned long long)arg1 recorderOn:(BOOL)arg2;
- (void)updateAudioMenuAsync:(unsigned long long)arg1 show:(BOOL)arg2 devices:(id)arg3;
- (void)updateAddMemberIconAsync:(unsigned long long)arg1 remote:(BOOL)arg2 local:(BOOL)arg3;
- (void)onUpdateNetworkPoorAsync:(unsigned long long)arg1 show:(BOOL)arg2 local:(BOOL)arg3;
- (void)onUpdateLongWaitingAsync:(unsigned long long)arg1;
- (void)onMaxEnergyUserListUpdateToAsync:(unsigned long long)arg1 memberInfo:(id)arg2 show:(BOOL)arg3;
- (void)onSpeakerUserUpdateAsync:(unsigned long long)arg1 speakerUsers:(id)arg2;
- (void)onNetWeakUserUpdateAsync:(unsigned long long)arg1 speakerUsers:(id)arg2;
- (void)onTalkingInfoUpdateToAsync:(unsigned long long)arg1 isTalking:(BOOL)arg2 connectTime:(int)arg3 roomRole:(int)arg4 roomType:(int)arg5 userInfo:(id)arg6 oppositeInfo:(id)arg7 otherInfo:(id)arg8 mainUI:(int)arg9 ui:(int)arg10 callId:(int)arg11;
- (void)onMemberInfoUpdateAsync:(unsigned long long)arg1 memberInfo:(id)arg2;
- (void)onRenderUIChangedAsync:(unsigned long long)arg1 isSmallForLocal:(BOOL)arg2;
- (void)hideOpBtnAsync:(unsigned long long)arg1 responseTime:(int)arg2;
- (void)showOpBtnAsync:(unsigned long long)arg1;
- (void)canResponsePauseEventAsync:(unsigned long long)arg1 pause:(BOOL)arg2;
- (void)onInComingCallChangeToMainCallAsync:(unsigned long long)arg1 inComingCaller:(id)arg2;
- (void)finishScreenProjectAsync:(unsigned long long)arg1;
- (void)onConfEventAsync:(unsigned long long)arg1 eventType:(int)arg2 errCode:(int)arg3 paramsBuf:(id)arg4 bufLen:(int)arg5;
- (void)onCameraUpdateToAsync:(unsigned long long)arg1 cameraOn:(BOOL)arg2 isFrontCamera:(BOOL)arg3;
- (void)onRenderInfoUpdateToAsync:(unsigned long long)arg1 id:(long long)arg2 texInfo:(id)arg3;
- (void)callEndAsync:(unsigned long long)arg1 finishReason:(int)arg2;
- (void)hideFullscreenAsync:(unsigned long long)arg1;
- (void)toastAddMemberFailedAsync:(unsigned long long)arg1 errCode:(int)arg2 size:(int)arg3 username:(id)arg4;
- (void)toastMultiPathUseAsync:(unsigned long long)arg1 costMax:(BOOL)arg2;
- (void)toastMemberJoinTalkingAsync:(unsigned long long)arg1 members:(id)arg2;
- (void)cancelInComingNotifyAsync:(unsigned long long)arg1 fromUser:(id)arg2;
- (void)showRejectFloatCardAsync:(unsigned long long)arg1 fromUser:(id)arg2;
- (void)showTalkingUnSafeAsync:(unsigned long long)arg1 verificationUrl:(id)arg2;
- (void)showServerOverloadAsync:(unsigned long long)arg1 timeInterval:(int)arg2;
- (void)showNotFriendAsync:(unsigned long long)arg1 roomType:(int)arg2;
- (void)launchPageAsync:(unsigned long long)arg1 roomType:(int)arg2 isCaller:(BOOL)arg3 fromIgnore:(BOOL)arg4;
- (void)launchInComingCardAsync:(unsigned long long)arg1 memberId:(int)arg2 roomType:(int)arg3 roomId:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 callerName:(id)arg6 participant:(id)arg7 isSubCall:(BOOL)arg8 muteNotification:(BOOL)arg9;
- (void)hideFloatCardAsync:(unsigned long long)arg1;
- (void)hideInComingCardAsync:(unsigned long long)arg1 roomType:(int)arg2 roomId:(unsigned long long)arg3;
- (void)launchFloatPageAsync:(unsigned long long)arg1 roomType:(int)arg2 fromIgnore:(BOOL)arg3;
- (void)launchRingtoneHalfDialogAsync:(unsigned long long)arg1 username:(id)arg2 roomType:(int)arg3;
- (void)hideRingtoneHalfDialogAsync:(unsigned long long)arg1;
- (void)updateBannerInfoAsync:(unsigned long long)arg1 groupname:(id)arg2 info:(id)arg3;
- (void)acceptToWaitingAsync:(unsigned long long)arg1;
- (void)updateRemoteSupportNewScreenProjectAsync:(unsigned long long)arg1 isSupportNewScreenProject:(BOOL)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (BOOL)isIlinkMode;
- (void)setIsIlinkMode:(BOOL)arg1;
- (id)lifecycle;
- (void)setLifecycle:(id)arg1;
- (id)uiCallback;
- (void)setUiCallback:(id)arg1;
- (id)currentTalkers;
- (void)setCurrentTalkers:(id)arg1;
- (id)currentGroupId;
- (void)setCurrentGroupId:(id)arg1;
- (id)activeNavigationController;
- (void)setActiveNavigationController:(id)arg1;
- (BOOL)hasHandledInviteResult;
- (void)setHasHandledInviteResult:(BOOL)arg1;
- (id)inviteSelectLogic;
- (void)setInviteSelectLogic:(id)arg1;
- (void).cxx_destruct;
@end
