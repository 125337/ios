@interface WCFinderPostModifyModel : NSObject
{
    unsigned long long _sourceType; // +0x8
    NSString * _fromText; // +0x10
    NSString * _toText; // +0x18
    _NSRange _fromTextRange; // +0x20
}
- (id)initBySelectModel:(id)arg1 toText:(id)arg2;
- (id)initWithFromTextRange:(_NSRange)arg1 fromText:(id)arg2 toText:(id)arg3;
- (BOOL)isValidModel;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (long long)getModifyCount;
- (_NSRange)getToTextRange;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (_NSRange)fromTextRange;
- (void)setFromTextRange:(_NSRange)arg1;
- (id)fromText;
- (void)setFromText:(id)arg1;
- (id)toText;
- (void)setToText:(id)arg1;
- (void).cxx_destruct;
@end

