@interface WCFinderEditImageBasicLayoutView : WCEditImageLayoutView
{
    BOOL _hiddenCropBtn; // +0x8
    WCFinderTemplateMusicSelectEntranceView * _musicEntranceView; // +0x10
}
- (id)customBottomButtonOrder;
- (BOOL)shouldAutoTriggerMusic;
- (BOOL)canShowBGMBtn;
- (void)initPenToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)reloadMosaicToolAttrBar;
- (void)reloadBottomEditImageBar;
- (void)addPatMusicInfoToBGMLogic;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(BOOL)arg2 topRight:(BOOL)arg3 bottomLeft:(BOOL)arg4 bottomRight:(BOOL)arg5 radius:(float)arg6;
- (void)onfinderEditFrameBlurViewTap;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (void)reportClickDoneAction;
- (BOOL)shouldShowNewBGMPanel;
- (BOOL)hiddenCropBtn;
- (void)setHiddenCropBtn:(BOOL)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (void).cxx_destruct;
@end
