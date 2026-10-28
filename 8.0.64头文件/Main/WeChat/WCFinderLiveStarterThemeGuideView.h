@interface WCFinderLiveStarterThemeGuideView : MMPageSheetBaseView
{
    id /* block */ _themeGuideBlock; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUIButton * _editButton; // +0x20
    MMUIButton * _actionButton; // +0x28
    unsigned long long _type; // +0x30
}
- (void)updateWithTitle:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)contentView;
- (id)editButton;
- (id)actionButton;
- (id)titleLabel;
- (void)actionButtonClick;
- (void)editButtonClick;
- (id /* block */)themeGuideBlock;
- (void)setThemeGuideBlock:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setActionButton:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
