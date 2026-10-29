@interface FTSFeatureSubjectProviderConfig : NSObject
{
    BOOL _enabled; // +0x8
    BOOL _hideFromOriginalSection; // +0x9
    unsigned long long _kind; // +0x10
}
- (unsigned long long)kind;
- (void)setKind:(unsigned long long)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)hideFromOriginalSection;
- (void)setHideFromOriginalSection:(BOOL)arg1;
@end
