@interface WCFinderLiveEditImageLayoutView : WCEditImageLayoutView <WCFinderEditFrameBlurViewDelegate>
{
    BOOL _showPreviewButton; // +0x8
    BOOL _showEnhancedButton; // +0x9
    BOOL _changingAspectRatio; // +0xa
    BOOL _enhanceImgSelected; // +0xb
    MMUIButton * _previewButton; // +0x10
    MMUIButton * _enhanceSwitch; // +0x18
    unsigned long long _tempEditEntrance; // +0x20
    MMFinderLiveGuidePubbleTipView * _editCoverEnhanceGuideView; // +0x28
    CGSize _ratio; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)customBottomButtonOrder;
- (BOOL)shouldAutoTriggerMusic;
- (void)startCropView:(CGRect)arg1;
- (void)onEditImage:(unsigned long long)arg1 withEditEntrance:(unsigned long long)arg2;
- (double)getEmoticonToolViewBottom;
- (void)updateCropLinesWithPoint:(CGPoint)arg1 aspectRatio:(double)arg2;
- (void)onCropToolBarRevertBtnClicked;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (void)preCropImage;
- (void)onceSavePropertyAndOutputImageAttr:(id /* block */)arg1;
- (void)makeAllUIHidden:(BOOL)arg1;
- (void)reloadWithNewImage:(id)arg1;
- (BOOL)showEditCoverEnhanceGuideViewAnimated:(BOOL)arg1;
- (void)dismissEditCoverEnhanceGuideViewAnimated:(BOOL)arg1;
- (void)setShowEnhancedButton:(BOOL)arg1;
- (id)previewButton;
- (id)enhanceSwitch;
- (void)setEnhanceImgSelected:(BOOL)arg1;
- (id)editCoverEnhanceGuideView;
- (void)onClickEditImagePreview;
- (void)onClickEnhanceImage;
- (CGSize)ratio;
- (void)setRatio:(CGSize)arg1;
- (BOOL)showPreviewButton;
- (void)setShowPreviewButton:(BOOL)arg1;
- (BOOL)showEnhancedButton;
- (BOOL)changingAspectRatio;
- (void)setChangingAspectRatio:(BOOL)arg1;
- (void)setPreviewButton:(id)arg1;
- (void)setEnhanceSwitch:(id)arg1;
- (BOOL)enhanceImgSelected;
- (unsigned long long)tempEditEntrance;
- (void)setTempEditEntrance:(unsigned long long)arg1;
- (void)setEditCoverEnhanceGuideView:(id)arg1;
- (void).cxx_destruct;
@end
