@interface MJRulerView : UIView
{
    vector<std::tuple<CGPoint, double>, std::allocator<std::tuple<CGPoint, double>>> _dotMarks; // +0x8
    vector<std::tuple<double, std::string, std::string>, std::allocator<std::tuple<double, std::string, std::string>>> _textMarks; // +0x20
    list<std::string, std::allocator<std::string>> _lruList; // +0x38
    map<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>>> _cache; // +0x50
    NSDictionary * _markStyles; // +0x68
}
+ (Class)layerClass;
- (id)initWithMarkStyles:(id)arg1;
- (id)shapeLayer;
- (void)drawMarks:(const void *)arg1;
- (void)hideAllTextLayers;
- (void)drawDots:(const void *)arg1 onPath:(id)arg2;
- (void)drawTexts:(const void *)arg1 withStyle:(id)arg2;
- (id)textLayerForMark:(const void *)arg1 withStyle:(id)arg2;
- (id)markStyles;
- (void)setMarkStyles:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
