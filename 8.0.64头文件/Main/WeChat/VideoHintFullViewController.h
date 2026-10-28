@interface VideoHintFullViewController : MMUIViewController
{
    UIView * _backgroundView; // +0x70
    UILabel * _controlLabel; // +0x78
    UIView * _line; // +0x80
}
- (void)viewDidLoad;
- (void)initView;
- (void)onBack:(id)arg1;
- (void)animationForControlShow;
- (void)animationForControlHide;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)controlLabel;
- (void)setControlLabel:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (void).cxx_destruct;
@end
