@interface WAAgentAuditScanResultViewController : MMUIViewController
{
    unsigned long long _type; // +0x70
    id /* block */ _confirmBlock; // +0x78
    id /* block */ _closeBlock; // +0x80
    UIImageView * _iconView; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _subTitleLabel; // +0x98
    UIButton * _bottomBtn; // +0xa0
}
- (id)initWithType:(unsigned long long)arg1;
- (void)viewDidLoad;
- (BOOL)useCustomNavibar;
- (void)initCustomNavigationBar;
- (void)initSubviews;
- (BOOL)isStartCollectType;
- (id)titleText;
- (id)subTitleText;
- (id)buttonText;
- (void)onClose;
- (void)onConfirm;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)bottomBtn;
- (void)setBottomBtn:(id)arg1;
- (void).cxx_destruct;
@end
