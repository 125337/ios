@interface MMFinderLiveNoticePosterStyleRecord : NSObject <WCTTableCoding>
{
    unsigned int _styleVersion; // +0x8
    unsigned long long _elementIndex; // +0x10
    FinderLiveQRCodePosterStyle * _style; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)elementIndex;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_elementIndex;
+ (const void *)style;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_style;
+ (const void *)styleVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_styleVersion;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (unsigned long long)elementIndex;
- (void)setElementIndex:(unsigned long long)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (unsigned int)styleVersion;
- (void)setStyleVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
