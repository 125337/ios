@interface ZZCornerChainModel : NSObject
{
    UIView * _view; // +0x8
    ZZCornerModel * _cornerModel; // +0x10
}
- (id)initWithView:(id)arg1 andPosition:(long long)arg2;
- (id /* block */)radius;
- (id /* block */)color;
- (id /* block */)borderWidth;
- (id)view;
- (id)cornerModel;
- (void).cxx_destruct;
@end
