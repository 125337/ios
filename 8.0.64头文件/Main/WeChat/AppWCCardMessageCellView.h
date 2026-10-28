@interface AppWCCardMessageCellView : CommonMessageCellView
{
    MMProgressView * m_progressView; // +0xb0
    UIView * m_progressBkgView; // +0xb8
    UILabel * m_titleLabel; // +0xc0
    UILabel * m_descLabel; // +0xc8
    UIImageView * m_thumbImageView; // +0xd0
}
- (void)layoutContentView;
- (void)initThumbImageView;
- (void)updateStatus;
- (void)updateThumbImage;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end
