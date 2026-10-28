@interface BrandEcsPrivateMsgCellView : BaseMessageCellView
{
    MMBrandHeadImageView * m_headerView; // +0x28
    UILabel * m_digestLabel; // +0x30
    UILabel * m_checkLabel; // +0x38
}
- (BOOL)canBeReused;
- (BOOL)canShowMoreMenuItem;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)layoutDigestLabel;
- (void)onAppear;
- (void)report32229:(BOOL)arg1;
- (void).cxx_destruct;
@end
