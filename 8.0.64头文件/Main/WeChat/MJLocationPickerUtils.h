@interface MJLocationPickerUtils : NSObject
+ (id)handler;
+ (void)setHandler:(id)arg1;
+ (void)presentLocationPickerFrom:(id)arg1 didFinishPick:(id /* block */)arg2 didCancel:(id /* block */)arg3;
+ (void)clear;
@end
