@interface CBTHalfScreenForwardRoute : NSObject
+ (BOOL)isExternalEntryEnabled;
+ (id)optionsWithXml:(id)arg1 enterScene:(int)arg2 srcInfoParams:(id)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (id)forwardSourceId;
@end
