@interface OpenApiErrorParams : NSObject
{
    NSString * _errDesc; // +0x8
    NSString * _bottomBtnDesc; // +0x10
    id /* block */ _bottomBtnHandler; // +0x18
}
- (id)description;
- (id)errDesc;
- (void)setErrDesc:(id)arg1;
- (id)bottomBtnDesc;
- (void)setBottomBtnDesc:(id)arg1;
- (id /* block */)bottomBtnHandler;
- (void)setBottomBtnHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

