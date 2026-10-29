@interface FlutterJSONMethodCodec : NSObject <FlutterMethodCodec>
+ (id)sharedInstance;
- (id)encodeMethodCall:(id)arg1;
- (id)encodeSuccessEnvelope:(id)arg1;
- (id)encodeErrorEnvelope:(id)arg1;
- (id)decodeMethodCall:(id)arg1;
- (id)decodeEnvelope:(id)arg1;
- (id)wrapNil:(id)arg1;
- (id)unwrapNil:(id)arg1;
@end

