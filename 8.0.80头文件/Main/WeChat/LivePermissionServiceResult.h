@interface LivePermissionServiceResult : NSObject
{
    BOOL _success; // +0x8
    NSString * _message; // +0x10
}
+ (id)makeWithSuccess:(BOOL)arg1 message:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void).cxx_destruct;
@end
