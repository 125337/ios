@interface MMFinderLiveAnchorCustomizeRewardImageOptionContentView : MMFinderLiveAnchorCustomizeRewardOptionContentViewBase
{
    id /* block */ _onImageClickedAtIndexBlock; // +0x8
    UIView * _imageContainerView; // +0x10
    UIView * _imageLabelContainerView; // +0x18
    UIView * _sepline; // +0x20
    MMFinderLiveAnchorCustomizeRewardOptionsHighlightView * _highlightView; // +0x28
    long long _seplineIndex; // +0x30
    long long _highlightIndex; // +0x38
    NSArray * _imageArray; // +0x40
    NSArray * _imageLabelArray; // +0x48
    NSArray * _imageViewArray; // +0x50
    NSArray * _imageLabelViewArray; // +0x58
}
+ (CGSize)imageCellSize;
+ (double)seplineWidth;
+ (double)seplineHeight;
- (id)init;
- (void)layoutSubviews;
- (void)setSeplineAfterIndex:(long long)arg1;
- (void)setHighlightImage:(id)arg1;
- (void)setHighlightViewAtIndex:(long long)arg1;
- (void)setHighlightViewHidden;
- (void)updateWithImageArray:(id)arg1 labelArray:(id)arg2;
- (id)createImageCellViewWithImage:(id)arg1;
- (id)createLabelViewWithText:(id)arg1;
- (double)calcImageLeftWithIndex:(long long)arg1;
- (void)onTapImageView:(id)arg1;
- (void)onSelectImageView:(id)arg1;
- (double)contentPerferHeight;
- (id /* block */)onImageClickedAtIndexBlock;
- (void)setOnImageClickedAtIndexBlock:(id /* block */)arg1;
- (id)imageContainerView;
- (void)setImageContainerView:(id)arg1;
- (id)imageLabelContainerView;
- (void)setImageLabelContainerView:(id)arg1;
- (id)sepline;
- (void)setSepline:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (long long)seplineIndex;
- (void)setSeplineIndex:(long long)arg1;
- (long long)highlightIndex;
- (void)setHighlightIndex:(long long)arg1;
- (id)imageArray;
- (void)setImageArray:(id)arg1;
- (id)imageLabelArray;
- (void)setImageLabelArray:(id)arg1;
- (id)imageViewArray;
- (void)setImageViewArray:(id)arg1;
- (id)imageLabelViewArray;
- (void)setImageLabelViewArray:(id)arg1;
- (void).cxx_destruct;
@end
