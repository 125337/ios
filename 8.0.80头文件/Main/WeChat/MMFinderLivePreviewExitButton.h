@interface MMFinderLivePreviewExitButton : MMUIView <UIGestureRecognizerDelegate>
{
    id <MMFinderLivePreviewExitButtonDelegate> _delegate; // +0x8
    MMUIImageView * _imageView; // +0x10
    MMUIButton * _backgroundButton; // +0x18
    UITapGestureRecognizer * _gesture; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)requestTransfromLiveRoomState;
- (void)layoutSubviews;
- (id)imageView;
- (id)backgroundButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (void).cxx_destruct;
@end
