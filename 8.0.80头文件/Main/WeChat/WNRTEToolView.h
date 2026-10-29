@interface WNRTEToolView : UIView <IWNAudioMgrExt, WNRTEToolViewHelperDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, IRecordPermissionCheckExt>
{
    MMUIView * _extBtnContainer; // +0x8
    UIView * _tabLine; // +0x10
    BOOL _allowVoiceClick; // +0x18
    UIView * _toastView; // +0x20
    double _baseBtnMargin; // +0x28
    UITableView * _tableView; // +0x30
    double _extPanelHeight; // +0x38
    BOOL _needUseAverageMargin; // +0x40
    int _viewType; // +0x44
    id <WNRTEToolViewDelegate> _delegate; // +0x48
    NSArray * _baseBtns; // +0x50
    NSArray * _extendBtns; // +0x58
    WNRTEToolViewHelper * _toolViewHelper; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setViewType:(int)arg1;
- (void)initUI;
- (BOOL)isDeviceLandscape;
- (double)realTotalWidth;
- (void)initBasicView;
- (id)genBaseButtomWithType:(int)arg1;
- (void)initExtendView;
- (void)showBasicView;
- (void)showTextExtView;
- (double)getExtendPanelHeight;
- (void)updateBtnStatus;
- (id)getTitle:(int)arg1;
- (id)getAccessbilityHint:(int)arg1;
- (id)getIconName:(int)arg1;
- (void)onClickItem:(id)arg1;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)arg1;
- (void)setBtnSelected:(long long)arg1 selected:(BOOL)arg2;
- (void)setBtnEnable:(int)arg1 Enabled:(BOOL)arg2;
- (void)showToastView:(id)arg1;
- (void)hideToast;
- (void)hideToastWithAnimation:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onCreateVoice:(id)arg1;
- (void)allowVoiceBtnClick;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)delegate;
- (int)viewType;
- (id)baseBtns;
- (void)setBaseBtns:(id)arg1;
- (id)extendBtns;
- (void)setExtendBtns:(id)arg1;
- (id)toolViewHelper;
- (void)setToolViewHelper:(id)arg1;
- (void).cxx_destruct;
@end
