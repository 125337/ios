@interface CBTShadowText : NSObject
{
    NSString * _shadowText; // +0x8
    NSArray * _spans; // +0x10
    NSArray * _physicalStarts; // +0x18
    NSArray * _shadowStarts; // +0x20
}
+ (id)buildFromTextStorage:(id)arg1 attachmentViewResolver:(id /* block */)arg2;
- (unsigned long long)length;
- (id)spanContainingShadowIndex:(unsigned long long)arg1;
- (id)sliceShadowRange:(_NSRange)arg1;
- (unsigned long long)shadowIndexForPhysicalIndex:(unsigned long long)arg1;
- (_NSRange)shadowRangeForPhysicalAttachmentAtIndex:(unsigned long long)arg1;
- (id)spansForAttachmentView:(id)arg1;
- (id)spanForAttachmentView:(id)arg1 userInfo:(id)arg2;
- (id)shadowText;
- (void)setShadowText:(id)arg1;
- (id)spans;
- (void)setSpans:(id)arg1;
- (id)physicalStarts;
- (void)setPhysicalStarts:(id)arg1;
- (id)shadowStarts;
- (void)setShadowStarts:(id)arg1;
- (void).cxx_destruct;
@end
