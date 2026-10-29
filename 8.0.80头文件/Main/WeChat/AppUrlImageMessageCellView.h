@interface AppUrlImageMessageCellView : AppUrlMessageCellViewBase
{
    UIImageView * _mediaImageView; // +0xb8
    UIView * _titlePanel; // +0xc0
    UIView * _m_maskView; // +0xc8
}
- (id)imageViewInSize:(CGSize)arg1;
- (void)layoutContentView;
- (void)initSubviews;
- (void)updateLayout;
- (BOOL)shouldReportWithProbability;
- (void)initMediaImageView;
- (void)layoutMediaImageView;
- (id)buildGradientView;
- (id)buildExtInfoView;
- (id)buildExtInfoTextLabel:(id)arg1 fontName:(id)arg2;
- (id)buildCentralPlayBtn;
- (void)initTextPanel;
- (void)setHighlighted:(BOOL)arg1;
- (void)initSourceViewInside;
- (id)imageWithHorizontalPadding:(double)arg1 verticalPadding:(double)arg2 image:(id)arg3;
- (id)defaultMediaImage;
- (id)mediaImageView;
- (void)setMediaImageView:(id)arg1;
- (id)titlePanel;
- (void)setTitlePanel:(id)arg1;
- (id)m_maskView;
- (void)setM_maskView:(id)arg1;
- (void).cxx_destruct;
@end
