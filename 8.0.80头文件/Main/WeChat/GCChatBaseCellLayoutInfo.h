@interface GCChatBaseCellLayoutInfo : NSObject
{
    double _roleWidthWithLeftSpace; // +0x8
    double _compressedNameWidth; // +0x10
    double _maxNameLineWidth; // +0x18
    NSMutableDictionary * _contentInfoDict; // +0x20
    CGSize _nameSize; // +0x28
    CGSize _tagSize; // +0x38
    CGSize _roleSize; // +0x48
    CGSize _roleLabelSize; // +0x58
    CGSize _bgSize; // +0x68
    CGSize _innerContentSize; // +0x78
    CGPoint _nameLineLabelOffset; // +0x88
    UIEdgeInsets _innerContentInset; // +0x98
}
- (id)init;
- (CGSize)nameSize;
- (void)setNameSize:(CGSize)arg1;
- (CGSize)tagSize;
- (void)setTagSize:(CGSize)arg1;
- (double)roleWidthWithLeftSpace;
- (void)setRoleWidthWithLeftSpace:(double)arg1;
- (CGSize)roleSize;
- (void)setRoleSize:(CGSize)arg1;
- (CGSize)roleLabelSize;
- (void)setRoleLabelSize:(CGSize)arg1;
- (double)compressedNameWidth;
- (void)setCompressedNameWidth:(double)arg1;
- (double)maxNameLineWidth;
- (void)setMaxNameLineWidth:(double)arg1;
- (CGSize)bgSize;
- (void)setBgSize:(CGSize)arg1;
- (id)contentInfoDict;
- (void)setContentInfoDict:(id)arg1;
- (CGSize)innerContentSize;
- (void)setInnerContentSize:(CGSize)arg1;
- (UIEdgeInsets)innerContentInset;
- (void)setInnerContentInset:(UIEdgeInsets)arg1;
- (CGPoint)nameLineLabelOffset;
- (void)setNameLineLabelOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end
