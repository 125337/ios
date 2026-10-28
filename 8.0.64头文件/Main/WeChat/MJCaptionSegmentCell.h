@interface MJCaptionSegmentCell : MJAudioSegmentCell
{
    MJSegmentViewModel * _segmentVM; // +0x8
    MJCaptionLabel * _captionLabel; // +0x10
    CGRect _currentBounds; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)captionSegment;
- (id)captionLabelWithText:(id)arg1 subText:(id)arg2;
- (void)setupCaptionLabels;
- (void)showCaptionLabelsAnimated:(BOOL)arg1;
- (void)hideCaptionLabelsAnimated:(BOOL)arg1;
- (void)layoutCaptionLabel:(id)arg1 withTimeRange:(struct)arg2;
- (void)layoutCaptionLabels;
- (void)prepareForReuse;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)syncWithMutation;
- (BOOL)checkViewModel;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (id)captionLabel;
- (void)setCaptionLabel:(id)arg1;
- (CGRect)currentBounds;
- (void)setCurrentBounds:(CGRect)arg1;
- (void).cxx_destruct;
@end
