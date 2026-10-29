@interface MMFinderLiveAnchorCustomizeRewardStylePreviewView : UIView
{
    PAGFile * _previewPagFile; // +0x8
    PAGView * _previewPagView; // +0x10
}
- (id)init;
- (void)layoutSubviews;
- (void)updateCurrentPAGComposition:(id)arg1;
- (void)addAlphaMask:(id)arg1;
- (id)previewPagFile;
- (void)setPreviewPagFile:(id)arg1;
- (id)previewPagView;
- (void)setPreviewPagView:(id)arg1;
- (void).cxx_destruct;
@end

