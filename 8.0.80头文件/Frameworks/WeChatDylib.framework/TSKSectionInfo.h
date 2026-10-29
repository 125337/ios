@interface TSKSectionInfo : TSKBaseModel <NSCopying>
{
    BOOL _roleChanged; // +0x8
    int _sentenceId; // +0xc
    int _sentenceStartMs; // +0x10
    int _sentenceEndMs; // +0x14
    NSString * _role; // +0x18
}
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)sentenceId;
- (void)setSentenceId:(int)arg1;
- (int)sentenceStartMs;
- (void)setSentenceStartMs:(int)arg1;
- (int)sentenceEndMs;
- (void)setSentenceEndMs:(int)arg1;
- (id)role;
- (void)setRole:(id)arg1;
- (BOOL)roleChanged;
- (void)setRoleChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
