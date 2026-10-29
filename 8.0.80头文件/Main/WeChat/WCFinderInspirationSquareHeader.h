@interface WCFinderInspirationSquareHeader : UIView
{
    int _scene; // +0x8
    id <WCFinderInspirationSquareHeaderDelegate> _delegate; // +0x10
    UILabel * _headerTitle; // +0x18
    UILabel * _subTitle; // +0x20
    UIButton * _postBtn; // +0x28
    UIButton * _favBtn; // +0x30
    UIStackView * _buttonStackView; // +0x38
    WCFinderPostPlayInfo * _playInfo; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)bindReportData;
- (void)clickPostAction;
- (id)reportDict;
- (void)clickFavAction;
- (id)generateBottomButtonWithSvgImageName:(id)arg1 title:(id)arg2;
- (void)updateWithPlayInfo:(id)arg1 maxWidth:(double)arg2 commentScene:(int)arg3;
- (void)updateUI;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerTitle;
- (void)setHeaderTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)postBtn;
- (void)setPostBtn:(id)arg1;
- (id)favBtn;
- (void)setFavBtn:(id)arg1;
- (id)buttonStackView;
- (void)setButtonStackView:(id)arg1;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
