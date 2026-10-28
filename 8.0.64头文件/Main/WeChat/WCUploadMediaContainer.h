@interface WCUploadMediaContainer : NSObject
{
    WCUploadMedia * _mainUploadMedia; // +0x8
    WCUploadMedia * _livePhotoUploadMedia; // +0x10
}
- (id)initWithMainUploadMedia:(id)arg1;
- (id)mainUploadMedia;
- (id)livePhotoUploadMedia;
- (void)setLivePhotoUploadMedia:(id)arg1;
- (void).cxx_destruct;
@end
