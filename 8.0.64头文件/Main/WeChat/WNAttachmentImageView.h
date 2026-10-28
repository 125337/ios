@interface WNAttachmentImageView : WNAttachmentBaseView <WNImageViewDelegate, GroupNoticeUploadExt, SightIconViewDelegate>
{
    unsigned char _status; // +0x8
    SightIconView * _loadingView; // +0x10
    UIGestureRecognizer * _tapGesture; // +0x18
    MMUILabel * _hintLabel; // +0x20
    WNImageView * _imageView; // +0x28
    NSString * _localImagePath; // +0x30
}
+ (double)getHeightOfAttachment:(id)arg1 withWidth:(double)arg2;
- (void)forceLoadImage;
- (id)initWithAttachment:(id)arg1;
- (void)layoutView;
- (void)onLoadComplete:(id)arg1 SourcePath:(id)arg2;
- (void)onClickObject;
- (void)onEdit:(id)arg1;
- (id)loadingView;
- (id)hintLabel;
- (id)tapGesture;
- (void)retryUpload;
- (void)updateUploadUI:(unsigned char)arg1;
- (void)updateUploadUI:(unsigned char)arg1 forceUpdate:(BOOL)arg2;
- (void)onPreparingUploadGroupNoticeData:(id)arg1;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onUploadGroupNoticeData:(id)arg1 success:(BOOL)arg2;
- (void)onProgressEnd;
- (void)setLoadingView:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setHintLabel:(id)arg1;
- (unsigned char)status;
- (void)setStatus:(unsigned char)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)localImagePath;
- (void)setLocalImagePath:(id)arg1;
- (void).cxx_destruct;
@end
