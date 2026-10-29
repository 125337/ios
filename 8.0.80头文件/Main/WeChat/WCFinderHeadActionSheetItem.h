@interface WCFinderHeadActionSheetItem : NSObject
{
    NSString * _title; // +0x8
    NSString * _subTitle; // +0x10
    UIColor * _subTitleColor; // +0x18
    WCFinderRedDotTipsShowInfo * _showInfo; // +0x20
    NSString * _cameraTemplateTitle; // +0x28
    id /* block */ _clickBlock; // +0x30
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (id)cameraTemplateTitle;
- (void)setCameraTemplateTitle:(id)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
