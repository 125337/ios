@interface MMGroupedCellsView : UIView
{
    UIImage * _image; // +0x8
    long long _count; // +0x10
    double _scale; // +0x18
    UIView * _topCellView; // +0x20
}
- (id)initWithTopCellImage:(id)arg1 count:(long long)arg2 scale:(double)arg3;
- (void)initView;
- (void)addShadow:(id)arg1;
- (id)getTopCellView;
- (id)image;
- (void)setImage:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)topCellView;
- (void)setTopCellView:(id)arg1;
- (void).cxx_destruct;
@end

