@interface MMLogViewController : MMUIViewController <MMPickerViewDelegate, ILogReportExt>
{
    MMProgressView * m_progressView; // +0x68
    UILabel * m_labelProgress; // +0x70
    UILabel * m_sizeProgressLabel; // +0x78
    MMTableViewInfo * m_tableViewInfo; // +0x80
    long long m_curDateIndex; // +0x88
    int m_curBeginHourIndex; // +0x90
    int m_curEndHourIndex; // +0x94
    unsigned long long m_uploadStatus; // +0x98
    unsigned long long m_lastTotalUploadSize; // +0xa0
    BOOL _bUseAirDrop; // +0xa8
    BOOL _bDirectFinishWhenUploadSuc; // +0xa9
    BOOL _bForceUseNonLogin; // +0xaa
    BOOL _showSpeedInfo; // +0xab
    BOOL _isFromCustomer; // +0xac
    int _uploadThreadCount; // +0xb0
    int _uploadBlockSize; // +0xb4
    id <MMLogViewControllerDelegate> _delegate; // +0xb8
    NSString * _countryCode; // +0xc0
    NSString * _phoneNumber; // +0xc8
    NSString * _dateStr; // +0xd0
    MMPickerView * _pickView; // +0xd8
    NSMutableArray * _dateList; // +0xe0
    MMPickerView * _beginHourPickView; // +0xe8
    NSMutableArray * _beginHourList; // +0xf0
    MMPickerView * _endHourPickView; // +0xf8
    NSMutableArray * _endHourList; // +0x100
    unsigned long long _lastUpdateProgressTime; // +0x108
    unsigned long long _lastUpdateProgressUploadSize; // +0x110
    NSString * _lastSpeedInfoText; // +0x118
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;
- (id)initWithDateString:(id)arg1;
- (void)configUploadSpeedSetting;
- (BOOL)setUploadDateOfDay:(id)arg1;
- (int)uploadThreadCount;
- (int)uploadBlockSize;
- (void)initLists;
- (void)initDates;
- (void)initHours;
- (void)onShowLog;
- (void)initView;
- (id)getHeaderView;
- (void)reloadTableViewData;
- (id)getFooterView;
- (void)onSwitchValueChange:(id)arg1;
- (void)MMPickerView:(id)arg1 didChooseRow:(long long)arg2 atSession:(long long)arg3;
- (void)MMPickerViewDidCancel;
- (void)onDatePicker:(id)arg1;
- (void)onBeginHourPicker:(id)arg1;
- (void)onEndHourPicker:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setUploadFail;
- (void)setUploadSuc;
- (void)onAirDropLog;
- (void)onReportLog;
- (void)onFinish;
- (void)onBack;
- (void)onQuitWithTotalSize:(unsigned long long)arg1;
- (void)OnResponse:(id)arg1;
- (void)updateProgressLabelWithUploadSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)UploadFail;
- (void)UploadSuccess;
- (void)onShowSpeedySetting;
- (void)uploadDump;
- (void)uploadExtensionLog;
- (void)uploadWatchLog;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bUseAirDrop;
- (void)setBUseAirDrop:(BOOL)arg1;
- (BOOL)bDirectFinishWhenUploadSuc;
- (void)setBDirectFinishWhenUploadSuc:(BOOL)arg1;
- (BOOL)bForceUseNonLogin;
- (void)setBForceUseNonLogin:(BOOL)arg1;
- (void)setUploadThreadCount:(int)arg1;
- (void)setUploadBlockSize:(int)arg1;
- (BOOL)showSpeedInfo;
- (void)setShowSpeedInfo:(BOOL)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)dateStr;
- (void)setDateStr:(id)arg1;
- (id)pickView;
- (void)setPickView:(id)arg1;
- (id)dateList;
- (void)setDateList:(id)arg1;
- (id)beginHourPickView;
- (void)setBeginHourPickView:(id)arg1;
- (id)beginHourList;
- (void)setBeginHourList:(id)arg1;
- (id)endHourPickView;
- (void)setEndHourPickView:(id)arg1;
- (id)endHourList;
- (void)setEndHourList:(id)arg1;
- (BOOL)isFromCustomer;
- (void)setIsFromCustomer:(BOOL)arg1;
- (unsigned long long)lastUpdateProgressTime;
- (void)setLastUpdateProgressTime:(unsigned long long)arg1;
- (unsigned long long)lastUpdateProgressUploadSize;
- (void)setLastUpdateProgressUploadSize:(unsigned long long)arg1;
- (id)lastSpeedInfoText;
- (void)setLastSpeedInfoText:(id)arg1;
- (void).cxx_destruct;
@end

