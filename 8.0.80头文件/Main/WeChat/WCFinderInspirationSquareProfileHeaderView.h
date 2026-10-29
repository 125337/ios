@interface WCFinderInspirationSquareProfileHeaderView : UIView
{
    id /* block */ _clickMoreAction; // +0x8
    id /* block */ _closeAction; // +0x10
    id /* block */ _clickTargetAction; // +0x18
    UIButton * _backgroundButton; // +0x20
    UILabel * _bannerTitleLabel; // +0x28
    UIButton * _moreButton; // +0x30
    FinderPostPlayBanner * _playBanner; // +0x38
    UIStackView * _playInfoStackView; // +0x40
    NSArray * _displayCoverId; // +0x48
    NSMutableDictionary * _displayItemDict; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithPlayBanner:(id)arg1;
- (id)createProfileItemViewWithPlayInfo:(id)arg1;
- (id /* block */)clickMoreAction;
- (void)setClickMoreAction:(id /* block */)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id /* block */)clickTargetAction;
- (void)setClickTargetAction:(id /* block */)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)bannerTitleLabel;
- (void)setBannerTitleLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)playBanner;
- (void)setPlayBanner:(id)arg1;
- (id)playInfoStackView;
- (void)setPlayInfoStackView:(id)arg1;
- (id)displayCoverId;
- (void)setDisplayCoverId:(id)arg1;
- (id)displayItemDict;
- (void)setDisplayItemDict:(id)arg1;
- (void).cxx_destruct;
@end
