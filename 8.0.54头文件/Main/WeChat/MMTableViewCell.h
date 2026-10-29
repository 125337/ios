@interface MMTableViewCell : UITableViewCell
{
    UISwitch * m_switchAccessoryView; // +0x8
    BOOL _keepTouchInView; // +0x10
    MMUIView * m_subContentView; // +0x18
    WCTableViewCellManager * _cellInfo; // +0x20
    double _deselectDuration; // +0x28
    UIEdgeInsets _selectedBackgroundViewInsets; // +0x30
}
+ (id)getCellTextHightlightedColor;
+ (id)getCellAttributeTextHightlightedColor;
+ (id)getCellAttributeDetailTextHightlightedColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryView;
- (void)addBackgroundView;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)m_subContentView;
- (void)setM_subContentView:(id)arg1;
- (id)cellInfo;
- (void)setCellInfo:(id)arg1;
- (double)deselectDuration;
- (void)setDeselectDuration:(double)arg1;
- (BOOL)keepTouchInView;
- (void)setKeepTouchInView:(BOOL)arg1;
- (UIEdgeInsets)selectedBackgroundViewInsets;
- (void)setSelectedBackgroundViewInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end

