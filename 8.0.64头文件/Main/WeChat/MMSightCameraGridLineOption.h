@interface MMSightCameraGridLineOption : NSObject <MMSightCameraOptionProtocol>
{
    UIView * _gridMaskView; // +0x8
    id <MMSightCameraGridLineOptionDelegate> _delegate; // +0x10
    WCElasticLayoutView * _elasticLayoutView; // +0x18
    MMUIButton * _btnGridLineIcon; // +0x20
    CGRect _containerFrame; // +0x28
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)_onClickIconView;
- (void)_changeGridLineToSelected:(BOOL)arg1;
- (void)_initViews;
- (void)_initGridLineMaskView;
- (id)gridMaskView;
- (void)setGridMaskView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)btnGridLineIcon;
- (void)setBtnGridLineIcon:(id)arg1;
- (void).cxx_destruct;
@end
