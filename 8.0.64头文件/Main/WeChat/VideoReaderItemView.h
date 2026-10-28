@interface VideoReaderItemView : ReaderItemView <MMWebImageViewDelegate>
{
    UIView * m_playIconTimeContainerView; // +0xa8
    SightIconView * m_playIconView; // +0xb0
    MMUILabel * m_timeLabel; // +0xb8
    CAGradientLayer * m_titleShadowLayer; // +0xc0
    BOOL m_bIsCoverImgViewFinishLoad; // +0xc8
    unsigned int _playLength; // +0xcc
}
- (void)topView;
- (void)normalView;
- (void)initCoverImageView;
- (void)setupTitleView;
- (void)setupPlayIconTimeContainerView;
- (void)setupPlayIconView:(BOOL)arg1;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (id)getLabelTextColor;
- (void)onLoadImageOK:(id)arg1;
- (id)accessibilityLabel;
- (unsigned int)playLength;
- (void)setPlayLength:(unsigned int)arg1;
- (void).cxx_destruct;
@end
