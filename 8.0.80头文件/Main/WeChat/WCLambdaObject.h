@interface WCLambdaObject : NSObject
{
    id /* block */ _lambdaAction; // +0x8
}
+ (id)createWithLambda:(id /* block */)arg1;
- (id)initWithLambda:(id /* block */)arg1;
- (void)executeWithData:(id)arg1;
- (void)execute;
- (id /* block */)lambdaAction;
- (void)setLambdaAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
