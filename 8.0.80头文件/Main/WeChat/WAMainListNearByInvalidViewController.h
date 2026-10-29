@interface WAMainListNearByInvalidViewController : MMUIViewController
{
    unsigned long long _invalidType; // +0x70
    UIView * _contentView; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _contentLabel; // +0x88
}
- (id)initWithInvalidType:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initCustomNavigationBar;
- (void)updateNavigationItems;
- (void)initContentView;
- (void)onReturn;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (unsigned long long)invalidType;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
