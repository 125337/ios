@interface MJPageViewTitleItem : MMUIView
{
    BOOL _selected; // +0x8
    long long _index; // +0x10
    MMUILabel * _label; // +0x18
    MMUIImageView * _imageView; // +0x20
    NSObject * _selectedObject; // +0x28
    NSObject * _unselectedObject; // +0x30
}
+ (id)itemWith:(id)arg1 fontSize:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 selected:(id)arg2 unselected:(id)arg3;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setObject:(id)arg1;
- (void)changeLabelHidden:(BOOL)arg1 imageViewHidden:(BOOL)arg2;
- (id)label;
- (id)imageView;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (BOOL)selected;
- (void)setLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)selectedObject;
- (void)setSelectedObject:(id)arg1;
- (id)unselectedObject;
- (void)setUnselectedObject:(id)arg1;
- (void).cxx_destruct;
@end

