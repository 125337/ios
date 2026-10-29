@interface MMImageActionTranslateItem : MMImageActionSheetItem <WCTranslateImgViewControllerDelegate>
{
    WCImageTranslateLogic * _imgTranslateLogic; // +0x8
    UIScrollView * _animationScrollView; // +0x10
    UIView * _disableInteractWhenTranslateAnimatingView; // +0x18
    id _translateItem; // +0x20
}
- (id)init;
- (BOOL)isHidden;
- (void)onImageActionSheetDidAppear;
- (void)handleWithImage;
- (void)showTranslateImage;
- (void)cancelTranslating;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (id)animationScrollView;
- (void)setAnimationScrollView:(id)arg1;
- (id)disableInteractWhenTranslateAnimatingView;
- (void)setDisableInteractWhenTranslateAnimatingView:(id)arg1;
- (id)translateItem;
- (void)setTranslateItem:(id)arg1;
- (void).cxx_destruct;
@end

