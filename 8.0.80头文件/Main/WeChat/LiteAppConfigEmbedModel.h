@interface LiteAppConfigEmbedModel : NSObject
{
    BOOL _embedding; // +0x8
    NSArray * _allowedEmbedding; // +0x10
}
- (id)init;
- (BOOL)embedding;
- (void)setEmbedding:(BOOL)arg1;
- (id)allowedEmbedding;
- (void)setAllowedEmbedding:(id)arg1;
- (void).cxx_destruct;
@end
