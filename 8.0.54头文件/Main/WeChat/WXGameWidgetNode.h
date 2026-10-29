@interface WXGameWidgetNode : NSObject
{
    unsigned long long _dynamicSizeStyle; // +0x8
    NSString * _viewClassName; // +0x10
    NSString * _nodeId; // +0x18
    NSString * _onClick; // +0x20
    NSArray * _layouts; // +0x28
    NSArray * _viewAttrs; // +0x30
    NSArray * _childNodes; // +0x38
}
+ (id)loadNodeWithXMLFile:(id)arg1;
+ (id)buildNodeWithXmlElement:(XmlReaderNode_t *)arg1;
- (id)buildViewTreeWithBaseView:(id)arg1;
- (unsigned long long)dynamicSizeStyle;
- (void)setDynamicSizeStyle:(unsigned long long)arg1;
- (id)viewClassName;
- (void)setViewClassName:(id)arg1;
- (id)nodeId;
- (void)setNodeId:(id)arg1;
- (id)onClick;
- (void)setOnClick:(id)arg1;
- (id)layouts;
- (void)setLayouts:(id)arg1;
- (id)viewAttrs;
- (void)setViewAttrs:(id)arg1;
- (id)childNodes;
- (void)setChildNodes:(id)arg1;
- (void).cxx_destruct;
@end

