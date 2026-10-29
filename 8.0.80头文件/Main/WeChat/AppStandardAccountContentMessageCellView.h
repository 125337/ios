@interface AppStandardAccountContentMessageCellView : AppStandardContentBaseMessageCellView
{
    RichTextView * _titleTextView; // +0xb8
    MMUILabel * _descLabel; // +0xc0
    MMWebImageView * _descIcon; // +0xc8
    UIView * _avatarView; // +0xd0
    UIImageView * _titleSuffixImageView; // +0xd8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initAvatar;
- (void)initTextContent;
- (void)createOrUpdateLayout;
- (id)avatarInSize:(CGSize)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)descIcon;
- (void)setDescIcon:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)titleSuffixImageView;
- (void)setTitleSuffixImageView:(id)arg1;
- (void).cxx_destruct;
@end
