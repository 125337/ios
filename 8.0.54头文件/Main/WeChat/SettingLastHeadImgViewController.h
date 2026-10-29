@interface SettingLastHeadImgViewController : MMUIViewController <ImageScrollViewDelegate>
{
    id <SettingLastHeadImgViewControllerDelegate> _delegate; // +0x68
    UIImage * _originalImage; // +0x70
    ImageScrollView * _scrollView; // +0x78
}
- (id)initWithImage:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initScrollViewAndImageView;
- (void)initButton;
- (void)viewDidLayoutSubviews;
- (void)use;
- (void)cancel;
- (void)operate;
- (void)onPhotoSave;
- (void)didReceiveMemoryWarning;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end

