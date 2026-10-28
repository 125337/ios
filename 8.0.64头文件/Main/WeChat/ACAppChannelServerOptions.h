@interface ACAppChannelServerOptions : NSObject
{
    BOOL _keepsAppAlive; // +0x8
    ACWebServerOptions * _webServerOptions; // +0x10
    ACSocketServerOptions * _socketServerOptions; // +0x18
}
- (id)webServerOptions;
- (void)setWebServerOptions:(id)arg1;
- (id)socketServerOptions;
- (void)setSocketServerOptions:(id)arg1;
- (BOOL)keepsAppAlive;
- (void)setKeepsAppAlive:(BOOL)arg1;
- (void).cxx_destruct;
@end
