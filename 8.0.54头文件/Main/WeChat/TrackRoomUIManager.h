@interface TrackRoomUIManager : MMUserService <TrackRoomViewDelegate, IVOIPUILogicMgrExt, MonoServiceLogicExt, MMLiveTaskMgrExt, MMServiceProtocol>
{
    TrackRoomView * _trackRoomView; // +0x8
    BOOL _exitAtHidden; // +0x10
}
- (id)init;
- (BOOL)openTrackRoom:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)closeTrackRoomView:(unsigned int)arg1 reason:(unsigned int)arg2;
- (void)showTrackRoomView;
- (void)hideTrackRoomView;
- (BOOL)isShowingTrackRoom;
- (void)autoExitAtHidden;
- (void)onTrackRoomViewClose;
- (void)onTrackRoomViewHide;
- (void)cleanResource;
- (void)onServiceMemoryWarning;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)onMMLiveWillStart;
- (BOOL)exitAtHidden;
- (void)setExitAtHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

