@interface VoipCSUIManager : MMUserService <MMKernelExt, MMVoipCSMainWindowDelegate, VideoVoipCSViewDelegate, MMServiceProtocol, IVOIPExt, MMConfigMgrExt>
{
    MMVoipCSMainWindow * m_mainWindow; // +0x8
    MMVoipToastWindow * m_voipCSToastWindow; // +0x10
    VideoVoipCSCallerView * m_videoVoipCSViewController; // +0x18
}
+ (BOOL)canStartVideoWithContact:(id)arg1;
+ (BOOL)canForceStartVoiceWithContact:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)canStartVoip;
- (void)openVideoVoipCSViewWithBizUserName:(id)arg1 andMsgWrap:(id)arg2 isEarMode:(BOOL)arg3 appid:(id)arg4 headUrl:(id)arg5 isAllowBackCamera:(BOOL)arg6 isShowCSVideo:(BOOL)arg7 context:(id)arg8;
- (BOOL)isTheSameContactWithCurrentVoip:(id)arg1;
- (BOOL)showVideoEntranceInMainFrame;
- (BOOL)isViewEnding;
- (BOOL)isVoipWorking;
- (BOOL)isVideoVoipWorking;
- (BOOL)isVoipSpeakerMode;
- (void)showConflictWording;
- (id)getConflictWording;
- (void)showCannotStartVoipTwice;
- (BOOL)isMinimizeMode;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (BOOL)isUsingEarDevice;
- (void)clearCurrentString;
- (void)switchToSpeakPhoneMode:(BOOL)arg1;
- (void)onVideoVoipCSViewClose;
- (void)onVideoVoipCSViewChangeToMinimizeMode;
- (BOOL)onVideoVoipCSViewRequestMinimizeStatus;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (CGRect)onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)Cancel;
- (void)OnTellMeViewIsExist:(BOOL *)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)onPreQuit;
- (id)m_mainWindow;
- (void)setM_mainWindow:(id)arg1;
- (id)m_voipCSToastWindow;
- (void)setM_voipCSToastWindow:(id)arg1;
- (id)m_videoVoipCSViewController;
- (void)setM_videoVoipCSViewController:(id)arg1;
- (void).cxx_destruct;
@end

