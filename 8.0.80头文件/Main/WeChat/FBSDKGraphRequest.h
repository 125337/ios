@interface FBSDKGraphRequest : NSObject
{
    NSString * HTTPMethod; // +0x8
    NSDictionary * _parameters; // +0x10
    NSString * _tokenString; // +0x18
    NSString * _graphPath; // +0x20
    NSString * _version; // +0x28
    unsigned long long _flags; // +0x30
}
+ (BOOL)isAttachment:(id)arg1;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 forBatch:(BOOL)arg4;
+ (id)preprocessParams:(id)arg1;
- (id)initWithGraphPath:(id)arg1;
- (id)initWithGraphPath:(id)arg1 HTTPMethod:(id)arg2;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 flags:(unsigned long long)arg3;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 flags:(unsigned long long)arg5;
- (id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 version:(id)arg4 HTTPMethod:(id)arg5;
- (BOOL)isGraphErrorRecoveryDisabled;
- (void)setGraphErrorRecoveryDisabled:(BOOL)arg1;
- (BOOL)hasAttachments;
- (id)startWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (id)HTTPMethod;
- (void)setHTTPMethod:(id)arg1;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (id)tokenString;
- (id)graphPath;
- (id)version;
- (unsigned long long)flags;
- (void)setFlags:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
