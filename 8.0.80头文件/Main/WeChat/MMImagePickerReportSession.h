@interface MMImagePickerReportSession : NSObject
{
    BOOL _sent; // +0x8
    NSDictionary * _seed; // +0x10
    NSString * _mediaGroupId; // +0x18
    MMImagePickerReportGesture * _gesture; // +0x20
}
- (id)seed;
- (void)setSeed:(id)arg1;
- (id)mediaGroupId;
- (void)setMediaGroupId:(id)arg1;
- (BOOL)sent;
- (void)setSent:(BOOL)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (void).cxx_destruct;
@end
