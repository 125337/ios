@interface WAHeaderStackDisplayView : MMUIView
{
    double _coverGap; // +0x8
    double _headerSize; // +0x10
    UIImage * _defaultImage; // +0x18
    NSMutableArray * _headerViews; // +0x20
    NSMutableArray * _layers; // +0x28
}
- (id)init;
- (id)initWithHeaderSize:(double)arg1;
- (double)getWidth;
- (double)getHeight;
- (void)fillWithHeaderImageUrls:(id)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)fitHeaderViewCount:(unsigned long long)arg1;
- (void)resetHeaderViewsPosition;
- (void)orderHeaderViews;
- (double)coverGap;
- (void)setCoverGap:(double)arg1;
- (double)headerSize;
- (void)setHeaderSize:(double)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)headerViews;
- (void)setHeaderViews:(id)arg1;
- (id)layers;
- (void)setLayers:(id)arg1;
- (void).cxx_destruct;
@end
