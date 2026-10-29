@interface CBTMDListBlockContext : NSObject
{
    unsigned long long _contextId; // +0x8
    double _unorderedPrefixWidth; // +0x10
    double _prefixGap; // +0x18
    NSMutableArray * _attachments; // +0x20
    NSMutableDictionary * _maxOrderedPrefixWidthByLevel; // +0x28
}
+ (double)prefixWidthForOrderListIndex:(unsigned int)arg1 font:(id)arg2;
- (id)initWithFont:(id)arg1 contextId:(unsigned long long)arg2;
- (void)addAttachment:(id)arg1;
- (BOOL)updateMaxPrefixWidthForOrderListIndex:(unsigned int)arg1 indentLevel:(unsigned int)arg2 font:(id)arg3;
- (double)effectivePrefixWidthForLevel:(unsigned int)arg1;
- (double)nestedMarginForLevel:(unsigned int)arg1;
- (double)headIndentForLevel:(unsigned int)arg1;
- (double)effectivePrefixWidth;
- (void)backfillAttachmentPrefixWidths;
- (unsigned long long)contextId;
- (void)setContextId:(unsigned long long)arg1;
- (double)unorderedPrefixWidth;
- (void)setUnorderedPrefixWidth:(double)arg1;
- (double)prefixGap;
- (void)setPrefixGap:(double)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (id)maxOrderedPrefixWidthByLevel;
- (void)setMaxOrderedPrefixWidthByLevel:(id)arg1;
- (void).cxx_destruct;
@end
