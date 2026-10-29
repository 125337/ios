@interface MMImageActionSheetItem : MMScrollActionSheetItem
{
    BOOL _isHidden; // +0x8
    BOOL _isClickable; // +0x9
    unsigned long long _type; // +0x10
    NSString * _imagePath; // +0x18
    UIImage * _image; // +0x20
    MMUIViewController * _curViewController; // +0x28
    MMImageActionSheet * _imageActionSheet; // +0x30
}
- (id)init;
- (void)setIsClickable:(BOOL)arg1;
- (void)handleWithImage;
- (void)onImageActionSheetDidAppear;
- (void)onImageActionSheetDidChangeImage;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)isHidden;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)isClickable;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
