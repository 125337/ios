@interface WCFinderLandScapeUtil : NSObject
+ (CGPoint)mediaPositionithMediaInfo:(id)arg1 containerSize:(CGSize)arg2 targetSize:(CGSize)arg3 isLandScape:(BOOL)arg4 isSubScene:(BOOL)arg5 attrFuncFlag:(unsigned int)arg6;
+ (CGRect)mediaFrameWithMediaInfo:(id)arg1 containerSize:(CGSize)arg2 isLandScape:(BOOL)arg3 isSubScene:(BOOL)arg4 attrFuncFlag:(unsigned int)arg5;
+ (WCShowArea)getPlayerViewShowAreaWithMediaInfo:(id)arg1 isLandScape:(BOOL)arg2;
@end
