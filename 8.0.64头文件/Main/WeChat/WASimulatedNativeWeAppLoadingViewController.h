@interface WASimulatedNativeWeAppLoadingViewController : WALoadingViewController
{
    MMUIButton * _returnButton; // +0x70
    WATitleView * _titleView; // +0x78
    long long _orientation; // +0x80
    UIColor * _navigationBarTextColor; // +0x88
    unsigned long long _leftBtnType; // +0x90
    BOOL _sheetModeShouldHideLeftReturnButton; // +0x98
    BOOL _isSinglePageMode; // +0x99
}
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 isSinglePageMode:(BOOL)arg2;
- (id)initWithContact:(id)arg1 leftBtnType:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)showTitleLoading;
- (void)viewDidLayoutSubviews;
- (BOOL)sheetModeShouldHideLeftReturnButton;
- (void)setSheetModeShouldHideLeftReturnButton:(BOOL)arg1;
- (BOOL)isSinglePageMode;
- (void)setIsSinglePageMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
