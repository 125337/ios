@interface WCFinderBindHalfScreenObjectModel : NSObject
{
    NSHashTable * _bindObjectHashTable; // +0x8
    NSString * _registerKey; // +0x10
    double _heightRatio; // +0x18
    UINavigationBar * _navigationBar; // +0x20
}
- (id)init;
- (void)restoreNavigationBarAfterHalfScreenDismiss;
- (id)bindObjectHashTable;
- (void)setBindObjectHashTable:(id)arg1;
- (id)registerKey;
- (void)setRegisterKey:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg1;
- (void).cxx_destruct;
@end
