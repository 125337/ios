@interface WALoadErrorViewController : MMUIViewController
{
    UIImageView * _errorLogo; // +0x68
    MMUILabel * _titleLabel; // +0x70
    NSString * m_errStr; // +0x78
}
- (id)initWithTitle:(id)arg1 errString:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)m_errStr;
- (void)setM_errStr:(id)arg1;
- (void).cxx_destruct;
@end

