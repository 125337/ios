@interface BrandDebugBaseViewControllerMB : MMUIViewController
{
    NSMutableArray * m_itemViewArr; // +0x70
    NSMutableArray * m_debugItemArr; // +0x78
    UIScrollView * m_scrollView; // +0x80
    double m_offsetY; // +0x88
    double m_leftMargin; // +0x90
    double m_itemHeight; // +0x98
    BrandDebugCenterConfigMgr * _configMgr; // +0xa0
    WCUIAlertView * _alertView; // +0xa8
}
- (id)init;
- (void)viewDidLoad;
- (void)initNavigationBarItem;
- (void)onReturn;
- (void)onOperate;
- (void)initSubviews;
- (void)addItemButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)updateScrollViewContentSize;
- (void)addSimpleOptionItemForABTest:(id)arg1 wordingForYES:(id)arg2 wordingForNO:(id)arg3 exptKey:(id)arg4 configType:(unsigned int)arg5;
- (void)addSimpleOptionItemForABTest:(id)arg1 wordingForYES:(id)arg2 wordingForNO:(id)arg3 exptKey:(id)arg4 configType:(unsigned int)arg5 hasDefaultOption:(BOOL)arg6;
- (void)addSimpleOptionItemForABTest:(id)arg1 wordingForYES:(id)arg2 wordingForNO:(id)arg3 exptKey:(id)arg4 configType:(unsigned int)arg5 hasDefaultOption:(BOOL)arg6 disable:(BOOL)arg7;
- (void)addSimpleOptionItemForABTest:(id)arg1 wordingForYES:(id)arg2 wordingForNO:(id)arg3 exptKey:(id)arg4 configType:(unsigned int)arg5 hasDefaultOption:(BOOL)arg6 disable:(BOOL)arg7 callback:(id /* block */)arg8;
- (void)addHeaderTitle:(id)arg1;
- (void)showInputViewWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)configMgr;
- (void)setConfigMgr:(id)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (void).cxx_destruct;
@end
