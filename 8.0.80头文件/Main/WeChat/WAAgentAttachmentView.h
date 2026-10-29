@interface WAAgentAttachmentView : UIView
{
    BOOL _isShowing; // +0x8
    BOOL _darkModeEnabled; // +0x9
    BOOL _sheetMode; // +0xa
    id <WAAgentAttachmentViewDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    NSMutableArray * _itemViews; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (id)createAttachmentItemWithTitle:(id)arg1 iconName:(id)arg2 type:(unsigned long long)arg3;
- (void)updateDarkModeAppearance;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setSheetMode:(BOOL)arg1;
- (void)show;
- (void)hide;
- (void)markHidden;
- (void)setType:(unsigned long long)arg1 enabled:(BOOL)arg2;
- (void)onAttachmentItemTap:(id)arg1;
- (id)iconNameForAttachmentType:(unsigned long long)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (BOOL)darkModeEnabled;
- (void)setDarkModeEnabled:(BOOL)arg1;
- (BOOL)sheetMode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (void).cxx_destruct;
@end
