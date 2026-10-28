@interface MMWebCanvasPopupParamas : NSObject
{
    unsigned int _mode; // +0x8
    NSString * _canvasId; // +0x10
    NSString * _maskHexColor; // +0x18
    id /* block */ _closeBlock; // +0x20
    NSString * _bizType; // +0x28
    CGRect _canvasRect; // +0x30
}
- (id)description;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (CGRect)canvasRect;
- (void)setCanvasRect:(CGRect)arg1;
- (id)maskHexColor;
- (void)setMaskHexColor:(id)arg1;
- (unsigned int)mode;
- (void)setMode:(unsigned int)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (void).cxx_destruct;
@end
