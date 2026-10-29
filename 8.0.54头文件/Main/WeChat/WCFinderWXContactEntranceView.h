@interface WCFinderWXContactEntranceView : UIView
{
    BOOL _useNewStyle; // +0x8
    UIView * _contactInfoBox; // +0x10
    UILabel * _contactNameLabel; // +0x18
    UILabel * _authInfoLabel; // +0x20
    UILabel * _contactDescLabel; // +0x28
    WCFinderAuthInfoIconView * _authIconView; // +0x30
    UIView * _coverStackView; // +0x38
}
+ (double)displayHeightWithNewStyle:(BOOL)arg1 contact:(id)arg2 coverItems:(vector<PreviewCoverItem, std::allocator<PreviewCoverItem>>)arg3 titleFont:(id)arg4 contactDesc:(id)arg5;
- (id)initWithTitleFont:(id)arg1 width:(double)arg2;
- (void)setupViewWithNewStyle:(BOOL)arg1 contact:(id)arg2 coverItems:(vector<PreviewCoverItem, std::allocator<PreviewCoverItem>>)arg3 showIcon:(BOOL)arg4 contactDesc:(id)arg5;
- (void)configCellInfo:(id)arg1;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg1;
- (id)contactInfoBox;
- (void)setContactInfoBox:(id)arg1;
- (id)contactNameLabel;
- (void)setContactNameLabel:(id)arg1;
- (id)authInfoLabel;
- (void)setAuthInfoLabel:(id)arg1;
- (id)contactDescLabel;
- (void)setContactDescLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)coverStackView;
- (void)setCoverStackView:(id)arg1;
- (void).cxx_destruct;
@end

