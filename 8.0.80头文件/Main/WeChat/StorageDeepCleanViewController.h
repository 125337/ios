@interface StorageDeepCleanViewController : MMUIViewController <IDeepCleanClassExt, WCActionSheetDelegate>
{
    float _cleanProgress; // +0x70
    float _estimatedTimeMins; // +0x74
    id <StorageDeepCleanDelete> _delegate; // +0x78
    unsigned long long _scene; // +0x80
    UIView * _iconView; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _desLabel; // +0x98
    UILabel * _estimateTimeLabel; // +0xa0
    UIButton * _bottomButton; // +0xa8
    unsigned long long _dcState; // +0xb0
    NSArray * _cleanArray; // +0xb8
    unsigned long long _beforeCleanSize; // +0xc0
}
- (unsigned long long)getCleanSize;
- (id)getEstimateTimeDesc;
- (id)getCleanSizeDesc;
- (id)getCurrentProgress;
- (id)getCurrentEstimateTime;
- (void)calculateProgressLevel;
- (void)p_getWarningTipView;
- (id)p_getTitleAttrString:(id)arg1;
- (void)refreshView;
- (void)setupView;
- (id)initWithDeepCleanClass:(id)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onDeepClean:(id)arg1 progressChange:(float)arg2;
- (void)onDeepCleanStop:(id)arg1;
- (void)showDeleteActionSheet;
- (void)showCancelActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deepCleanBegin;
- (void)onPressOK;
- (void)onPressCancel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)desLabel;
- (void)setDesLabel:(id)arg1;
- (id)estimateTimeLabel;
- (void)setEstimateTimeLabel:(id)arg1;
- (id)bottomButton;
- (void)setBottomButton:(id)arg1;
- (unsigned long long)dcState;
- (void)setDcState:(unsigned long long)arg1;
- (float)cleanProgress;
- (void)setCleanProgress:(float)arg1;
- (float)estimatedTimeMins;
- (void)setEstimatedTimeMins:(float)arg1;
- (id)cleanArray;
- (void)setCleanArray:(id)arg1;
- (unsigned long long)beforeCleanSize;
- (void)setBeforeCleanSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
