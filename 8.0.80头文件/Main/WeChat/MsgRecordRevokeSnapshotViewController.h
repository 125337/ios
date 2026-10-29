@interface MsgRecordRevokeSnapshotViewController : MMWindowViewController
{
    UIImageView * _snapshotView; // +0x80
    long long _snapshotOrientation; // +0x88
}
- (id)initWithSnapshot:(id)arg1 sourceWindow:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)rotationAngleForOrientation:(long long)arg1;
- (void)show;
- (void)finishWithAnimated:(BOOL)arg1;
- (void)hide;
- (id)snapshotView;
- (void)setSnapshotView:(id)arg1;
- (long long)snapshotOrientation;
- (void)setSnapshotOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
