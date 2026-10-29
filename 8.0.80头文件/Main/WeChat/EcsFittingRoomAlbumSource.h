@interface EcsFittingRoomAlbumSource : NSObject <MMImagePickerManagerDelegate, MMAssetPickerControllerDelegate>
{
    BOOL _sessionActive; // +0x8
    BOOL _picked; // +0x9
    id <EcsFittingRoomAlbumSourceDelegate> _delegate; // +0x10
    long long _minimumImageEdge; // +0x18
    double _maximumImageAspectRatio; // +0x20
    UINavigationController * _picker; // +0x28
}
- (void)presentFromHost:(id)arg1;
- (id)presentingPicker;
- (void)resetPickingSession;
- (void)dismiss;
- (void)handleClickedAssetImage:(id)arg1 imageData:(id)arg2 picker:(id)arg3;
- (void)onAssetPickerController:(id)arg1 clickAssetInfo:(id)arg2;
- (void)failWithErrorCode:(unsigned long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)minimumImageEdge;
- (void)setMinimumImageEdge:(long long)arg1;
- (double)maximumImageAspectRatio;
- (void)setMaximumImageAspectRatio:(double)arg1;
- (id)picker;
- (void)setPicker:(id)arg1;
- (BOOL)sessionActive;
- (void)setSessionActive:(BOOL)arg1;
- (BOOL)picked;
- (void)setPicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
