@interface WCDeviceScanExt : MMObject
{
    WCDevice * _device; // +0x8
    NSData * _extData; // +0x10
    unsigned int _lastOnScanTime; // +0x18
}
- (id)device;
- (void)setDevice:(id)arg1;
- (id)extData;
- (void)setExtData:(id)arg1;
- (unsigned int)lastOnScanTime;
- (void)setLastOnScanTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
