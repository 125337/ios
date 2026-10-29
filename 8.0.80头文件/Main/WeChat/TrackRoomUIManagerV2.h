@interface TrackRoomUIManagerV2 : MMUserService <TrackRoomViewV2Delegate, MonoServiceLogicExt, MMLiveTaskMgrExt, ilinkMultiSelectLogicDelegate, IContactMgrExt, MMServiceProtocol>
{
    TrackRoomViewV2 * _trackRoomView; // +0x8
    TrackRoomMainWindow * _trackRoomWindow; // +0x10
    BOOL _pendingExtendFromCollapse; // +0x18
    BOOL _exitAtHidden; // +0x19
    VOIPPluginEntryHelper * _voipPluginEntryHelper; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)openTrackRoom:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (BOOL)openTrackRoomAfterAccuracyCheck:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)showAlertForLocationAccuracyLimited;
- (BOOL)doOpenTrackRoom:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)showAlertForLocationSystemDenied;
- (void)ensureWindowReady;
- (void)closeTrackRoomView:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)minimizeTrackRoomView;
- (void)showTrackRoomView;
- (void)hideTrackRoomView;
- (BOOL)isShowingTrackRoom;
- (void)autoExitAtHidden;
- (void)onTrackRoomViewClose;
- (void)onTrackRoomViewHide;
- (void)onPhoneVideoBtnClick:(id)arg1 fromView:(id)arg2;
- (void)onMultiTalkButtonClick:(id)arg1;
- (id)getAllMembersInVoipGroup;
- (id)getDefaultMembersInVoipGroup;
- (void)ilinkMultiSelectLogicAddMembers:(id)arg1 inviteId:(unsigned long long)arg2;
- (id)getViewController;
- (void)cleanResource;
- (void)collapseTrackRoomWindowWithAnimation:(BOOL)arg1;
- (void)slipCollapseTrackRoomWindowWithImage:(id)arg1;
- (void)extendTrackRoomWindowWithAnimation:(BOOL)arg1;
- (void)maximizeTrackRoomWindow;
- (void)quitTrackRoomWindowWithAnimation:(BOOL)arg1;
- (void)onServiceMemoryWarning;
- (void)onMMLiveWillStart;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)closeIfSelfLeftShareLocationChatRoom:(id)arg1;
- (BOOL)exitAtHidden;
- (void)setExitAtHidden:(BOOL)arg1;
- (id)voipPluginEntryHelper;
- (void)setVoipPluginEntryHelper:(id)arg1;
- (void).cxx_destruct;
@end
