@interface MatrixBuilder : NSObject
{
    id <MatrixPluginListenerDelegate> _pluginListener; // +0x8
    NSMutableSet * _plugins; // +0x10
}
- (id)init;
- (void)addPlugin:(id)arg1;
- (id)getPlugins;
- (id)pluginListener;
- (void)setPluginListener:(id)arg1;
- (id)plugins;
- (void)setPlugins:(id)arg1;
- (void).cxx_destruct;
@end

