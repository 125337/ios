@interface MMLiveScreenMapSelectButton : MMUIButton
{
    BOOL _hideLogo; // +0x8
    id /* block */ _screenMapSelectBlock; // +0x10
    UIImageView * _poiImageView; // +0x18
    UILabel * _poiNameLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    double _maxWidth; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)hideLogo:(BOOL)arg1 maxWidth:(double)arg2;
- (void)setUpUI;
- (void)updateWithGameUserInfo:(id)arg1;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void)heightToFit;
- (double)getPOILabelMaxWidth;
- (void)onClickPOIAction;
- (id /* block */)screenMapSelectBlock;
- (void)setScreenMapSelectBlock:(id /* block */)arg1;
- (id)poiImageView;
- (void)setPoiImageView:(id)arg1;
- (id)poiNameLabel;
- (void)setPoiNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (BOOL)hideLogo;
- (void)setHideLogo:(BOOL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

