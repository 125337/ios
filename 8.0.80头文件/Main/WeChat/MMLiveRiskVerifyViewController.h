@interface MMLiveRiskVerifyViewController : MMUIViewController <MMWebViewDelegate>
{
    BOOL _hasReportedExpose; // +0x70
    id /* block */ _faceSuccessCallback; // +0x78
    id /* block */ _faceLimitCallback; // +0x80
    id /* block */ _exitCallback; // +0x88
    MMLiveTaskId * _taskId; // +0x90
    NSString * _riskTitle; // +0x98
    NSString * _subTitle; // +0xa0
    NSString * _url; // +0xa8
    UIImageView * _riskImageView; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UILabel * _subTitleLabel; // +0xc0
    UIButton * _actionButton; // +0xc8
}
- (id)initWithTaskId:(id)arg1 title:(id)arg2 subTitle:(id)arg3 url:(id)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (long long)getCurrentOrientation;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)exit;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)onNameVerifyButtonClicked;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutUI;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)riskImageView;
- (id)actionButton;
- (id /* block */)faceSuccessCallback;
- (void)setFaceSuccessCallback:(id /* block */)arg1;
- (id /* block */)faceLimitCallback;
- (void)setFaceLimitCallback:(id /* block */)arg1;
- (id /* block */)exitCallback;
- (void)setExitCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)riskTitle;
- (void)setRiskTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void)setRiskImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (BOOL)hasReportedExpose;
- (void)setHasReportedExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end
