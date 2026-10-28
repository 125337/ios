@interface StatusRepairViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    CGPoint _layoutOrigin; // +0x78
}
- (void)viewDidLoad;
- (void)onSwitchCell:(id)arg1 cell:(id)arg2;
- (void)viewDidLayoutSubviews;
- (CGPoint)layoutOrigin;
- (void)setLayoutOrigin:(CGPoint)arg1;
- (void).cxx_destruct;
@end
