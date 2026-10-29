@interface RTETextAttachment : NSTextAttachment
{
    RTEAttributeNode * _attribute; // +0x8
    CGSize _attachmentSize; // +0x10
    CGRect _attachmentFrame; // +0x20
}
+ (id)emptyImage;
- (id)initWithAttachmentNode:(id)arg1;
- (unsigned int)type;
- (BOOL)isEqual:(id)arg1;
- (void)configFrameWithWidth:(double)arg1;
- (CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)attribute;
- (void)setAttribute:(id)arg1;
- (CGSize)attachmentSize;
- (void)setAttachmentSize:(CGSize)arg1;
- (CGRect)attachmentFrame;
- (void)setAttachmentFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

