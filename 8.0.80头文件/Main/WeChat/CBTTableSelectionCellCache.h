@interface CBTTableSelectionCellCache : NSObject
{
    NSTextStorage * _textStorage; // +0x8
    NSLayoutManager * _layoutManager; // +0x10
    NSTextContainer * _textContainer; // +0x18
    unsigned long long _contentHash; // +0x20
    double _containerWidth; // +0x28
}
- (id)textStorage;
- (void)setTextStorage:(id)arg1;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (id)textContainer;
- (void)setTextContainer:(id)arg1;
- (unsigned long long)contentHash;
- (void)setContentHash:(unsigned long long)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (void).cxx_destruct;
@end
