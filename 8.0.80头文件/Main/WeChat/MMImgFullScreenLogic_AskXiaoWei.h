@interface MMImgFullScreenLogic_AskXiaoWei : MMImgFullScreenLogic
{
    MMImageBrowserIntentPredictor * _imageIntentPredictor; // +0x8
    NSMutableDictionary * _imageIntentResultDict; // +0x10
    NSMutableSet * _detectingImageIds; // +0x18
    NSMutableDictionary * _latestRequestIdDict; // +0x20
    unsigned long long _nextRequestId; // +0x28
    NSString * _initialReportImageIdentifier; // +0x30
    NSString * _currentReportImageIdentifier; // +0x38
    CBTImageAiPReportContext * _reportContext; // +0x40
}
- (id)initWithViewController:(id)arg1;
- (void)currentItemDidChange:(id)arg1;
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (BOOL)canShowButtonInToolForItem:(id)arg1;
- (BOOL)shouldPresentActionSheetItemForItem:(id)arg1;
- (long long)imageIntentTypeForItem:(id)arg1;
- (id)reportImageIdentifierForItem:(id)arg1;
- (id)reportContextForItem:(id)arg1;
- (BOOL)shouldDetectImageIntentForItem:(id)arg1;
- (void)detectImageIntentIfNeededForItem:(id)arg1 image:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)canDetectImageIntentForItem:(id)arg1;
- (id)askXiaoWeiImagePathForItem:(id)arg1;
- (id)askXiaoWeiImageMd5ForItem:(id)arg1 imagePath:(id)arg2;
- (BOOL)isSupportedAskXiaoWeiItem:(id)arg1;
- (BOOL)canUseAskXiaoWeiForItem:(id)arg1;
- (void)doAskXiaoWei;
- (void)reportBottomButtonExposureForItem:(id)arg1;
- (void)doAskXiaoWeiInToolForItem:(id)arg1 anchorView:(id)arg2;
- (void)showOriginalAskXiaoWeiForItem:(id)arg1;
- (void)showAskXiaoWeiForItem:(id)arg1 imageIntentType:(long long)arg2 presentIntentSelection:(BOOL)arg3 anchorView:(id)arg4;
- (id)imageIntentPredictor;
- (void)setImageIntentPredictor:(id)arg1;
- (id)imageIntentResultDict;
- (void)setImageIntentResultDict:(id)arg1;
- (id)detectingImageIds;
- (void)setDetectingImageIds:(id)arg1;
- (id)latestRequestIdDict;
- (void)setLatestRequestIdDict:(id)arg1;
- (unsigned long long)nextRequestId;
- (void)setNextRequestId:(unsigned long long)arg1;
- (id)initialReportImageIdentifier;
- (void)setInitialReportImageIdentifier:(id)arg1;
- (id)currentReportImageIdentifier;
- (void)setCurrentReportImageIdentifier:(id)arg1;
- (id)reportContext;
- (void)setReportContext:(id)arg1;
- (void).cxx_destruct;
@end
