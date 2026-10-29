@interface MMImgFullScreenLogic_Edit : MMImgFullScreenLogic <EditImageForwardAndEditLogicDelegate>
{
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x8
}
- (BOOL)canShowActionSheet;
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)startEditImage:(BOOL)arg1;
- (void)onDismissEditView;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (void).cxx_destruct;
@end
