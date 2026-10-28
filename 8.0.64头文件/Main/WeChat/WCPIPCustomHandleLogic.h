@interface WCPIPCustomHandleLogic : NSObject <AVPictureInPictureControllerDelegate>
{
    BOOL _isSourcePixelBufferChanged; // +0x8
    BOOL _isAttachWidgetChanged; // +0x9
    BOOL _isHandling; // +0xa
    BOOL _isRestoreUserInterface; // +0xb
    BOOL _isManualFitSize; // +0xc
    BOOL _isPlayerAbnormalPaused; // +0xd
    BOOL _needClearSrcCompletely; // +0xe
}
- (void)startHandle;
- (void)stopHandle;
- (void)attachRenderView:(id)arg1;
- (void)updateRenderViewFrame;
- (CGRect)getRenderViewFrame;
- (void)handlePixelBufferRefresh:(id)arg1;
- (BOOL)enableStartPictureInPicture;
- (CGSize)getRenderSize;
- (id)getVideoSrcId;
- (id)getCurrentBusinessId;
- (void)refresh:(id)arg1 sourceId:(id)arg2;
- (void)clearVideoFrames;
- (void)tagPixelBufferRenderCompleted;
- (void)tagAttachWidgetRenderCompleted;
- (id)currentRenderObjDict;
- (id)currentRenderIdList;
- (BOOL)isRenderObjUnValid:(id)arg1;
- (BOOL)isVideoFrameUnValid:(id)arg1;
- (BOOL)isRenderIdUnValid:(id)arg1;
- (void)checkRenderObjectsValid:(long long)arg1;
- (void)destroy;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)onBeginRefreshSourcePixel;
- (void)onEndRefreshSourcePixel;
- (void)onBeginRenderPixel;
- (void)onEndRenderPixel;
- (void)onBeginNewRenderBuffer;
- (void)onEndNewRenderBuffer:(CGSize)arg1;
- (void)onBeginAttachWidgets;
- (void)onEndAttachWidgets:(unsigned long long)arg1;
- (void)onBeginRenderBuffer;
- (void)onEndRenderBuffer:(CGSize)arg1;
- (void)onStartCustomPixelTransfer;
- (void)onStopCustomPixelTransfer;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)needCollectSrcPixelBuffer;
- (BOOL)needSaveSrcIfPossible;
- (void)onPIPAuthorityOccupied;
- (void)onPIPAuthorityAchieved;
- (BOOL)checkCurrHasPIPAuthority;
- (BOOL)isSourcePixelBufferChanged;
- (void)setIsSourcePixelBufferChanged:(BOOL)arg1;
- (BOOL)isAttachWidgetChanged;
- (void)setIsAttachWidgetChanged:(BOOL)arg1;
- (BOOL)isHandling;
- (void)setIsHandling:(BOOL)arg1;
- (BOOL)isRestoreUserInterface;
- (void)setIsRestoreUserInterface:(BOOL)arg1;
- (BOOL)isManualFitSize;
- (void)setIsManualFitSize:(BOOL)arg1;
- (BOOL)isPlayerAbnormalPaused;
- (void)setIsPlayerAbnormalPaused:(BOOL)arg1;
- (BOOL)needClearSrcCompletely;
- (void)setNeedClearSrcCompletely:(BOOL)arg1;
@end
