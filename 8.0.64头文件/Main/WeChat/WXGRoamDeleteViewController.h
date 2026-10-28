@interface WXGRoamDeleteViewController : MMUIViewController <WCActionSheetDelegate, IRoamBackupPackageServiceExt>
{
    BOOL _bDeleteAbort; // +0x70
    long long _enterScene; // +0x78
    MMUIScrollView * _backgroundView; // +0x80
    UIImageView * _iconView; // +0x88
    SightIconView * _sightIconView; // +0x90
    UILabel * _titleLabel; // +0x98
    UILabel * _subtitleLabel; // +0xa0
    UIButton * _clearBtn; // +0xa8
    MMUIActivityIndicatorView * _loadingView; // +0xb0
    UIButton * _closeBtn; // +0xb8
    unsigned long long _state; // +0xc0
    WXGRoamDeleteHalfView * _disconnectView; // +0xc8
}
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)arg1 packageID:(unsigned long long)arg2;
- (void)setState:(unsigned long long)arg1;
- (void)close;
- (void)cancel;
- (void)initViews;
- (void)layoutUI;
- (void)layoutDefaultUI;
- (void)layoutClearingUI;
- (void)layoutFinishedUI;
- (id)backgroundView;
- (id)iconView;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)resetClearBtn;
- (id)clearBtn;
- (id)closeBtn;
- (id)sightIconView;
- (void)updateLabel:(id)arg1 text:(id)arg2 lineHeight:(double)arg3;
- (BOOL)stopIfNeeded;
- (void)startConnect;
- (void)showClearLocalDataActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapClearBtn;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setSightIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setClearBtn:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (unsigned long long)state;
- (BOOL)bDeleteAbort;
- (void)setBDeleteAbort:(BOOL)arg1;
- (id)disconnectView;
- (void)setDisconnectView:(id)arg1;
- (void).cxx_destruct;
@end
