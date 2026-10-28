@interface HearingAidSuccessViewController : MMUIViewController <MMTipsViewControllerDelegate>
{
    BOOL _isFromInit; // +0x70
    unsigned long long _mode; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UIImageView * _curPlayIcon; // +0x88
    UIView * _container; // +0x90
    HearingAidSuccessLogic * _logic; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initUI;
- (void)genContainer;
- (void)controlPlay:(unsigned long long)arg1;
- (void)onConfirmBtnClick;
- (void)onRefuseBtnClick;
- (BOOL)useCustomNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpPlayUI:(BOOL)arg1;
- (void)popBackToInitView:(BOOL)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)isFromInit;
- (void)setIsFromInit:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)curPlayIcon;
- (void)setCurPlayIcon:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end
