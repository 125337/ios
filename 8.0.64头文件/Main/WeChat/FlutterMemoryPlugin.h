@interface FlutterMemoryPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMemoryHost * _memoryHost; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)freeMemory:(id /* block */)arg1;
- (void)getMemInfoWithCallback:(id /* block */)arg1;
- (id)memoryHost;
- (void)setMemoryHost:(id)arg1;
- (void).cxx_destruct;
@end
