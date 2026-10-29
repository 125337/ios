@interface MMAlbumSectionCell : UIView
{
    BOOL _active; // +0x8
    id <MMAlbumSectionCellDelegate> _delegate; // +0x10
    unsigned long long _section; // +0x18
    MMUIButton * _button; // +0x20
    MMUILabel * _titleLabel; // +0x28
}
- (id)initWithSection:(unsigned long long)arg1;
- (void)initViews;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (void)laytoutTitleViews;
- (void)onClick:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)section;
- (void)setSection:(unsigned long long)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)active;
- (void).cxx_destruct;
@end
