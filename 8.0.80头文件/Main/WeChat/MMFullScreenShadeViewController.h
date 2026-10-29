@interface MMFullScreenShadeViewController : MMWindowViewController
{
    MMUILabel * _remindTextLabel; // +0x80
    MMFullScreenShadeConfig * _shadeConfig; // +0x88
}
- (id)initWithConfig:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onClicked;
- (id)remindTextLabel;
- (void)setRemindTextLabel:(id)arg1;
- (id)shadeConfig;
- (void)setShadeConfig:(id)arg1;
- (void).cxx_destruct;
@end
