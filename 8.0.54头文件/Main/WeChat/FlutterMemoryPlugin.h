@interface FlutterMemoryPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMemoryHost * _memoryHost; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)freeMemory;
- (id)memoryHost;
- (void)setMemoryHost:(id)arg1;
- (void).cxx_destruct;
@end

