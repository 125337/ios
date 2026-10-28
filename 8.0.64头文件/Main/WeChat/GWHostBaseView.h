@interface GWHostBaseView : UIView
{
    BOOL _isChildDirty; // +0x8
    NSString * _xmlFileName; // +0x10
    WXGameWidgetNode * _rootNode; // +0x18
    NSMutableSet * _observedViews; // +0x20
    CGRect _lastCaculateFrame; // +0x28
    CGRect _curConfigFrame; // +0x48
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (BOOL)loadWithXmlFile:(id)arg1;
- (unsigned long long)dynamicSizeStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureLayout:(CGRect)arg1;
- (BOOL)isNewFrameSame;
- (void)layoutSubviews;
- (CGSize)calculateSizeWithLimit:(CGSize)arg1;
- (void)observeSubview:(id)arg1;
- (void)removeObservedView:(id)arg1;
- (void)markChildDirty:(id)arg1;
- (void)dealloc;
- (id)xmlFileName;
- (void)setXmlFileName:(id)arg1;
- (id)rootNode;
- (void)setRootNode:(id)arg1;
- (CGRect)lastCaculateFrame;
- (void)setLastCaculateFrame:(CGRect)arg1;
- (CGRect)curConfigFrame;
- (void)setCurConfigFrame:(CGRect)arg1;
- (BOOL)isChildDirty;
- (void)setIsChildDirty:(BOOL)arg1;
- (id)observedViews;
- (void)setObservedViews:(id)arg1;
- (void).cxx_destruct;
@end
