@interface ClickableRange : NSObject
{
    _NSRange range; // +0x8
    id /* block */ onClick; // +0x18
}
- (id)initWithBlock:(id /* block */)arg1 andRange:(_NSRange)arg2;
- (void).cxx_destruct;
@end
