@interface TingStreamPlayerListenerCpp : UnitRCObjcBaseProxyClass <TingStreamPlayerListener>
- (void)onTingStreamPlayerStateChanged:(int)arg1 event:(int)arg2;
- (void)onTingStreamPlayerProgressUpdate:(int)arg1 duration:(int)arg2 loudness:(double)arg3;
@end
