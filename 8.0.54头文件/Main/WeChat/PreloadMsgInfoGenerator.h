@interface PreloadMsgInfoGenerator : NSObject
{
    int _direction; // +0x8
    NSMutableArray * _preloadMsgs; // +0x10
    CADisplayLink * _preloadTimer; // +0x18
    id /* block */ _mapBlock; // +0x20
    id /* block */ _getBlock; // +0x28
}
+ (id)generatorWithDirection:(int)arg1;
- (id)initWithDirection:(int)arg1;
- (id)preloadMsgs;
- (id)addMessageArray:(id)arg1;
- (id /* block */)onMap;
- (id /* block */)onGet;
- (void)reset;
- (void)startTimer;
- (void)stopTimer;
- (void)doOnePreload;
- (void)setPreloadMsgs:(id)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)preloadTimer;
- (void)setPreloadTimer:(id)arg1;
- (id /* block */)mapBlock;
- (void)setMapBlock:(id /* block */)arg1;
- (id /* block */)getBlock;
- (void)setGetBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

