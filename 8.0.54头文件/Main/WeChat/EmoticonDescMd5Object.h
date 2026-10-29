@interface EmoticonDescMd5Object : CEmoticonWrap
{
    NSNumber * _pidIndex; // +0x8
    NSNumber * _customIndex; // +0x10
}
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)pidIndex;
- (void)setPidIndex:(id)arg1;
- (id)customIndex;
- (void)setCustomIndex:(id)arg1;
- (void).cxx_destruct;
@end

