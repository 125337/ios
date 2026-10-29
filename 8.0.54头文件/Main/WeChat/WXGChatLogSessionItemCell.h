@interface WXGChatLogSessionItemCell : MMTableViewCell
{
    UIImageView * _selectedImage; // +0x8
    UIImageView * _resourceIcon; // +0x10
    UILabel * _sizeLabel; // +0x18
    UILabel * _sourceLabel; // +0x20
    shared_ptr<ChatLogSessionItem> _sessionItem; // +0x28
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateSessionItem:(shared_ptr<ChatLogSessionItem>)arg1 selected:(BOOL)arg2 textOnly:(BOOL)arg3 textType:(unsigned long long)arg4;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)resourceIcon;
- (void)setResourceIcon:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (shared_ptr<ChatLogSessionItem>)sessionItem;
- (void)setSessionItem:(shared_ptr<ChatLogSessionItem>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

