@interface MMLiveAnchorScreenRecordPIPHandleLogic : MMLiveCustomRenderPIPHandleLogic <WCFinderLiveExt>
{
    id /* block */ _getCustomViewBlock; // +0x8
    id /* block */ _getPIPRenderSizeBlock; // +0x10
    UIView * _attachedGameLiveAccessoryView; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)onCustomViewAttach:(id)arg1;
- (void)onCustomViewDeAttach:(id)arg1;
- (CGRect)getRenderViewFrame;
- (CGSize)getRenderSize;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (CGRect)getAbsoluteRenderViewFrame;
- (void)attachContentViewToCustomView:(id)arg1;
- (void)deAttachContentViewFromCustomView:(id)arg1;
- (id)getGameLiveAccessoryView;
- (void)attachGameLiveAccessoryViewToView:(id)arg1;
- (void)deAttachGameLiveAccessoryView;
- (BOOL)enableStartPictureInPicture;
- (BOOL)openTestMode;
- (id)finderLiveTask;
- (id /* block */)getCustomViewBlock;
- (void)setGetCustomViewBlock:(id /* block */)arg1;
- (id /* block */)getPIPRenderSizeBlock;
- (void)setGetPIPRenderSizeBlock:(id /* block */)arg1;
- (id)attachedGameLiveAccessoryView;
- (void)setAttachedGameLiveAccessoryView:(id)arg1;
- (void).cxx_destruct;
@end
