@interface WCPayTransferMessageCellView : WCPayBaseMessageCellView
{
    NSString * _bgImageName; // +0xc8
    NSString * _bgHighlightImageName; // +0xd0
    NSString * _maskImageName; // +0xd8
    NSString * _maskHighlightImageName; // +0xe0
    UIImageView * _addressIconImgView; // +0xe8
}
- (void)layoutContentView;
- (void)initTitleLabel;
- (void)updateStatus;
- (void)layoutGroupTransferContentView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateAddressIconImgView;
- (void)updateBgImageView;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (void)initSourceViewInside;
- (id)bgImageName;
- (void)setBgImageName:(id)arg1;
- (id)bgHighlightImageName;
- (void)setBgHighlightImageName:(id)arg1;
- (id)maskImageName;
- (void)setMaskImageName:(id)arg1;
- (id)maskHighlightImageName;
- (void)setMaskHighlightImageName:(id)arg1;
- (id)addressIconImgView;
- (void)setAddressIconImgView:(id)arg1;
- (void).cxx_destruct;
@end
