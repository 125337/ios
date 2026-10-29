@interface MMSnackBarView : UIView
{
    MMSnackBarConfig * _config; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _actionLabel; // +0x18
    UIImageView * _actionImageView; // +0x20
    UIImageView * _titleImageView; // +0x28
    MMUIActivityIndicatorView * _indicator; // +0x30
    UIView * _actionView; // +0x38
    id <MMSnackBarViewDelegate> _delegate; // +0x40
    UIViewController * _currentVC; // +0x48
}
- (id)init;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (void)initView;
- (id)multiLineStatics:(BOOL)arg1;
- (void)applyLayout;
- (CGSize)calSize;
- (void)setFrame:(CGRect)arg1;
- (void)createOrUpdateLayout;
- (void)addNotification;
- (void)removeNotification;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onOperation;
- (id)config;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (id)actionImageView;
- (void)setActionImageView:(id)arg1;
- (id)titleImageView;
- (void)setTitleImageView:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (id)actionView;
- (void)setActionView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (void).cxx_destruct;
@end

