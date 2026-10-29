@interface MTMathList : NSObject <NSCopying>
{
    NSMutableArray * _atoms; // +0x8
}
+ (id)mathListWithAtoms:(id)arg1;
+ (id)mathListWithAtomsArray:(id)arg1;
- (id)init;
- (BOOL)isAtomAllowed:(id)arg1;
- (void)addAtom:(id)arg1;
- (void)insertAtom:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)append:(id)arg1;
- (void)removeLastAtom;
- (void)removeAtomAtIndex:(unsigned long long)arg1;
- (void)removeAtomsInRange:(_NSRange)arg1;
- (id)stringValue;
- (id)description;
- (id)finalized;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)atoms;
- (void).cxx_destruct;
@end
