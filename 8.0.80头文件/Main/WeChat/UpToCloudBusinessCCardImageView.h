@interface UpToCloudBusinessCCardImageView : MMUIImageView
{
    CardImgItemInfo * _businessCardItem; // +0x8
    MMUIButton * _showVerifyImgBtn; // +0x10
    CPushContact * _contact; // +0x18
}
- (id)businessCardItem;
- (void)setBusinessCardItem:(id)arg1;
- (id)showVerifyImgBtn;
- (void)setShowVerifyImgBtn:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
