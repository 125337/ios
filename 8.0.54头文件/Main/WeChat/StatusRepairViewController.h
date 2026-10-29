@interface StatusRepairViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    CGPoint _layoutOrigin; // +0x70
}
- (void)viewDidLoad;
- (void)onSwitchCell:(id)arg1 cell:(id)arg2;
- (void)viewDidLayoutSubviews;
- (CGPoint)layoutOrigin;
- (void)setLayoutOrigin:(CGPoint)arg1;
- (void).cxx_destruct;
@end

