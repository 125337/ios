@interface MatrixPlugin : NSObject <MatrixPluginProtocol>
{
    MatrixPluginConfig * pluginConfig; // +0x8
    id <MatrixPluginListenerDelegate> _pluginListener; // +0x10
}
+ (id)getTag;
- (void)setupPluginListener:(id)arg1;
- (BOOL)start;
- (void)stop;
- (void)destroy;
- (void)reportIssue:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(BOOL)arg2;
- (void)reportError:(id)arg1;
- (id)pluginConfig;
- (void)setPluginConfig:(id)arg1;
- (id)pluginListener;
- (void)setPluginListener:(id)arg1;
- (void).cxx_destruct;
@end

