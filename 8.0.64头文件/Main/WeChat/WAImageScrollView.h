@interface WAImageScrollView : UIView
{
    unsigned int _pageIndex; // +0x8
    id <WAImageScrollViewDelegate> _delegate; // +0x10
    ImageBrowseButton * _hdImgBtn; // +0x18
    ImageBrowseButton * _hdImgStatusButton; // +0x20
    ImageScrollView * _imageScrollView; // +0x28
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
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)pageIndex;
- (void)setPageIndex:(unsigned int)arg1;
- (void)setHdImgBtn:(id)arg1;
- (void)setHdImgStatusButton:(id)arg1;
- (void)setImageScrollView:(id)arg1;
- (void).cxx_destruct;
@end
