@interface KaraFeatureCenter_Text_Tokenize : NSObject
{
    NSArray * _tokenTypeIds; // +0x8
    NSArray * _attentionMask; // +0x10
}
- (id)description;
- (id)initWithTokenTypeIds:(id)arg1 attentionMask:(id)arg2;
- (id)tokenTypeIds;
- (void)setTokenTypeIds:(id)arg1;
- (id)attentionMask;
- (void)setAttentionMask:(id)arg1;
- (void).cxx_destruct;
@end

