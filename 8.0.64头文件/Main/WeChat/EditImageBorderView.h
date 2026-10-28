@interface EditImageBorderView : MMUIView
{
    double _viewScale; // +0x8
    unsigned long long _editImageUIStyle; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 withScale:(double)arg2;
- (void)drawRect:(CGRect)arg1;
- (void)resizeFrame:(CGRect)arg1 withScale:(double)arg2;
- (double)_viewScale;
- (void)set_viewScale:(double)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
@end
