@interface MTMathTable : MTMathAtom
{
    NSMutableArray * _alignments; // +0x48
    NSMutableArray * _cells; // +0x50
    NSString * _environment; // +0x58
    double _interColumnSpacing; // +0x60
    double _interRowAdditionalSpacing; // +0x68
}
- (id)initWithEnvironment:(id)arg1;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalized;
- (void)setCell:(id)arg1 forRow:(long long)arg2 column:(long long)arg3;
- (void)setAlignment:(long long)arg1 forColumn:(long long)arg2;
- (long long)getAlignmentForColumn:(long long)arg1;
- (unsigned long long)numColumns;
- (unsigned long long)numRows;
- (id)alignments;
- (void)setAlignments:(id)arg1;
- (id)cells;
- (void)setCells:(id)arg1;
- (id)environment;
- (void)setEnvironment:(id)arg1;
- (double)interColumnSpacing;
- (void)setInterColumnSpacing:(double)arg1;
- (double)interRowAdditionalSpacing;
- (void)setInterRowAdditionalSpacing:(double)arg1;
- (void).cxx_destruct;
@end
