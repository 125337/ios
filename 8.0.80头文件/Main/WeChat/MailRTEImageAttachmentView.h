@interface MailRTEImageAttachmentView : RTEAttachmentView <FavFullScreenImageViewControllerDelegate, IQQMailExt>
{
    MMUIActivityIndicatorView * m_loadingView; // +0x8
    MMUILabel * m_failLabel; // +0x10
    unsigned int _dataSize; // +0x18
    unsigned int _uiPlayTimes; // +0x1c
    id <MailRTEImageAttachmentViewDelegate> _delegate; // +0x20
    MMUIImageView * _imageView; // +0x28
    NSString * _localImagePath; // +0x30
    FavFullScreenImageViewController * _favImageVC; // +0x38
    double _imageScale; // +0x40
}
- (id)initWithAttachment:(id)arg1;
- (id)mailRTEAttachment;
- (void)layoutView;
- (void)onClickObject;
- (void)onLongPressObject:(id)arg1;
- (void)openImageWithEdit:(BOOL)arg1;
- (void)onEdit:(id)arg1;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)localImagePath;
- (void)setLocalImagePath:(id)arg1;
- (id)favImageVC;
- (void)setFavImageVC:(id)arg1;
- (unsigned int)dataSize;
- (void)setDataSize:(unsigned int)arg1;
- (unsigned int)uiPlayTimes;
- (void)setUiPlayTimes:(unsigned int)arg1;
- (double)imageScale;
- (void)setImageScale:(double)arg1;
- (void).cxx_destruct;
@end
