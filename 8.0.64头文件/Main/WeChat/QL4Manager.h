@interface QL4Manager : NSObject
{
    QL4Config * _config; // +0x8
    QMediator * _mediator; // +0x10
}
- (void)updateConfig:(id)arg1 writeToCache:(BOOL)arg2;
- (void)enableConfig;
- (id)l4ConfigPath;
- (id)loadConfigFromLocalCache;
- (void)writeConfigToLocalCache:(id)arg1;
- (id)initWithMediator:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (void).cxx_destruct;
@end
