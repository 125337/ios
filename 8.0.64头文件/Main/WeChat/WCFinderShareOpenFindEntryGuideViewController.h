@interface WCFinderShareOpenFindEntryGuideViewController : WCFinderCustomPanelSheet
{
    id /* block */ _confirmAction; // +0x70
    id /* block */ _denyAction; // +0x78
    NSString * _tid; // +0x80
    UILabel * _topTitleLabel; // +0x88
    UIImageView * _centerImageView; // +0x90
    UIButton * _confirmButton; // +0x98
    UIButton * _denyButton; // +0xa0
}
- (id)initWithTid:(id)arg1;
- (id)loadContentView;
- (void)reloadLayout;
- (long long)closeButtonStyle;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id /* block */)denyAction;
- (void)setDenyAction:(id /* block */)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (id)centerImageView;
- (void)setCenterImageView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)denyButton;
- (void)setDenyButton:(id)arg1;
- (void).cxx_destruct;
@end
