@interface MTMathAtom : NSObject <NSCopying>
{
    NSMutableArray * _fusedAtoms; // +0x8
    unsigned long long _type; // +0x10
    NSString * _nucleus; // +0x18
    MTMathList * _superScript; // +0x20
    MTMathList * _subScript; // +0x28
    unsigned long long _fontStyle; // +0x30
    _NSRange _indexRange; // +0x38
}
+ (id)atomWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)init;
- (id)stringValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)scriptsAllowed;
- (void)setSubScript:(id)arg1;
- (void)setSuperScript:(id)arg1;
- (id)description;
- (void)fuse:(id)arg1;
- (id)finalized;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)nucleus;
- (void)setNucleus:(id)arg1;
- (id)superScript;
- (id)subScript;
- (unsigned long long)fontStyle;
- (void)setFontStyle:(unsigned long long)arg1;
- (id)fusedAtoms;
- (_NSRange)indexRange;
- (void)setIndexRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end
