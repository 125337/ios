@interface WCFinderDraftBackgroundVideoCompressProgress : NSObject <WCFinderDataItemExt, WCFinderDraftUploadProgress>
{
    double _value; // +0x8
    id <WCFinderDraftUploadProgress> _parent; // +0x10
}
+ (id)progressWithTid:(id)arg1;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
@end
