@interface WCTError : NSError
{
    unsigned long long _level; // +0x28
    NSString * _message; // +0x30
}
- (unsigned long long)extendedCode;
- (id)sql;
- (long long)tag;
- (id)path;
- (id)initWithCode:(unsigned long long)arg1 level:(unsigned long long)arg2 message:(id)arg3 userInfo:(id)arg4;
- (id)initWithError:(const void *)arg1;
- (BOOL)isOK;
- (BOOL)isCorruption;
- (id)stringForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)description;
- (unsigned long long)level;
- (id)message;
- (void).cxx_destruct;
@end
