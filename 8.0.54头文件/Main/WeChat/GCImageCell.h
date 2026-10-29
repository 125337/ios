@interface GCImageCell : GCChatBaseCell <IDownloadImageExt, IMessageWrapImgExt>
{
    YYAsyncImageView * m_imageView; // +0x8
    UIImageView * m_imageDownloadFailView; // +0x10
    UIImageView * m_imageLoadingBackgroundView; // +0x18
    SightIconView * m_imageLoadingView; // +0x20
    UIImageView * m_icloudImageIcon; // +0x28
    UIImageView * m_icloudBackground; // +0x30
    UILabel * m_icloudLabel; // +0x38
    UIView * m_imageMaskView; // +0x40
    UIView * _imgContentView; // +0x48
}
+ (void)onCalculatLayoutInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)bindImgCellModel;
- (id)imgMsgWrapper;
- (void)initImageView;
- (id)getCoverImage;
- (void)handleUpload;
- (void)handleIcloudPointProgress:(int)arg1;
- (void)handleDownload;
- (void)updateStatus;
- (void)addDownloadFailView;
- (void)startLoading;
- (void)startLoadingWithUseProgress:(BOOL)arg1;
- (void)stopLoading;
- (void)addICloudIcon;
- (void)removeICloudIcon;
- (void)setHighlighted:(BOOL)arg1;
- (id)imgContentView;
- (void)setImgContentView:(id)arg1;
- (void).cxx_destruct;
@end

