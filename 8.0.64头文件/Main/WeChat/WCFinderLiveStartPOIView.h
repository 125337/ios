@interface WCFinderLiveStartPOIView : MMUIButton
{
    BOOL _hideLogo; // +0x8
    id <WCFinderLiveStartPOIViewDelegate> _delegate; // +0x10
    UIImageView * _poiImageView; // +0x18
    UILabel * _poiNameLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UILabel * _poiEduTipsLabel; // +0x30
    double _maxWidth; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)updatePOIViewWith:(id)arg1 showEduTipsLabel:(BOOL)arg2 hideLogo:(BOOL)arg3 maxWidth:(double)arg4;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void)heightToFit;
- (double)getPOILabelMaxWidth;
- (void)onClickPOIAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)poiImageView;
- (void)setPoiImageView:(id)arg1;
- (id)poiNameLabel;
- (void)setPoiNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)poiEduTipsLabel;
- (void)setPoiEduTipsLabel:(id)arg1;
- (BOOL)hideLogo;
- (void)setHideLogo:(BOOL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
