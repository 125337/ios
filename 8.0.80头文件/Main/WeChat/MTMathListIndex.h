@interface MTMathListIndex : NSObject
{
    unsigned int _subIndexType; // +0x8
    unsigned long long _atomIndex; // +0x10
    MTMathListIndex * _subIndex; // +0x18
}
+ (id)level0Index:(unsigned long long)arg1;
+ (id)indexAtLocation:(unsigned long long)arg1 withSubIndex:(id)arg2 type:(unsigned int)arg3;
- (id)levelUpWithSubIndex:(id)arg1 type:(unsigned int)arg2;
- (id)levelDown;
- (id)previous;
- (id)next;
- (BOOL)hasSubIndexOfType:(unsigned int)arg1;
- (BOOL)isAtBeginningOfLine;
- (BOOL)isAtSameLevel:(id)arg1;
- (unsigned long long)finalIndex;
- (unsigned int)finalSubIndexType;
- (id)description;
- (BOOL)isEqualToIndex:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)atomIndex;
- (void)setAtomIndex:(unsigned long long)arg1;
- (unsigned int)subIndexType;
- (void)setSubIndexType:(unsigned int)arg1;
- (id)subIndex;
- (void)setSubIndex:(id)arg1;
- (void).cxx_destruct;
@end
