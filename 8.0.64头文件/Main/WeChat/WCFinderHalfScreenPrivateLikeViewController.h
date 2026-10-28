@interface WCFinderHalfScreenPrivateLikeViewController : MMUIHalfScreenViewController
{
    RichTextView * _titleTextView; // +0x70
    RichTextView * _subtitleTextView; // +0x78
    PAGView * _animationView; // +0x80
    UIButton * _okButton; // +0x88
    NSString * _mtitle; // +0x90
    NSString * _subtitle; // +0x98
}
- (id)init;
- (void)initDataSource;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupAnimationView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutContentView;
- (void)clickOKButton;
- (double)calHalfScreenHeight;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)subtitleTextView;
- (void)setSubtitleTextView:(id)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (id)mtitle;
- (void)setMtitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void).cxx_destruct;
@end
