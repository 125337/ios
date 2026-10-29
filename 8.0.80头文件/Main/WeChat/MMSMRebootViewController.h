@interface MMSMRebootViewController : MMSMBaseViewController
{
    int _controllerType; // +0x20
}
- (void)viewDidLoad;
- (void)onNextButtonClicked:(id)arg1;
- (int)controllerType;
- (void)setControllerType:(int)arg1;
@end
