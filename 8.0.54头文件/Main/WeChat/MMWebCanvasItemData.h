@interface MMWebCanvasItemData : MMObject
{
    NSString * _canvasId; // +0x8
    NSString * _bizType; // +0x10
    NSString * _jsonData; // +0x18
    NSString * _accessibilityLabel; // +0x20
    NSString * _bizDomain; // +0x28
}
- (id)description;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (id)jsonData;
- (void)setJsonData:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)bizDomain;
- (void)setBizDomain:(id)arg1;
- (void).cxx_destruct;
@end

