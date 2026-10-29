@interface MMFinderLiveSensitiveItemTableViewCell : MMMultiMenuTableViewCell
{
    RichTextView * _sensitiveTextView; // +0x40
    MMFinderLiveSensitiveDataItem * _sensitiveDataItem; // +0x48
}
+ (id)identifier;
+ (double)preferHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configEditMenuButtons;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSensitiveTextView;
- (void)updateSensitiveDataItem:(id)arg1;
- (id)sensitiveTextView;
- (void)setSensitiveTextView:(id)arg1;
- (id)sensitiveDataItem;
- (void)setSensitiveDataItem:(id)arg1;
- (void).cxx_destruct;
@end

