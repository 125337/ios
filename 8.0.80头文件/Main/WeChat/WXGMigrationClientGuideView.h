@interface WXGMigrationClientGuideView : MMWindowViewController
{
    id <WXGMigrationClientGuideViewDelegate> _delegate; // +0x80
    unsigned long long _scene; // +0x88
    UIView * _backgroundView; // +0x90
}
- (id)initWithScene:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)setupUiComponent;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateView;
- (void)showImportFromOtherDevice;
- (void)onCancelView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
