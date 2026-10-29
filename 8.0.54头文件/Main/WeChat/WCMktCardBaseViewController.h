@interface WCMktCardBaseViewController : MMUIViewController
{
    BOOL _isFromJsapi; // +0x68
    NSString * _viewControllerTitle; // +0x70
}
- (id)initWithTitle:(id)arg1;
- (void)viewDidLoad;
- (BOOL)isFromJsapi;
- (void)setIsFromJsapi:(BOOL)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (void).cxx_destruct;
@end

