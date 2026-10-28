@interface EmoticonStoreEventCenterImpl : NSObject <EmoticonStoreEventCenterBase>
- (void)setCallback:(id)arg1;
- (void)onEmoticonStoreItemInstallFinishedAsync:(unsigned long long)arg1 item:(id)arg2;
- (void)onEmoticonStoreItemInstallFailedAsync:(unsigned long long)arg1 item:(id)arg2;
- (void)onEmoticonStoreItemChangedAsync:(unsigned long long)arg1 item:(id)arg2;
@end
