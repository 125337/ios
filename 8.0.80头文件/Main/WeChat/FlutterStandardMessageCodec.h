@interface FlutterStandardMessageCodec : NSObject <FlutterMessageCodec>
{
    FlutterStandardReaderWriter * _readerWriter; // +0x8
}
+ (id)sharedInstance;
+ (id)codecWithReaderWriter:(id)arg1;
- (id)initWithReaderWriter:(id)arg1;
- (id)encode:(id)arg1;
- (id)decode:(id)arg1;
- (void).cxx_destruct;
@end
