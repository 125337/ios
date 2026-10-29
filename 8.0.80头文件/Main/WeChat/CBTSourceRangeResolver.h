@interface CBTSourceRangeResolver : NSObject
{
    NSArray * _entries; // +0x8
    NSData * _utf32Source; // +0x10
    NSTextStorage * _textStorage; // +0x18
}
+ (id)buildIndexFromTextStorage:(id)arg1;
+ (id)encodeUTF32:(id)arg1;
+ (unsigned long long)proportionalMap:(unsigned long long)arg1 runLen:(unsigned long long)arg2 contentStart:(unsigned long long)arg3 contentLen:(unsigned long long)arg4;
- (id)initWithTextStorage:(id)arg1 markdownText:(id)arg2;
- (BOOL)hasValidSource;
- (unsigned long long)sourceOffsetForShadowIndex:(unsigned long long)arg1 isFront:(BOOL)arg2 shadow:(id)arg3;
- (unsigned long long)sourceOffsetAtPhysicalIndex:(unsigned long long)arg1 isFront:(BOOL)arg2;
- (id)entryContainingPhysicalIndex:(unsigned long long)arg1;
- (unsigned long long)nearestSourceOffsetAfter:(unsigned long long)arg1;
- (unsigned long long)nearestSourceOffsetBefore:(unsigned long long)arg1;
- (unsigned long long)mapPhysicalIndex:(unsigned long long)arg1 withinEntry:(id)arg2 isFront:(BOOL)arg3;
- (unsigned long long)sourceOffsetForPartialSpan:(id)arg1 shadowIndex:(unsigned long long)arg2 isFront:(BOOL)arg3 shadow:(id)arg4;
- (unsigned long long)mapCodeBlockOffset:(unsigned long long)arg1 span:(id)arg2 unionRange:(_NSRange)arg3 entry:(id)arg4 isFront:(BOOL)arg5 shadow:(id)arg6;
- (unsigned long long)mapCodeBlockLangOffset:(unsigned long long)arg1 span:(id)arg2 entry:(id)arg3 isFront:(BOOL)arg4;
- (unsigned long long)codeBlockEndOffsetAfterEntry:(id)arg1;
- (unsigned long long)mapLinearOffset:(unsigned long long)arg1 unionRange:(_NSRange)arg2 entry:(id)arg3;
- (BOOL)isCodeBlockAtPhysicalIndex:(unsigned long long)arg1;
- (BOOL)isTableAtPhysicalIndex:(unsigned long long)arg1;
- (unsigned long long)mapTableCellOffset:(id)arg1 shadowIndex:(unsigned long long)arg2 isFront:(BOOL)arg3 shadow:(id)arg4;
- (unsigned long long)resolveGlueSpanOffset:(id)arg1 isFront:(BOOL)arg2 shadow:(id)arg3;
- (unsigned long long)cellSourceRangeBoundaryForSpan:(id)arg1 isFront:(BOOL)arg2;
- (id)sliceFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)entries;
- (void)setEntries:(id)arg1;
- (id)utf32Source;
- (void)setUtf32Source:(id)arg1;
- (id)textStorage;
- (void)setTextStorage:(id)arg1;
- (void).cxx_destruct;
@end
