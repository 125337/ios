@interface MMFinderGameLiveWelfareTaskCollectionViewCell : UICollectionViewCell
{
    MMFinderGameLiveWelfareCollectionCellViewModel * _viewModel; // +0x8
    RichTextView * _richTextView; // +0x10
    MMFinderGameLiveWelfareTaskDegreeCompletionView * _degreeCompletionView; // +0x18
    MMWebImageView * _imageView; // +0x20
    UIImageView * _rightImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateViewModel:(id)arg1;
- (id)degreeCompletionView;
- (id)imageView;
- (id)richTextView;
- (id)rightImageView;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setDegreeCompletionView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setRightImageView:(id)arg1;
- (void).cxx_destruct;
@end

