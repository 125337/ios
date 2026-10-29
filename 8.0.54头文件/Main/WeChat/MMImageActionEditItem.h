@interface MMImageActionEditItem : MMImageActionSheetItem <EditImageForwardAndEditLogicDelegate>
{
    EditImageForwardAndEditLogicController * _logicController; // +0x8
    id /* block */ _onShowEditView; // +0x10
    id /* block */ _onHideEditView; // +0x18
    UIImageView * _imageView; // +0x20
}
- (id)init;
- (void)handleWithImage;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id /* block */)onShowEditView;
- (void)setOnShowEditView:(id /* block */)arg1;
- (id /* block */)onHideEditView;
- (void)setOnHideEditView:(id /* block */)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end

