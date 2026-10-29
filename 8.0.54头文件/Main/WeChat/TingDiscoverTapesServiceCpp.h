@interface TingDiscoverTapesServiceCpp : UnitRCObjcBaseProxyClass <TingDiscoverTapesService>
+ (id)createWithScene:(int)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (BOOL)discoverMusicTapes:(unsigned int)arg1;
- (void)getListenCommentInfo:(unsigned int)arg1 listenIds:(id)arg2;
- (void)opLike:(unsigned int)arg1 scene:(int)arg2 listenId:(id)arg3 isCancel:(BOOL)arg4;
@end

