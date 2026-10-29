@interface MMFinderLiveShopShelfHeaderSubInfosViewTuple : NSObject
{
    BOOL _noLines; // +0x8
    BOOL _fitImageInSquare; // +0x9
    double _maxImageSide; // +0x10
    UIView * _infoView; // +0x18
    UIView * _rightLineView; // +0x20
}
- (BOOL)noLines;
- (void)setNoLines:(BOOL)arg1;
- (BOOL)fitImageInSquare;
- (void)setFitImageInSquare:(BOOL)arg1;
- (double)maxImageSide;
- (void)setMaxImageSide:(double)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (id)rightLineView;
- (void)setRightLineView:(id)arg1;
- (void).cxx_destruct;
@end
