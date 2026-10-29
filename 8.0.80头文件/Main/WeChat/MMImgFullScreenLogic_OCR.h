@interface MMImgFullScreenLogic_OCR : MMImgFullScreenLogic <OCRTransHalfScreenViewControllerDelegate>
{
    WCImageTranslateLogic * _imgTranslateLogic; // +0x8
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0x10
}
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)doOCR;
- (unsigned int)ocrEnterScene;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (void).cxx_destruct;
@end
