@interface MMImageActionEditItem : MMImageActionSheetItem <EditImageForwardAndEditLogicDelegate>
{
    int _pickerScene; // +0x8
    EditImageForwardAndEditLogicController * _logicController; // +0x10
    id /* block */ _onShowEditView; // +0x18
    id /* block */ _onHideEditView; // +0x20
    UIImageView * _imageView; // +0x28
}
- (id)init;
- (void)handleWithImage;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (void)onForwardMessageSendOKInEditView;
- (void)onAddFavoritesSuccessInEditView;
- (void)onSaveImageBeginInEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id /* block */)onShowEditView;
- (void)setOnShowEditView:(id /* block */)arg1;
- (id /* block */)onHideEditView;
- (void)setOnHideEditView:(id /* block */)arg1;
- (int)pickerScene;
- (void)setPickerScene:(int)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
