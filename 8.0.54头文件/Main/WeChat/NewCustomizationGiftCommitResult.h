@interface NewCustomizationGiftCommitResult : NSObject
{
    BOOL _success; // +0x8
    BOOL _hasCustomized; // +0x9
    BOOL _hasAntispamCustomText; // +0xa
    NSString * _antispamCustomText; // +0x10
}
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)antispamCustomText;
- (void)setAntispamCustomText:(id)arg1;
- (BOOL)hasCustomized;
- (void)setHasCustomized:(BOOL)arg1;
- (BOOL)hasAntispamCustomText;
- (void)setHasAntispamCustomText:(BOOL)arg1;
- (void).cxx_destruct;
@end

