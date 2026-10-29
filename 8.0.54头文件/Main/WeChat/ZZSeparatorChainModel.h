@interface ZZSeparatorChainModel : NSObject
{
    UIView * _view; // +0x8
    ZZSeparatorModel * _separatorModel; // +0x10
}
- (id)initWithView:(id)arg1 andPosition:(long long)arg2;
- (id /* block */)offset;
- (id /* block */)color;
- (id /* block */)beginAt;
- (id /* block */)length;
- (id /* block */)endAt;
- (id /* block */)borderWidth;
- (id)view;
- (id)separatorModel;
- (void).cxx_destruct;
@end

