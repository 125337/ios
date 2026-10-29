@interface WCFinderLiveHomePageEntertainmentGenericNotificationView : UIView
{
    UIView * _bgView; // +0x8
    MMWebImageView * _imageView; // +0x10
    RichTextView * _titleLabel; // +0x18
    WCFinderLiveHomePageFeedEntertainmentGenericNotification * _data; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

