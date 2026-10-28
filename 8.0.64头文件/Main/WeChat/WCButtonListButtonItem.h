@interface WCButtonListButtonItem : WCButtonListItem
{
    NSString * _key; // +0x8
    MMUIButton * _button; // +0x10
    id /* block */ _handler; // +0x18
}
- (id)key;
- (void)setKey:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
