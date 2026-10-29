@interface MMCheckDumpViewController : MMUIViewController <IWCDumpReporterMgrExt, MMPickerViewDelegate>
{
    UITextField * m_textFiled; // +0x68
    unsigned long long m_nTimeInterval; // +0x70
    NSMutableArray * m_arrDates; // +0x78
    long long m_selectedRow; // +0x80
    UIView * roundView; // +0x88
    UILabel * m_tipLabel; // +0x90
    UILabel * m_checklabel; // +0x98
    UISwitch * m_checkSitchView; // +0xa0
    UIButton * m_btnDate; // +0xa8
    MMUILabel * m_rightLab; // +0xb0
    UIButton * m_btndump; // +0xb8
    UILabel * m_warningLabel; // +0xc0
    UIImageView * m_imgvRecover; // +0xc8
    MMPickerView * m_pickerView; // +0xd0
    UIButton * m_btnTestDBCorrupt; // +0xd8
    UIButton * m_btnTestFrameDrop; // +0xe0
    UIScrollView * m_mainScrollView; // +0xe8
    MMProgressView * m_progressView; // +0xf0
    UIButton * m_btnFinish; // +0xf8
    BOOL m_isUploading; // +0x100
    BOOL m_isFinish; // +0x101
    unsigned long long m_status; // +0x108
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)makeInitView;
- (void)makeUploadingView;
- (void)makeFinishState;
- (void)makeUploadSuccessView;
- (void)makeScrollView;
- (void)makeIconView:(id)arg1;
- (void)makeTipLabelWithText:(id)arg1;
- (void)makeProgressView;
- (void)makeFinishBtn;
- (void)initData;
- (void)onSwitchValueChange:(id)arg1;
- (void)onUploadDump;
- (void)onChoseDate:(id)arg1;
- (void)onFinish;
- (void)OnClickBackBarButton:(id)arg1;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)onDumpReporterUploadResult:(BOOL)arg1;
- (void)onDumpReporterUploadProgress:(double)arg1;
- (void).cxx_destruct;
@end

