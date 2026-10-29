@interface MTEnvProperties : NSObject
{
    BOOL _ended; // +0x8
    NSString * _envName; // +0x10
    long long _numRows; // +0x18
}
- (id)initWithName:(id)arg1;
- (id)envName;
- (BOOL)ended;
- (void)setEnded:(BOOL)arg1;
- (long long)numRows;
- (void)setNumRows:(long long)arg1;
- (void).cxx_destruct;
@end
