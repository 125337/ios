@interface ImageMsgRecordViewModel : ImageMessageViewModel
- (id)thumbImage;
- (unsigned int)thumbDownloadStatus;
- (BOOL)isImageExists;
- (id)cellViewClassName;
- (id)maskedThumbImage;
- (id)maskedThumbImagePath;
- (void)createMaskImageFrom:(id)arg1 toPath:(id)arg2;
@end
