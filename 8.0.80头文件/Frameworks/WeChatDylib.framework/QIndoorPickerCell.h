@interface QIndoorPickerCell : UITableViewCell
{
    BOOL _isDarkStyle; // +0x8
    QIndoorLevel * _indoorLevel; // +0x10
    UILabel * _label; // +0x18
    NSString * _customFont; // +0x20
}
- (void)fillLabel;
- (void)layoutSubviews;
- (void)setIndoorLevel:(id)arg1;
- (void)setCustomFont:(id)arg1;
- (void)setIsDarkStyle:(BOOL)arg1;
- (void)setupBackground;
- (void)setupLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isDarkStyle:(BOOL)arg3;
- (BOOL)isDarkStyle;
- (id)indoorLevel;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)customFont;
- (void).cxx_destruct;
@end
