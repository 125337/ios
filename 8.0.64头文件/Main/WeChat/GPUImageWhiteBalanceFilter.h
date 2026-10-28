@interface GPUImageWhiteBalanceFilter : GPUImageFilter
{
    int temperatureUniform; // +0xe8
    int tintUniform; // +0xec
    double _temperature; // +0xf0
    double _tint; // +0xf8
}
- (id)init;
- (void)setTemperature:(double)arg1;
- (void)setTint:(double)arg1;
- (double)temperature;
- (double)tint;
@end
