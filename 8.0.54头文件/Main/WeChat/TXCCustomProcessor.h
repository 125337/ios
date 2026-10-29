@interface TXCCustomProcessor : TXCVideoBindableSerialGroup
{
    TXCCustomConvertFilter * _convertFilter; // +0x8
}
- (id)initWithContext:(id)arg1 delegate:(id)arg2 format:(unsigned long long)arg3 bufferType:(unsigned long long)arg4;
- (id)convertFilter;
- (void)setConvertFilter:(id)arg1;
- (void).cxx_destruct;
@end

