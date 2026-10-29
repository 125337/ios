@interface QLocalErrorReporter : NSObject
{
    NSString * _miniProgramID; // +0x8
    NSString * _businessKey; // +0x10
}
- (id)initWithMiniProgramID:(id)arg1 businessKey:(id)arg2;
- (void)uploadErrorData:(id)arg1 forFile:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadDataPackage:(id)arg1 forName:(id)arg2 withToken:(id)arg3 completion:(id /* block */)arg4;
- (void)getTokenFor:(id)arg1 callback:(id /* block */)arg2;
- (void)onGetTokenFinishLoading:(id)arg1 forName:(id)arg2 callback:(id /* block */)arg3;
- (id)appendParameterStringFor:(id)arg1 fileName:(id)arg2;
- (id)miniProgramID;
- (void)setMiniProgramID:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (void).cxx_destruct;
@end

