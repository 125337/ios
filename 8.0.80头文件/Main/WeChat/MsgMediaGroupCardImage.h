@interface MsgMediaGroupCardImage : MsgMediaGroupCardContentView
{
    UIImageView * _imageView; // +0x30
    unsigned long long _state; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;
- (void)setupUI;
- (void)layoutSubviews;
- (void)tryLoadThumb;
- (BOOL)tryLoadMidImage;
- (void)startDownloadMidImage;
- (void)startDisplay;
- (void)endDisplay;
- (void)becomeActive;
- (void)resignActive;
- (void)onBeginAnimating;
- (void)onEndAnimating;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onMessageUploadThumbImageOK;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
