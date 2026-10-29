@interface WXMASViewAttribute : NSObject
{
    UIView * _view; // +0x8
    id _item; // +0x10
    long long _layoutAttribute; // +0x18
}
- (id)initWithView:(id)arg1 layoutAttribute:(long long)arg2;
- (id)initWithView:(id)arg1 item:(id)arg2 layoutAttribute:(long long)arg3;
- (BOOL)isSizeAttribute;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)view;
- (id)item;
- (long long)layoutAttribute;
- (void).cxx_destruct;
@end

