@interface MTMathListBuilder : NSObject
{
    unsigned short * _chars; // +0x8
    int _currentChar; // +0x10
    unsigned long long _length; // +0x18
    MTInner * _currentInnerAtom; // +0x20
    MTEnvProperties * _currentEnv; // +0x28
    unsigned long long _currentFontStyle; // +0x30
    BOOL _spacesAllowed; // +0x38
    NSError * _error; // +0x40
}
+ (id)spaceToCommands;
+ (id)styleToCommands;
+ (id)buildFromString:(id)arg1;
+ (id)buildFromString:(id)arg1 error:(id *)arg2;
+ (id)delimToString:(id)arg1;
+ (id)mathListToString:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)dealloc;
- (BOOL)hasCharacters;
- (unsigned short)getNextCharacter;
- (void)unlookCharacter;
- (id)build;
- (id)buildInternal:(BOOL)arg1;
- (id)buildInternal:(BOOL)arg1 stopChar:(unsigned short)arg2;
- (id)readString;
- (id)readColor;
- (void)skipSpaces;
- (BOOL)expectCharacter:(unsigned short)arg1;
- (id)readCommand;
- (id)readDelimiter;
- (id)readEnvironment;
- (id)getBoundaryAtom:(id)arg1;
- (id)atomForCommand:(id)arg1;
- (id)stopCommand:(id)arg1 list:(id)arg2 stopChar:(unsigned short)arg3;
- (BOOL)applyModifier:(id)arg1 atom:(id)arg2;
- (void)setError:(unsigned long long)arg1 message:(id)arg2;
- (id)buildTable:(id)arg1 firstList:(id)arg2 row:(BOOL)arg3;
- (id)error;
- (void).cxx_destruct;
@end
