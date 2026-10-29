@interface WCFinderBulletLine : NSObject
{
    WCFinderBulletConfig * _config; // +0x8
    double _width; // +0x10
    NSMutableDictionary * _items; // +0x18
}
- (id)init;
- (BOOL)canInsertItem:(id)arg1 after:(id)arg2;
- (BOOL)addItem:(id)arg1;
- (void)deleteItem:(id)arg1;
- (BOOL)insertItemIfPossible:(id)arg1;
- (void)forceInsertItem:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

