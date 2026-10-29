@interface WCFinderDraftFeedUploadProgress : NSObject <WCFinderDraftUploadProgress>
{
    double _value; // +0x8
    id <WCFinderDraftUploadProgress> _parent; // +0x10
}
+ (id)progressWithTid:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (double)value;
- (void)setValue:(double)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
@end
