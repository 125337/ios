@interface MMLogViewController : MMUIViewController <MMPickerViewDelegate, ILogReportExt>
{
    MMProgressView * m_progressView; // +0x70
    UILabel * m_labelProgress; // +0x78
    UILabel * m_sizeProgressLabel; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    long long m_curDateIndex; // +0x90
    int m_curBeginHourIndex; // +0x98
    int m_curEndHourIndex; // +0x9c
    unsigned long long m_uploadStatus; // +0xa0
    unsigned long long m_lastTotalUploadSize; // +0xa8
    BOOL _bUseAirDrop; // +0xb0
    BOOL _bDirectFinishWhenUploadSuc; // +0xb1
    BOOL _bForceUseNonLogin; // +0xb2
    BOOL _showSpeedInfo; // +0xb3
    BOOL _isFromCustomer; // +0xb4
    int _uploadThreadCount; // +0xb8
    int _uploadBlockSize; // +0xbc
    id <MMLogViewControllerDelegate> _delegate; // +0xc0
    NSString * _countryCode; // +0xc8
    NSString * _phoneNumber; // +0xd0
    NSString * _dateStr; // +0xd8
    MMPickerView * _pickView; // +0xe0
    NSMutableArray * _dateList; // +0xe8
    MMPickerView * _beginHourPickView; // +0xf0
    NSMutableArray * _beginHourList; // +0xf8
    MMPickerView * _endHourPickView; // +0x100
    NSMutableArray * _endHourList; // +0x108
    unsigned long long _lastUpdateProgressTime; // +0x110
    unsigned long long _lastUpdateProgressUploadSize; // +0x118
    NSString * _lastSpeedInfoText; // +0x120
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
- (void)onCancelReportLog;
- (void)onRealCancelReportLog;
- (void)onReportLastOneHour;
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
