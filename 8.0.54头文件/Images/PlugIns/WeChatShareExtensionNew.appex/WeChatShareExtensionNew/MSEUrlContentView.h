@interface MSEUrlContentView : UIView
{
    unsigned int _imageHeight; // +0x8
    NSString * _title; // +0x10
    NSString * _content; // +0x18
    NSURL * _thumbnailUrl; // +0x20
    NSString * _thumbnailPath; // +0x28
    NSString * _thumbnailImgName; // +0x30
    UIImageView * _thumbImgView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _subTitleLabel; // +0x48
    UIActivityIndicatorView * _urlLoadingView; // +0x50
    long long _shareType; // +0x58
    UIView * _loadingView; // +0x60
}
- (double)getUrlConetntViewHeight;
- (id)initUrlContentViewWithContainerWidth:(double)arg1 title:(id)arg2 contentUrl:(id)arg3 withThumbnailUrl:(id)arg4 ShareType:(long long)arg5;
- (id)initUrlContentViewWithContainerWidth:(double)arg1 title:(id)arg2 contentUrl:(id)arg3 withThumbnailFilePath:(id)arg4 ShareType:(long long)arg5;
- (id)initUrlContentViewWithContainerWidth:(double)arg1 title:(id)arg2 descContent:(id)arg3 withThumbImageName:(id)arg4 ShareType:(long long)arg5;
- (void)updateContentViewWithUrl:(id)arg1 title:(id)arg2 imageUrl:(id)arg3;
- (void)updateContentViewWithUrl:(id)arg1 title:(id)arg2 imageUrl:(id)arg3 urlDesc:(id)arg4;
- (void)updateTitleLength:(double)arg1;
- (void)initSubViews;
- (void)initThumbImgView;
- (void)initContentArea;
- (id)loadingView;
- (void)downloadThumbImage;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)thumbnailUrl;
- (void)setThumbnailUrl:(id)arg1;
- (id)thumbnailPath;
- (void)setThumbnailPath:(id)arg1;
- (id)thumbnailImgName;
- (void)setThumbnailImgName:(id)arg1;
- (id)thumbImgView;
- (void)setThumbImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)urlLoadingView;
- (void)setUrlLoadingView:(id)arg1;
- (unsigned int)imageHeight;
- (void)setImageHeight:(unsigned int)arg1;
- (long long)shareType;
- (void)setShareType:(long long)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

