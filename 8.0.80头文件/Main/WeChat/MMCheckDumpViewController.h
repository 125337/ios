@interface MMCheckDumpViewController : MMUIViewController <IWCDumpReporterMgrExt, MMPickerViewDelegate>
{
    UITextField * m_textFiled; // +0x70
    unsigned long long m_nTimeInterval; // +0x78
    NSMutableArray * m_arrDates; // +0x80
    long long m_selectedRow; // +0x88
    UIView * roundView; // +0x90
    UILabel * m_tipLabel; // +0x98
    UILabel * m_checklabel; // +0xa0
    UISwitch * m_checkSitchView; // +0xa8
    UIButton * m_btnDate; // +0xb0
    MMUILabel * m_rightLab; // +0xb8
    UIButton * m_btndump; // +0xc0
    UILabel * m_warningLabel; // +0xc8
    UIImageView * m_imgvRecover; // +0xd0
    MMPickerView * m_pickerView; // +0xd8
    UIButton * m_btnTestDBCorrupt; // +0xe0
    UIButton * m_btnTestFrameDrop; // +0xe8
    UIScrollView * m_mainScrollView; // +0xf0
    MMProgressView * m_progressView; // +0xf8
    UIButton * m_btnFinish; // +0x100
    BOOL m_isUploading; // +0x108
    BOOL m_isFinish; // +0x109
    unsigned long long m_status; // +0x110
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
