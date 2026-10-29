@interface WCFinderTabFilterView : UIView
{
    BOOL _expand; // +0x8
    id <WCFinderTabFilterViewDelegate> _delegate; // +0x10
    NSArray * _nameList; // +0x18
    unsigned long long _selectedIndex; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initLayout;
- (void)initGestures;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)switchExpand:(BOOL)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)onTap:(id)arg1;
- (id)generateMenuItems;
- (void)showMenu;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nameList;
- (void)setNameList:(id)arg1;
- (unsigned long long)selectedIndex;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (BOOL)isExpanded;
- (void)setExpand:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

