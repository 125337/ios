@interface WCFinderInteractiveFavoriteTypePickerItemView : UIView
{
    BOOL _selected; // +0x8
    unsigned long long _type; // +0x10
    UILabel * _label; // +0x18
}
- (id)initWithType:(unsigned long long)arg1;
- (void)setupUI;
- (void)didTapSelf;
- (void)setSelected:(BOOL)arg1;
- (id)label;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)isSelected;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
