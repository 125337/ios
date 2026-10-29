@interface StartTask : NSObject
{
    KindaLiteUseCase * _useCase; // +0x8
    NSString * _url; // +0x10
    MMITransmitKvData * _data; // +0x18
    id <MMUseCaseCallback> _callback; // +0x20
}
- (id)useCase;
- (void)setUseCase:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
