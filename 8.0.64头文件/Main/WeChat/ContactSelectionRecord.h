@interface ContactSelectionRecord : NSObject
{
    NSString * _username; // +0x8
    long long _source; // +0x10
    long long _operation; // +0x18
}
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (long long)operation;
- (void)setOperation:(long long)arg1;
- (void).cxx_destruct;
@end
