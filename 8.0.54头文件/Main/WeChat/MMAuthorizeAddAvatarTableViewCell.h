@interface MMAuthorizeAddAvatarTableViewCell : UITableViewCell
{
    NSString * _wording; // +0x8
    UIImageView * _addIconView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    CALayer * _separateLine; // +0x20
}
+ (double)cellHeightForWidth:(double)arg1 wording:(id)arg2;
- (id)initWithWording:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end

