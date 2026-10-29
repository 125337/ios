@interface EmoticonBoardRecommendView : UIView <MMEmoticonStoreDownloadLogicDelegate>
{
    UIView * m_contentView; // +0x8
    MMWebImageView * m_imageView; // +0x10
    UILabel * m_titleLabel; // +0x18
    UILabel * m_recWordLabel; // +0x20
    UIButton * m_showDetailButton; // +0x28
    EmoticonTabRecommendItem * m_item; // +0x30
    UIButton * m_closeButton; // +0x38
    id <EmoticonBoardRecommendViewDelegate> _delegate; // +0x40
    MMEmoticonStoreDownloadLogic * _downloadLogic; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateContentView;
- (void)updateImageView;
- (void)updateTitleLabel;
- (void)updateRecWordLabel;
- (void)updateDownloadView;
- (void)updateShowDetailButton;
- (void)updateCloseButton;
- (void)onClickCloseButton;
- (void)updateItem:(id)arg1;
- (void)onViewTap;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end

