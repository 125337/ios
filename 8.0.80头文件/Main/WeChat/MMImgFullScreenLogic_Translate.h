@interface MMImgFullScreenLogic_Translate : MMImgFullScreenLogic
{
    WCImageTranslateLogic * _imgTranslateLogic; // +0x8
}
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)doTranslate;
- (void)onChangeTranslateLang;
- (void)onTranslateFeedback;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (void).cxx_destruct;
@end
