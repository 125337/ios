@interface NSNotificationToken : NSObject
{
    id _object; // +0x8
    NSString * _name; // +0x10
    id _token; // +0x18
}
- (void)dealloc;
- (id)name;
- (void)setName:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (void).cxx_destruct;
@end
