@interface EditImageUIView : MMUIView
{
    UIImageView * _imageView; // +0x8
    int _toolType; // +0x10
    unsigned int _fromEntrance; // +0x14
    unsigned long long _editImageUIStyle; // +0x18
    EditImageModView * _modView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 withToolType:(int)arg2;
- (void)renderImageWithBlankView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (int)_toolType;
- (void)set_toolType:(int)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (unsigned int)fromEntrance;
- (void)setFromEntrance:(unsigned int)arg1;
- (id)modView;
- (void)setModView:(id)arg1;
- (void).cxx_destruct;
@end
