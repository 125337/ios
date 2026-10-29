@interface EmoticonStoreMoreManualFetchFooterView : UICollectionReusableView
{
    BOOL _isLoading; // +0x8
    id <EmoticonStoreMoreManualFetchFooterViewDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    UILabel * _hintLabel; // +0x20
    MMUIActivityIndicatorView * _indicator; // +0x28
    UITapGestureRecognizer * _recognizer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setupGesture;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onTap;
- (void)forceTriggerTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (id)recognizer;
- (void)setRecognizer:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

