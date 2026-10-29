@interface MMAlbumChangeObserver : MMRootService <PHPhotoLibraryChangeObserver, MMServiceProtocol>
{
    BOOL _observerRegistered; // +0x8
    unsigned int _lastChangeTime; // +0xc
    NSURL * _lastCaptureAssetURL; // +0x10
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)enableChangeObserver;
- (void)registerObserver;
- (void)unregisterObserver;
- (BOOL)hasRegisterObserver;
- (BOOL)isPhotoChangedInSecond:(long long)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (id)lastCaptureAssetURL;
- (void)setLastCaptureAssetURL:(id)arg1;
- (BOOL)observerRegistered;
- (void)setObserverRegistered:(BOOL)arg1;
- (unsigned int)lastChangeTime;
- (void)setLastChangeTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
