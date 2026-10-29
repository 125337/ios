@interface OVCCoverDesc : NSObject
{
    unsigned long long _type; // +0x8
    struct _duration; // +0x10
}
+ (id)coverDescWithImageFilePath:(id)arg1 duration:(struct)arg2;
+ (id)coverDescWithImageFilePath:(id)arg1 contentCropRegion:(CGRect)arg2 duration:(struct)arg3;
+ (id)coverDescWithTimelineSnapshotTime:(struct)arg1 duration:(struct)arg2;
- (id)initWithType:(unsigned long long)arg1 duration:(struct)arg2;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (struct)duration;
@end
