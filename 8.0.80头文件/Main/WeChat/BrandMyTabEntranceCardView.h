@interface BrandMyTabEntranceCardView : UIView
{
    id <BrandMyTabEntranceCardDelegate> _delegate; // +0x8
    BrandMyTabEntranceCardHeader * _headerView; // +0x10
    BrandMyTabEntranceCardNotify * _notifyView; // +0x18
    UIView * _horizontalSeparator; // +0x20
    BrandMyTabEntranceCardButtons * _buttonsView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)headerPressed;
- (void)notifyPressed;
- (void)editPicturePressed;
- (void)editTextPressed;
- (void)setUpLayout;
- (void)setUpViews;
- (void)layoutSubviews;
- (void)updateContentWithCardInfo:(id)arg1 reportInfo:(id)arg2;
- (id)headerView;
- (id)notifyView;
- (id)horizontalSeparator;
- (id)buttonsView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setNotifyView:(id)arg1;
- (void)setHorizontalSeparator:(id)arg1;
- (void)setButtonsView:(id)arg1;
- (void).cxx_destruct;
@end
