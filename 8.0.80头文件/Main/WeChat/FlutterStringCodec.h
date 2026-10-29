@interface FlutterStringCodec : NSObject <FlutterMessageCodec>
+ (id)sharedInstance;
- (id)encode:(id)arg1;
- (id)decode:(id)arg1;
@end
