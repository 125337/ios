@interface TextStateBrandBaseSignature : NSObject
{
    NSString * _textStateSignature; // +0x8
    NSString * _sourceId; // +0x10
}
- (id)businessInfo;
- (BOOL)isValid;
- (id)description;
- (id)textStateSignature;
- (void)setTextStateSignature:(id)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (void).cxx_destruct;
@end
