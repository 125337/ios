@interface CBTDramaCppToNativeImpl : NSObject <CBTDramaCppToNativeCallerBase>
{
    CBTDramaCppToNativeCallerCallback * _m_callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)onDramaUpdateAsync:(unsigned long long)arg1 dramaDataList:(id)arg2;
- (id)m_callback;
- (void)setM_callback:(id)arg1;
- (void).cxx_destruct;
@end
