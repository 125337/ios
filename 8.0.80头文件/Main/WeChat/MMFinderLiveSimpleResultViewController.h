@interface MMFinderLiveSimpleResultViewController : MMUIViewController
{
    NSString * _wording; // +0x70
    UIImageView * _iconView; // +0x78
    UILabel * _label; // +0x80
    UIButton * _button; // +0x88
}
- (id)initWithWording:(id)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)onButtonClicked;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end
