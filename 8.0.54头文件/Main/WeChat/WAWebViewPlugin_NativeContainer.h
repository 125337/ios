@interface WAWebViewPlugin_NativeContainer : WAWebViewPlugin_embedView
- (unsigned int)insertContainer:(CGRect)arg1 containerId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)setVisible:(BOOL)arg1 containerId:(unsigned int)arg2;
- (void)setContentOffset:(CGPoint)arg1 containerId:(unsigned int)arg2;
- (void)setFrame:(CGRect)arg1 containerId:(unsigned int)arg2;
@end

