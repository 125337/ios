@interface WCSVGParser : NSObject <WCSVGStyledPathFactoryDelegate, NSXMLParserDelegate>
{
    BOOL _isDefined; // +0x8
    WCSVGCanvas * _rootCanvas; // +0x10
    NSXMLParser * _xmlParser; // +0x18
    WCSVGStyledPathFactory * _pathFactory; // +0x20
    NSMutableArray * _currentCanvasStack; // +0x28
    NSMutableDictionary * _maskCanvases; // +0x30
    unsigned long long _groupLevel; // +0x38
    NSMutableDictionary * _groupTransforms; // +0x40
    NSMutableDictionary * _groupAppearances; // +0x48
    NSMutableDictionary * _gradients; // +0x50
    WCSVGGradient * _currentGradient; // +0x58
    CGRect _viewBox; // +0x60
}
- (id)initWithSVGDocument:(id)arg1;
- (id)initWithSVGData:(id)arg1;
- (BOOL)parseSVGDocument;
- (id)currentCanvas;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (id)gradientFromId:(id)arg1;
- (CGRect)viewBox;
- (void)setViewBox:(CGRect)arg1;
- (id)rootCanvas;
- (void)setRootCanvas:(id)arg1;
- (id)xmlParser;
- (void)setXmlParser:(id)arg1;
- (id)pathFactory;
- (void)setPathFactory:(id)arg1;
- (id)currentCanvasStack;
- (void)setCurrentCanvasStack:(id)arg1;
- (id)maskCanvases;
- (void)setMaskCanvases:(id)arg1;
- (unsigned long long)groupLevel;
- (void)setGroupLevel:(unsigned long long)arg1;
- (id)groupTransforms;
- (void)setGroupTransforms:(id)arg1;
- (id)groupAppearances;
- (void)setGroupAppearances:(id)arg1;
- (BOOL)isDefined;
- (void)setIsDefined:(BOOL)arg1;
- (id)gradients;
- (void)setGradients:(id)arg1;
- (id)currentGradient;
- (void)setCurrentGradient:(id)arg1;
- (void).cxx_destruct;
@end
