@interface MJLocationPickerHandler : NSObject <MMPickLocationViewControllerDelegate>
{
    id /* block */ _didFinishPick; // +0x8
    id /* block */ _didCancel; // +0x10
    MMPickLocationViewController * _picker; // +0x18
}
- (id)initWithPicker:(id)arg1;
- (void)dealloc;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (id /* block */)didFinishPick;
- (void)setDidFinishPick:(id /* block */)arg1;
- (id /* block */)didCancel;
- (void)setDidCancel:(id /* block */)arg1;
- (id)picker;
- (void)setPicker:(id)arg1;
- (void).cxx_destruct;
@end
