@interface MMImgFullScreenLogic_Device : MMImgFullScreenLogic
{
    ShareDataToOpenSDKController * _shareOpenSDKController; // +0x8
}
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)doOpen;
- (id)shareOpenSDKController;
- (void)setShareOpenSDKController:(id)arg1;
- (void).cxx_destruct;
@end
