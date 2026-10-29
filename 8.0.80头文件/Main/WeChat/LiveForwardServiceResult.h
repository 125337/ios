@interface LiveForwardServiceResult : NSObject
{
    LiveForwardResultCodeBox * _code; // +0x8
    NSString * _message; // +0x10
    NSArray * _toUsernames; // +0x18
}
+ (id)makeWithCode:(id)arg1 message:(id)arg2 toUsernames:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)code;
- (void)setCode:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)toUsernames;
- (void)setToUsernames:(id)arg1;
- (void).cxx_destruct;
@end
