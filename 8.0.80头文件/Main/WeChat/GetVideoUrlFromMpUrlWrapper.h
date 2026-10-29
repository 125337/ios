@interface GetVideoUrlFromMpUrlWrapper : MMObject
{
    NSString * _mpUrl; // +0x8
    id /* block */ _handler; // +0x10
}
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
