@interface MJTransitionItem : NSObject
{
    unsigned long long _status; // +0x8
    NSString * _transitionID; // +0x10
    NSString * _transitionName; // +0x18
    NSURL * _previewImageURL; // +0x20
}
- (id)initWithMaterial:(id)arg1;
- (id)initWithTransitionID:(id)arg1 transitionName:(id)arg2 previewImageURL:(id)arg3 status:(unsigned long long)arg4;
- (void)updateStatus:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)transitionID;
- (void)setTransitionID:(id)arg1;
- (id)transitionName;
- (void)setTransitionName:(id)arg1;
- (id)previewImageURL;
- (void)setPreviewImageURL:(id)arg1;
- (void).cxx_destruct;
@end
