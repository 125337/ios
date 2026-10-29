@interface MMLiveGenericStatisticsItem : NSObject
{
    BOOL _highlighted; // +0x8
    NSString * _header; // +0x10
    NSString * _value; // +0x18
    NSString * _caption; // +0x20
    unsigned long long _semantic; // +0x28
}
+ (id)genericStatisticsItemWithBackendModel:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)caption;
- (void)setCaption:(id)arg1;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (unsigned long long)semantic;
- (void)setSemantic:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
