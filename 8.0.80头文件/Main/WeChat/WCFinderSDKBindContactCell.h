@interface WCFinderSDKBindContactCell : UITableViewCell
{
    WCFinderAuthorContactView * _contactView; // +0x8
    UIImageView * _iconImageView; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setUpUI;
- (void)updateWithContact:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end
