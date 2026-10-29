@interface UIView (AppStandardContent)
- (void)setExternalLoadImageDelegate:(id)arg1;
- (id)getExtenalLoadImageDelegate;
- (void)onExternalImageLoadDone;
- (void)onExternalImageLoadFail;
- (BOOL)getExternalDidLoadDone;
- (BOOL)getExternalDidLoadFail;
- (void)setExternalDidLoadDone;
- (void)setExternalDidLoadFail;
@end
