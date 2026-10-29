@interface MMMSMainViewController : MMUIViewController
{
    UIImageView * m_imgvRecover; // +0x68
    UILabel * m_tipLabel; // +0x70
    UIView * m_roundView; // +0x78
    UILabel * m_checklabel; // +0x80
    UISwitch * m_checkSitchView; // +0x88
    UIButton * m_btnUpload; // +0x90
    UILabel * m_warningLabel; // +0x98
    UIScrollView * m_mainScrollView; // +0xa0
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)makeInitView;
- (void)makeScrollView;
- (void)makeIconView;
- (void)makeTipLabelWithText:(id)arg1;
- (void)onSwitchValueChange:(id)arg1;
- (void)onUpload;
- (void).cxx_destruct;
@end

