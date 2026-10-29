@interface WCFinderNearByDescriptionTableViewCell : UITableViewCell
{
    UIButton * _descriptionLabel; // +0x8
}
+ (double)descriptionCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)hideDescriptionLabel:(BOOL)arg1;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)updateWith:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end

