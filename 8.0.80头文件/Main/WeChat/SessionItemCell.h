@interface SessionItemCell : MMTableViewCell
{
    UIImageView * _selectedImage; // +0x8
    UIImageView * _resourceIcon; // +0x10
    UIButton * _detailButton; // +0x18
    UILabel * _sizeLabel; // +0x20
    UILabel * _sourceLabel; // +0x28
    shared_ptr<ChatLogSessionItem> _sessionItem; // +0x30
}
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateSessionItem:(const void *)arg1 selected:(BOOL)arg2;
- (void)layoutSubviews;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (shared_ptr<ChatLogSessionItem>)sessionItem;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
