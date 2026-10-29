@interface OMCCaptionItem : NSObject <NSCopying>
{
    NSString * _text; // +0x8
    struct _timeRange; // +0x10
}
- (id)initWithText:(id)arg1 timeRange:(struct)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)text;
- (struct)timeRange;
- (void).cxx_destruct;
@end
