@interface MSEUIUtility : NSObject
+ (double)getContentViewWidth;
+ (double)getAlertContentViewWidth;
+ (double)getSessionListMaxHeight;
+ (BOOL)isiPad;
+ (id)imageFromColor:(id)arg1 size:(CGSize)arg2;
+ (id)getLeftBarCustomButton:(id)arg1 Title:(id)arg2 Target:(id)arg3 Selector:(SEL)arg4;
+ (void)compressVideo:(id)arg1 Block:(id /* block */)arg2;
+ (BOOL)saveTransmitDataToLocal:(id)arg1;
@end

