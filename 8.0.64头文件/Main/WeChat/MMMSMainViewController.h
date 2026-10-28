@interface MMMSMainViewController : MMUIViewController
{
    UIImageView * m_imgvRecover; // +0x70
    UILabel * m_tipLabel; // +0x78
    UIView * m_roundView; // +0x80
    UILabel * m_checklabel; // +0x88
    UISwitch * m_checkSitchView; // +0x90
    UIButton * m_btnUpload; // +0x98
    UILabel * m_warningLabel; // +0xa0
    UIScrollView * m_mainScrollView; // +0xa8
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
