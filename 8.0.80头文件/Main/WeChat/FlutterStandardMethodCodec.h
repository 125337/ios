@interface FlutterStandardMethodCodec : NSObject <FlutterMethodCodec>
{
    FlutterStandardReaderWriter * _readerWriter; // +0x8
}
+ (id)sharedInstance;
+ (id)codecWithReaderWriter:(id)arg1;
- (id)initWithReaderWriter:(id)arg1;
- (id)encodeMethodCall:(id)arg1;
- (id)encodeSuccessEnvelope:(id)arg1;
- (id)encodeErrorEnvelope:(id)arg1;
- (id)decodeMethodCall:(id)arg1;
- (id)decodeEnvelope:(id)arg1;
- (void).cxx_destruct;
@end
