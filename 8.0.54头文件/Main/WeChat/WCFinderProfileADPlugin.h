@interface WCFinderProfileADPlugin : NSObject
{
    BOOL _isUsed; // +0x8
    FinderUserpageAdInfo * _adInfo; // +0x10
    NSHashTable * _observers; // +0x18
}
- (id)init;
- (void)fillAdInfo:(id)arg1;
- (void)setIsUsed:(BOOL)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)adItem;
- (id)tidOfAd;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (BOOL)isUsed;
- (id)observers;
- (void)setObservers:(id)arg1;
- (void).cxx_destruct;
@end

