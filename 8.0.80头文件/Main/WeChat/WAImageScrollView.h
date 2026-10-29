@interface WAImageScrollView : UIView
{
    unsigned int _pageIndex; // +0x8
    id <WAImageScrollViewDelegate> _delegate; // +0x10
    ImageBrowseButton * _hdImgBtn; // +0x18
    ImageBrowseButton * _hdImgStatusButton; // +0x20
    ImageScrollView * _imageScrollView; // +0x28
    ImageBrowseButton * _shareBtn; // +0x30
    ImageBrowseButton * _downloadBtn; // +0x38
    ImageBrowseButton * _moreBtn; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)initSubviews;
- (id)getImageScrollView;
- (void)setImageScrollViewDelegate:(id)arg1;
- (BOOL)canShowHDImgButton;
- (BOOL)canShowHDImgStatusButton;
- (id)imageScrollView;
- (void)onViewHDImage:(id)arg1;
- (id)hdImgBtn;
- (id)hdImgStatusButton;
- (BOOL)canShowBottomActionBar;
- (void)updateBottomActionBar;
- (id)shareBtn;
- (id)downloadBtn;
- (id)moreBtn;
- (void)onShareBtnClick:(id)arg1;
- (void)onDownloadBtnClick:(id)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)pageIndex;
- (void)setPageIndex:(unsigned int)arg1;
- (void)setHdImgBtn:(id)arg1;
- (void)setHdImgStatusButton:(id)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setShareBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (void).cxx_destruct;
@end
