@interface WAAgentAsrInfo : NSObject
{
    BOOL _isEnd; // +0x8
    unsigned int _role; // +0xc
    NSString * _text; // +0x10
}
- (unsigned int)role;
- (void)setRole:(unsigned int)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
