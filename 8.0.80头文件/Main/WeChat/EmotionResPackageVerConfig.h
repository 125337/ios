@interface EmotionResPackageVerConfig : NSObject <YYModel>
{
    unsigned int _version; // +0x8
    unsigned int _matchVersion; // +0xc
}
+ (id)config:(id)arg1 type:(unsigned int)arg2;
- (id)debugDescription;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)matchVersion;
- (void)setMatchVersion:(unsigned int)arg1;
@end
