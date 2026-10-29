@interface MMImageActionFindTextItem : MMImageActionSheetItem <OCRTransHalfScreenViewControllerDelegate>
{
    unsigned int _enterScene; // +0x8
    unsigned int _svrScene; // +0xc
    WCImageTranslateLogic * _imgTranslateLogic; // +0x10
    NSString * _senderUserName; // +0x18
    UIScrollView * _animationScrollView; // +0x20
    UIView * _disableInteractWhenTranslateAnimatingView; // +0x28
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0x30
}
- (id)init;
- (BOOL)isHidden;
- (void)handleWithImage;
- (void)onImageActionSheetDidChangeImage;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (unsigned int)svrScene;
- (void)setSvrScene:(unsigned int)arg1;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (id)animationScrollView;
- (void)setAnimationScrollView:(id)arg1;
- (id)disableInteractWhenTranslateAnimatingView;
- (void)setDisableInteractWhenTranslateAnimatingView:(id)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (void).cxx_destruct;
@end

