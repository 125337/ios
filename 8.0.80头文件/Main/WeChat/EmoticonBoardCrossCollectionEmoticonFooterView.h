@interface EmoticonBoardCrossCollectionEmoticonFooterView : UICollectionReusableView
{
    id <EmoticonBoardCrossCollectionEmoticonFooterViewDelegate> _delegate; // +0x8
    EmoticonBoardCrossCollectionEmoticonFooterModel * _viewModel; // +0x10
    id /* block */ _onTapReload; // +0x18
    UILabel * _errorTipLabel; // +0x20
    UIImageView * _errorImageView; // +0x28
    MMUIActivityIndicatorView * _activityIndicator; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)addTapGesture;
- (void)handleTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id /* block */)onTapReload;
- (void)setOnTapReload:(id /* block */)arg1;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg1;
- (id)errorImageView;
- (void)setErrorImageView:(id)arg1;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (void).cxx_destruct;
@end
