@interface MJShootFavTemplateAuthorButton : MMUIButton
{
    MMWebImageView * _authorIcon; // +0x8
    MMUILabel * _authorNameLabel; // +0x10
}
+ (id)createAuthorButton;
- (void)updateAuthorProfilePicWithURL:(id)arg1;
- (void)updateAuthorDisplayName:(id)arg1;
- (id)authorIcon;
- (void)setAuthorIcon:(id)arg1;
- (id)authorNameLabel;
- (void)setAuthorNameLabel:(id)arg1;
- (void).cxx_destruct;
@end

