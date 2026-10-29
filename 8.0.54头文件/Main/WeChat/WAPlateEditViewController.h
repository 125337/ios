@interface WAPlateEditViewController : MMUIViewController <WAPlateInputViewDelegate>
{
    BOOL _firstIn; // +0x68
    NSString * _createSubDesc; // +0x70
    NSObject<WAPlateEditViewControllerDelegate> * _delegate; // +0x78
    WAPlateInputView * _plateInputView; // +0x80
    WAPlateItem * _plateItem; // +0x88
    MMUILabel * _inputReminder; // +0x90
    unsigned long long _style; // +0x98
    UILabel * _tipsLabel; // +0xa0
}
- (id)initWithPlateItem:(id)arg1 Style:(unsigned long long)arg2;
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)initSubviewsWithStyle:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)configPlateItem:(id)arg1;
- (BOOL)disMissSelf;
- (void)onFinishBtnClicked;
- (void)OnInputCanFinish:(id)arg1;
- (void)onInputDisableFinish;
- (id)createSubDesc;
- (void)setCreateSubDesc:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)firstIn;
- (void)setFirstIn:(BOOL)arg1;
- (id)plateInputView;
- (void)setPlateInputView:(id)arg1;
- (id)plateItem;
- (void)setPlateItem:(id)arg1;
- (id)inputReminder;
- (void)setInputReminder:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

