@interface NewLifePrivateContentRouteParameter : NSObject
{
    BOOL _animated; // +0x8
    NSString * _message; // +0x10
    id /* block */ _didEnterCallback; // +0x18
}
- (id)description;
- (id)message;
- (void)setMessage:(id)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (id /* block */)didEnterCallback;
- (void)setDidEnterCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

