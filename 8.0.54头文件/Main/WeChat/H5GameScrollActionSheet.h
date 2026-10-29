@interface H5GameScrollActionSheet : UIView <UIScrollViewDelegate>
{
    unsigned long long _columnOrRowCount; // +0x8
    NSArray * _dataAry; // +0x10
    UIView * _containerView; // +0x18
    UIButton * _transparentBgBtn; // +0x20
    long long _lastOrientation; // +0x28
    BOOL _isLandScape; // +0x30
    BOOL _bOrientationLocked; // +0x31
    id <H5GameScrollActionSheetDelegate> _delegate; // +0x38
}
- (id)initWithItems:(id)arg1 OrientatioinLocked:(BOOL)arg2;
- (void)dealloc;
- (BOOL)isSupportVisualEffect;
- (void)setupColorfulBar;
- (void)setupContainerView;
- (void)setupScrollViews;
- (void)setupScrollViewLanscape;
- (void)setupScrollViewPortrait;
- (id)getMenuButton:(id)arg1;
- (void)onMenuButtonClicked:(id)arg1;
- (void)setupTransparentView;
- (void)showInView:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)onEmptyPlaceTap:(id)arg1;
- (void)didRotate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

