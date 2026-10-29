@interface WCHorizontalEdge : NSObject
{
    UIView * _view; // +0x8
    int _type; // +0x10
    double _offset; // +0x18
}
- (id)initWithView:(id)arg1 type:(int)arg2;
- (id /* block */)offsetBy;
- (id)view;
- (double)x;
- (void).cxx_destruct;
@end

