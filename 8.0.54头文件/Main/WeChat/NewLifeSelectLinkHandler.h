@interface NewLifeSelectLinkHandler : NewLifeActionHandler <MMStoreEmotionDesignerPackSelectViewControllerDelegate, WCFinderPostLinkActionSheetDelegate, WCActionSheetDelegate>
{
    BOOL _preventEndForDismissingActionSheet; // +0x8
    NewLifeSelectLinkReq * _requset; // +0x10
}
- (void)handleRequest:(id)arg1;
- (long long)getCanSetLinkOptionFlag;
- (void)clickItem:(id)arg1;
- (void)postLinkActionSheetClickItem:(unsigned long long)arg1;
- (void)onClickAddShopAction;
- (void)onClickAddRedEnvelope;
- (void)reportLinkActionExpose:(unsigned long long)arg1;
- (void)reportEvent:(id)arg1 view:(id)arg2;
- (BOOL)checkCanSelectShopInfo;
- (unsigned int)emoticonDesignerUin;
- (BOOL)checkCanSelectStickerInfo;
- (void)onClickChooseStickerAction;
- (void)onClickPreviewStickerAction;
- (void)onTapEmoticonPackWithPid:(id)arg1 andPackName:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)requset;
- (void)setRequset:(id)arg1;
- (BOOL)preventEndForDismissingActionSheet;
- (void)setPreventEndForDismissingActionSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end

