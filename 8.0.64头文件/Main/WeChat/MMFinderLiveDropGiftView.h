@interface MMFinderLiveDropGiftView : UIView <PAGViewListener, MMFinderLiveDropGiftViewModelDelegate>
{
    BOOL _repeated; // +0x8
    id <MMFinderLiveDropGiftViewDelegate> _delegate; // +0x10
    PAGView * _pagView; // +0x18
    PAGFile * _pagFile; // +0x20
    UIImageView * _imageView; // +0x28
    UIView * _containerView; // +0x30
    UILabel * _tipsLabel; // +0x38
    MMFinderLiveDropGiftViewModel * _viewModel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateViewModel:(id)arg1;
- (void)play;
- (void)stop;
- (void)onClickView:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onDropGiftViewDisplayStatusChange:(id)arg1 needShow:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRepeated;
- (void)setRepeated:(BOOL)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)pagFile;
- (void)setPagFile:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
