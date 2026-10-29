@interface WCCardChooseItemView : MMUIView
{
    WCCardChooseInfo * _chooseInfo; // +0x8
    BOOL _select; // +0x10
    UIImageView * _checkBoxImgView; // +0x18
    id <WCCardChooseItemViewDelegate> _delegate; // +0x20
}
+ (double)heightForChooseItemView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 cardChooseInfo:(id)arg2 delegate:(id)arg3;
- (void)initView;
- (id)genCardBgView;
- (id)genLogoView;
- (void)onClickCell;
- (void)updateCellSelectStatus:(BOOL)arg1;
- (void)genInvoiceView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
