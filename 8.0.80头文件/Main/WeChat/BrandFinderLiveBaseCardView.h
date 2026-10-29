@interface BrandFinderLiveBaseCardView : MMUIView
{
    id <BrandFinderLiveBaseCardViewDelegate> _delegate; // +0x8
    NSMutableDictionary * _extraData; // +0x10
    BrandFinderLiveCardViewModel * _viewModel; // +0x18
    MMUILabel * _recommendReasonLabel; // +0x20
    RichTextView * _titleTextView; // +0x28
    UIView * _highlightMaskView; // +0x30
    WCFinderLiveNowView * _liveNowView; // +0x38
    WCFinderLiveNowView * _liveOverView; // +0x40
}
- (void)setDelegate:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)updateLiveStatus:(BOOL)arg1 statusWording:(id)arg2;
- (void)internalUpdateLiveStatus:(BOOL)arg1 statusWording:(id)arg2;
- (void)updateRecommendReason:(id)arg1;
- (void)internalUpdateRecommendReason:(id)arg1;
- (void)setHighlightViewHidden:(BOOL)arg1;
- (id)titleTextView;
- (id)recommendReasonLabel;
- (id)liveNowView;
- (id)liveOverView;
- (id)highlightMaskView;
- (void)onLiveCardViewClick:(id)arg1;
- (void)onLiveCardViewLongClick:(id)arg1;
- (id)accessibilityLabel;
- (id)extraData;
- (id)delegate;
- (void)setExtraData:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setRecommendReasonLabel:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (void)setHighlightMaskView:(id)arg1;
- (void)setLiveNowView:(id)arg1;
- (void)setLiveOverView:(id)arg1;
- (void).cxx_destruct;
@end
