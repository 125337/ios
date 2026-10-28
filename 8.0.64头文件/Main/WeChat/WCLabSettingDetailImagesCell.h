@interface WCLabSettingDetailImagesCell : UITableViewCell
{
    UIScrollView * _scrollView; // +0x8
    MMWebImageView * _webImageView; // +0x10
    MMWebImageView * _webImageView2; // +0x18
    MMWebImageView * _webImageView3; // +0x20
    id <WCLabSettingDetailImagesCellDelegate> _delegate; // +0x28
}
+ (double)height;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)arg1;
- (void)onClickImage:(id)arg1;
- (void)initImages;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
