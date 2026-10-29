@interface IConfSDKRegisterableCallbackHolder : NSObject
{
    id /* block */ callback; // +0x8
    BOOL isContinuous; // +0x10
}
- (id)initWithCallback:(id /* block */)arg1 isContinuous:(BOOL)arg2;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (BOOL)isContinuous;
- (void)setIsContinuous:(BOOL)arg1;
- (void).cxx_destruct;
@end

