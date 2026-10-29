@interface ProductMediaItemView : MMUIView
{
    id <ProductMediaItemViewDelegate> _delegate; // +0x8
    ActionBase * _actionBase; // +0x10
    MMWebImageView * _imageView; // +0x18
    UIButton * _playBtn; // +0x20
    unsigned long long _actionListCount; // +0x28
}
- (id)initWithDelegate:(id)arg1 actionBase:(id)arg2 actionListCount:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)onMediaPlayBtnClicked;
- (void).cxx_destruct;
@end

