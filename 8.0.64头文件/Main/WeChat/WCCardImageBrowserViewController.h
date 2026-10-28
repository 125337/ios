@interface WCCardImageBrowserViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate>
{
    BOOL _needDeleteAction; // +0x70
    BOOL _needActionSheet; // +0x71
    id <WCCardImageBrowserDelegate> _delegate; // +0x78
    MMImageBrowseView * _imageView; // +0x80
    UIImage * _image; // +0x88
    SightIconView * _iconView; // +0x90
    UIImageView * _originView; // +0x98
    CGRect _originRect; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onSetStatusBarFontBlack;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (void)configImage:(id)arg1;
- (void)initView;
- (id)iconView;
- (void)adjustImageViewRect;
- (void)setByOriginRect:(CGRect)arg1 originImage:(id)arg2;
- (void)startPlayAnimation;
- (void)onOperate;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onSingleTapImageBrowseView;
- (void)singleOnIconView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)needDeleteAction;
- (void)setNeedDeleteAction:(BOOL)arg1;
- (BOOL)needActionSheet;
- (void)setNeedActionSheet:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)originRect;
- (void)setOriginRect:(CGRect)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setIconView:(id)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (void).cxx_destruct;
@end
