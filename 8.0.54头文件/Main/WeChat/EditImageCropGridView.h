@interface EditImageCropGridView : MMUIView
{
    BOOL _enableShowGridCorners; // +0x8
    NSArray * _blLineView; // +0x10
    NSArray * _brLineView; // +0x18
    NSArray * _tlLineView; // +0x20
    NSArray * _trLineView; // +0x28
    NSArray * _borderGridLines; // +0x30
    NSArray * _horizontalGridLines; // +0x38
    NSArray * _verticalGridLines; // +0x40
}
- (id)initWithCorners:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)didMoveToSuperview;
- (void)setFrame:(CGRect)arg1;
- (void)setCenterGridHidden:(BOOL)arg1;
- (void)layoutLines;
- (id)createLineView;
- (id)_blLineView;
- (void)set_blLineView:(id)arg1;
- (id)_brLineView;
- (void)set_brLineView:(id)arg1;
- (id)_tlLineView;
- (void)set_tlLineView:(id)arg1;
- (id)_trLineView;
- (void)set_trLineView:(id)arg1;
- (id)_borderGridLines;
- (void)set_borderGridLines:(id)arg1;
- (id)horizontalGridLines;
- (void)setHorizontalGridLines:(id)arg1;
- (id)verticalGridLines;
- (void)setVerticalGridLines:(id)arg1;
- (BOOL)enableShowGridCorners;
- (void)setEnableShowGridCorners:(BOOL)arg1;
- (void).cxx_destruct;
@end

