@interface AppWCCardMessageCellView : CommonMessageCellView
{
    MMProgressView * m_progressView; // +0xb8
    UIView * m_progressBkgView; // +0xc0
    UILabel * m_titleLabel; // +0xc8
    UILabel * m_descLabel; // +0xd0
    UIImageView * m_thumbImageView; // +0xd8
}
- (void)layoutContentView;
- (void)initThumbImageView;
- (void)updateStatus;
- (void)initSourceViewInside;
- (void)updateThumbImage;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end
