@interface MMArrayConverter : NSObject
{
    NSArray * _value; // +0x8
    id /* block */ _creator; // +0x10
    id /* block */ _remover; // +0x18
}
- (id)initWithCreator:(id /* block */)arg1 remover:(id /* block */)arg2;
- (id)value;
- (id)updateWithData:(id)arg1 updater:(id /* block */)arg2;
- (void)setValue:(id)arg1;
- (id /* block */)creator;
- (void)setCreator:(id /* block */)arg1;
- (id /* block */)remover;
- (void)setRemover:(id /* block */)arg1;
- (void).cxx_destruct;
@end
