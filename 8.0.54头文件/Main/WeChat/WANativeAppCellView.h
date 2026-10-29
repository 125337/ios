@interface WANativeAppCellView : WAAppMessageBaseCellView <IMsgExt>
{
    RichTextView * m_titleLabel; // +0xa8
    RichTextView * m_detailLabel; // +0xb0
    UIImageView * m_thumbImageView; // +0xb8
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (void)addThumbImageView;
- (id)defaultThumbImage;
- (void)onTouchUpInside;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void).cxx_destruct;
@end

