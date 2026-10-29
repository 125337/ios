@interface RawVideoExportSession : NSObject
{
    unsigned long long _type; // +0x8
    AVAssetExportSession * _exportSession; // +0x10
}
- (id)initWithExportSession:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)exportSession;
- (void)setExportSession:(id)arg1;
- (void).cxx_destruct;
@end
