@interface WCFinderProfilePrivateAccountPage : WCFinderStreamProfileViewPage
{
    UIImageView * _lockIconView; // +0x8
    UILabel * _textLabel; // +0x10
}
- (id)loadView;
- (void)pageSizeDidChanged;
- (void)viewDidLoad;
- (void)reLayout;
- (void)updateLabelSize;
- (id)lockIconView;
- (void)setLockIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
