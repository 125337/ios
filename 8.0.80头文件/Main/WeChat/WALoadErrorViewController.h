@interface WALoadErrorViewController : MMUIViewController
{
    UIImageView * _errorLogo; // +0x70
    MMUILabel * _titleLabel; // +0x78
    NSString * m_errStr; // +0x80
}
- (id)initWithTitle:(id)arg1 errString:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)m_errStr;
- (void)setM_errStr:(id)arg1;
- (void).cxx_destruct;
@end
