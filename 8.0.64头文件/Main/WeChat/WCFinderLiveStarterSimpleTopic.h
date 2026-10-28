@interface WCFinderLiveStarterSimpleTopic : MMUIView
{
    BOOL _isLandscape; // +0x8
    id /* block */ _beginEdit; // +0x10
    MMUIImageView * _leftImageView; // +0x18
    UIView * _separateLineUnderDesc; // +0x20
    MMGrowTextView * _growTextView; // +0x28
    NSString * _placeHolder; // +0x30
}
- (id)initWithPlaceHolder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)updateLandscape:(BOOL)arg1;
- (void)updateGrowTextViewFrameWhenEdit;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)beginEditClick;
- (void)updateGrowTextViewWithBulletinInfo:(id)arg1 isGameMode:(BOOL)arg2;
- (id)growTextView;
- (id)separateLineUnderDesc;
- (id)leftImageView;
- (id /* block */)beginEdit;
- (void)setBeginEdit:(id /* block */)arg1;
- (void)setLeftImageView:(id)arg1;
- (void)setSeparateLineUnderDesc:(id)arg1;
- (void)setGrowTextView:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (void).cxx_destruct;
@end
