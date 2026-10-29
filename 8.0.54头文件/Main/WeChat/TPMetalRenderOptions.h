@interface TPMetalRenderOptions : NSObject
{
    BOOL _colorManagementFlag; // +0x8
    BOOL _renderOptYuv420; // +0x9
    BOOL _enableViewContentMode; // +0xa
    BOOL _atBottom; // +0xb
    int _rendererSharpenFlag; // +0xc
    int _rendererLucidFlag; // +0x10
    int _rendererClarityFlag; // +0x14
}
- (id)init;
- (BOOL)colorManagementFlag;
- (void)setColorManagementFlag:(BOOL)arg1;
- (int)rendererSharpenFlag;
- (void)setRendererSharpenFlag:(int)arg1;
- (int)rendererLucidFlag;
- (void)setRendererLucidFlag:(int)arg1;
- (int)rendererClarityFlag;
- (void)setRendererClarityFlag:(int)arg1;
- (BOOL)renderOptYuv420;
- (void)setRenderOptYuv420:(BOOL)arg1;
- (BOOL)enableViewContentMode;
- (void)setEnableViewContentMode:(BOOL)arg1;
- (BOOL)atBottom;
- (void)setAtBottom:(BOOL)arg1;
@end

