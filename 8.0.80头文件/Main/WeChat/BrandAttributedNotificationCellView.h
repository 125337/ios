@interface BrandAttributedNotificationCellView : BrandNotificationCellView
{
    NSMutableArray * m_attributedMsgLabelArr; // +0x40
}
- (void)initMessageLabel;
- (void)resetMessageLabel;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void).cxx_destruct;
@end
