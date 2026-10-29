@interface WANativeAppCellView : WAAppMessageBaseCellView <IMsgExt>
{
    RichTextView * m_titleLabel; // +0xb8
    RichTextView * m_detailLabel; // +0xc0
    UIImageView * m_thumbImageView; // +0xc8
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (void)addThumbImageView;
- (id)createThumbImageView;
- (id)createLocalThumbImageViewForMessageWrap:(id)arg1;
- (id)createNetworkThumbImageView;
- (id)defaultThumbImage;
- (double)thumbCornerRadius;
- (void)onTouchUpInside;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onAppear;
- (void).cxx_destruct;
@end
