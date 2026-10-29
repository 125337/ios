@interface MSENewUrlContentView : UIView
{
    NSString * _title; // +0x8
    NSString * _content; // +0x10
    NSURL * _thumbnailUrl; // +0x18
    NSString * _thumbnailPath; // +0x20
    NSString * _thumbnailImgName; // +0x28
    UIImageView * _thumbImgView; // +0x30
    UILabel * _titleLabel; // +0x38
    UILabel * _subTitleLabel; // +0x40
}
+ (double)getUrlConetntViewHeight;
- (id)initUrlContentViewWithContainerWidth:(double)arg1 title:(id)arg2 contentUrl:(id)arg3 withThumbnailUrl:(id)arg4;
- (id)initUrlContentViewWithContainerWidth:(double)arg1 title:(id)arg2 contentUrl:(id)arg3 withThumbnailFilePath:(id)arg4;
- (id)initUrlContentViewWithContainerWidth:(double)arg1 title:(id)arg2 descContent:(id)arg3 withThumbImageName:(id)arg4;
- (void)updateTitleLength:(double)arg1;
- (void)updateContentViewWithUrl:(id)arg1 title:(id)arg2 imageUrl:(id)arg3;
- (void)initSubViews;
- (void)initThumbImgView;
- (void)initContentArea;
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
- (void).cxx_destruct;
@end

