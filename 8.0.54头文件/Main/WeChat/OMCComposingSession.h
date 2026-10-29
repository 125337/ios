@interface OMCComposingSession : NSObject
{
    SharedPtr<XMSComposingSession> _backingComposingSession; // +0x8
    OMCTimeline * _timeline; // +0x10
    OMCProject * _project; // +0x18
}
+ (id)sessionWithProject:(id)arg1 imageOriginDuration:(struct)arg2 minSegmentPreservedDuration:(struct)arg3 calcDurationWithAllSegments:(BOOL)arg4;
- (id)initWithBackingComposingSession:(const void *)arg1 imageOriginDuration:(struct)arg2 minSegmentPreservedDuration:(struct)arg3;
- (id)initWithBackingComposingSession:(const void *)arg1 project:(id)arg2 timeline:(id)arg3;
- (id)timeline;
- (id)undo;
- (id)redo;
- (void)undoWithCompletion:(id /* block */)arg1;
- (void)redoWithCompletion:(id /* block */)arg1;
- (void)takeSnapshotWithOpDesc:(id)arg1;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (long long)currentComposingStepIndex;
- (long long)maxComposingStepIndex;
- (void)updateProject;
- (BOOL)isClipSegmentMutated:(id)arg1 originAssetID:(id)arg2;
- (void)exportClipbundleWithCoverImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)project;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

