@interface MMBasePeekImageViewController : UIViewController <WCForceTouchPopProtocol>
{
    UIImage * _image; // +0x8
    id _delegate; // +0x10
    UIImageView * _imageView; // +0x18
}
- (id)initWithImage:(id)arg1 delegate:(id)arg2;
- (void)reloadImage:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (BOOL)canPop;
- (void)commitViewController;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end

