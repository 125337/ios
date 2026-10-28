@interface MailRTEToolView : UIView <MMPickLocationViewControllerDelegate, MMTipsViewControllerDelegate>
{
    MMUIView * _basicBtnContainer; // +0x8
    MMUIView * _extBtnContainer; // +0x10
    UIView * _tabLine; // +0x18
    UINavigationController * _picker; // +0x20
    unsigned int _mmassetCount; // +0x28
    id <MailRTEToolViewDelegate> _delegate; // +0x30
    NSMutableArray * _arrAttachments; // +0x38
    MMPickLocationViewController * _locationViewCtrl; // +0x40
}
- (id)init;
- (void)initUI;
- (void)initBasicView;
- (void)showBasicView;
- (id)getTitle:(int)arg1;
- (id)getIconName:(int)arg1;
- (id)getIconSelectedName:(int)arg1;
- (void)onClickItem:(id)arg1;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)arg1;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (void)onTakePhotoForPost;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onAddImageItemComplete;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)mmassetCount;
- (void)setMmassetCount:(unsigned int)arg1;
- (id)arrAttachments;
- (void)setArrAttachments:(id)arg1;
- (id)locationViewCtrl;
- (void)setLocationViewCtrl:(id)arg1;
- (void).cxx_destruct;
@end
