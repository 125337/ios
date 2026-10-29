@interface TingObjcMusicCommentServiceCpp : UnitRCObjcBaseProxyClass <TingObjcMusicCommentService>
+ (id)sharedInstance;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)opLike:(int)arg1 likeType:(int)arg2 isCancel:(BOOL)arg3 listenId:(id)arg4 categoryId:(id)arg5 reviewCategoryId:(id)arg6 reportClientInfo:(id)arg7 cookie:(id)arg8;
- (void)getListenCommentInfo:(id)arg1 recommendInfo:(id)arg2 statusClientInfo:(id)arg3 options:(id)arg4;
@end
