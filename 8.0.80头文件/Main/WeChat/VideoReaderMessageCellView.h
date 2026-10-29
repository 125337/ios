@interface VideoReaderMessageCellView : ReaderMessageCellView <MMWebImageViewDelegate>
{
    UIView * m_playIconTimeContainerView; // +0x48
    SightIconView * m_playIconView; // +0x50
    UILabel * m_timeLabel; // +0x58
    CAGradientLayer * m_titleShadowLayer; // +0x60
    BOOL m_bIsCoverImgViewFinishLoad; // +0x68
}
- (void)layoutContentView;
- (void)setupContentView;
- (void)setupCoverImageView;
- (void)setupTitleView;
- (void)setupPlayIconTimeContainerView;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (id)getLabelTextColor;
- (void)onLoadImageOK:(id)arg1;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void).cxx_destruct;
@end
