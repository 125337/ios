@interface WCFinderStartLiveHalfScreenViewController : MMUIHalfScreenViewController
{
    unsigned int _startLiveScene; // +0x68
    id /* block */ _startLiveAction; // +0x70
    UIImageView * _iconImageView; // +0x78
    UILabel * _topTitleLabel; // +0x80
    UIButton * _cancelButton; // +0x88
    UIButton * _certainButton; // +0x90
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initButton;
- (BOOL)isHideCloseButton;
- (void)updateUI;
- (void)startLive;
- (void)cancel;
- (id /* block */)startLiveAction;
- (void)setStartLiveAction:(id /* block */)arg1;
- (unsigned int)startLiveScene;
- (void)setStartLiveScene:(unsigned int)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)certainButton;
- (void)setCertainButton:(id)arg1;
- (void).cxx_destruct;
@end

