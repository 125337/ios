@interface QMapLoggerConfig : NSObject
{
    BOOL _toFile; // +0x8
    BOOL _toConsole; // +0x9
    int _level; // +0xc
    NSArray * _tags; // +0x10
}
- (BOOL)toFile;
- (void)setToFile:(BOOL)arg1;
- (BOOL)toConsole;
- (void)setToConsole:(BOOL)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (id)tags;
- (void)setTags:(id)arg1;
- (void).cxx_destruct;
@end

