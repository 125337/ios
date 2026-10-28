@interface KindaLiteUseCaseWrapper : NSObject <MMUseCaseCallback, MMIKindaLiteUseCaseWrapper>
{
    KindaLiteUseCase * _kindaLiteUseCase; // +0x8
    MMVoidITransmitKvDataCallback * _callback; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)startKindaLiteUseCaseImpl:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (void)call:(id)arg1;
- (id)kindaLiteUseCase;
- (void)setKindaLiteUseCase:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
