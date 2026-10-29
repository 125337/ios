@interface CBTAuthButton : NSObject
{
    NSString * _text; // +0x8
    CBTAuthTarget * _authTarget; // +0x10
    NSArray * _resultActions; // +0x18
}
- (id)text;
- (void)setText:(id)arg1;
- (id)authTarget;
- (void)setAuthTarget:(id)arg1;
- (id)resultActions;
- (void)setResultActions:(id)arg1;
- (void).cxx_destruct;
@end
