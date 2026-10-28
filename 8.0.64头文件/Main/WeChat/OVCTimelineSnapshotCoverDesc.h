@interface OVCTimelineSnapshotCoverDesc : OVCCoverDesc
{
    struct _snapshotTime; // +0x8
}
- (id)initWithSnapshotTime:(struct)arg1 duration:(struct)arg2;
- (struct)snapshotTime;
@end
