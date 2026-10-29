@interface WCFinderCoverSelectAlbumView : MMUIView
{
    NSString * _iconName; // +0x8
    NSString * _text; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 iconName:(id)arg2 text:(id)arg3 clickBlock:(id /* block */)arg4;
- (id)iconImageView;
- (id)titleLabel;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

