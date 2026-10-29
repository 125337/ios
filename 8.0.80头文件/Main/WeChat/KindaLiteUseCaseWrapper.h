@interface KindaLiteUseCaseWrapper : NSObject <MMUseCaseCallback, MMIKindaLiteUseCaseWrapper>
{
    MMVoidITransmitKvDataCallback * _callback; // +0x8
    MMContext * _m_context; // +0x10
}
- (void)dealloc;
- (void)startKindaLiteUseCaseImpl:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (BOOL)isEnableLiteAppUseCase:(id)arg1 data:(id)arg2;
- (void)call:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)m_context;
- (void)setM_context:(id)arg1;
- (void).cxx_destruct;
@end
