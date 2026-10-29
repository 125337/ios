@interface WCFinderNoMoreView : UIView
{
    UIView * _leftLineView; // +0x8
    UIView * _logoView; // +0x10
    UIView * _rightLineView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)useLogoIconName:(id)arg1 size:(CGSize)arg2;
- (void)useLogoIconNameOnly:(id)arg1 size:(CGSize)arg2;
- (void)installLogoView:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setTips:(id)arg1;
- (id)leftLineView;
- (id)createPointLogoView;
- (id)rightLineView;
- (id)tipsLabel;
- (id)lineBackgroundColor;
- (void)setDarkMode:(BOOL)arg1;
- (void)setLeftLineView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (void)setRightLineView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

