@interface MMMusicPostVideoTabBaseController : NSObject
{
    UIView * _contentView; // +0x8
    BOOL _isActive; // +0x10
    MMUIViewController * _viewController; // +0x18
}
- (id)initWithViewController:(id)arg1;
- (id)contentView;
- (id)arrPanGestures;
- (void)onSwitchToThisPage:(BOOL)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)layoutWithFrame:(CGRect)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)generatePreviewDataSource;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void).cxx_destruct;
@end

