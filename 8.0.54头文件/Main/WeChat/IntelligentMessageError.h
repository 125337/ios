@interface IntelligentMessageError : MMObject
{
    BOOL _isError; // +0x8
    NSString * _desc; // +0x10
}
- (BOOL)isError;
- (void)setIsError:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end

