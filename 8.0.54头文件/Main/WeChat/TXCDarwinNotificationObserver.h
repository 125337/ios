@interface TXCDarwinNotificationObserver : NSObject
{
    NSString * _name; // +0x8
    id /* block */ _callback; // +0x10
}
- (id)name;
- (void)setName:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

